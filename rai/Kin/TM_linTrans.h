/*  ------------------------------------------------------------------
    Copyright (c) 2017 Marc Toussaint
    email: marc.toussaint@informatik.uni-stuttgart.de

    This code is distributed under the MIT License.
    Please see <root-path>/LICENSE for details.
    --------------------------------------------------------------  */

#pragma once
#include "taskMap.h"

//===========================================================================

struct TM_LinTrans : TaskMap {
  TaskMap *map;
  arr A,a;
  
  TM_LinTrans(TaskMap *map, const arr& A, const arr& a) : map(map), A(A), a(a) {}
  ~TM_LinTrans(){ if(map) delete map; map=NULL; }
  
  virtual void phi(arr& y, arr& J, const rai::KinematicWorld& G);
  virtual uint dim_phi(const rai::KinematicWorld& G);
  virtual rai::String shortTag(const rai::KinematicWorld& G) { return STRING("LinTrans:"<<map->shortTag((G))); }
};
