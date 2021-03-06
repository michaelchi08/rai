/*  ------------------------------------------------------------------
    Copyright (c) 2017 Marc Toussaint
    email: marc.toussaint@informatik.uni-stuttgart.de

    This code is distributed under the MIT License.
    Please see <root-path>/LICENSE for details.
    --------------------------------------------------------------  */

#pragma once

#include "taskMap.h"

struct TM_InsideBox : TaskMap {
  int i, j;               ///< which shapes does it refer to?
  rai::Vector ivec;       ///< additional position or vector
  double margin;
  
  TM_InsideBox(int iShape=-1, int jShape=-1);
  TM_InsideBox(const rai::KinematicWorld& G,
               const char* iShapeName=NULL, const rai::Vector& ivec=NoVector, const char* jShapeName=NULL, double _margin=.03);
               
  virtual void phi(arr& y, arr& J, const rai::KinematicWorld& G);
  virtual uint dim_phi(const rai::KinematicWorld& G);
  virtual rai::String shortTag(const rai::KinematicWorld& G);
};
