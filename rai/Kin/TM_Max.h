/*  ------------------------------------------------------------------
    Copyright (c) 2017 Marc Toussaint
    email: marc.toussaint@informatik.uni-stuttgart.de

    This code is distributed under the MIT License.
    Please see <root-path>/LICENSE for details.
    --------------------------------------------------------------  */

#pragma once
#include "taskMap.h"

//===========================================================================

struct TM_Max : TaskMap {
  TaskMap *map;
  bool neg;
  
  TM_Max(TaskMap *map, bool neg=false) : map(map), neg(neg) {}
  
  virtual void phi(arr& y, arr& J, const rai::KinematicWorld& G);
  virtual uint dim_phi(const rai::KinematicWorld& G) { return 1; }
  virtual rai::String shortTag(const rai::KinematicWorld& G) { return STRING("Max:"<<map->shortTag((G))); }
};
