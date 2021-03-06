#ifndef __CONST_H
#define __CONST_H

#include "expression.h"

class ConstExpr : public Expression
{
private:
  double val;
public:
  ConstExpr (double _val);
  void accept (Visitor*);
  double getDoubleVal ();

};

#endif
