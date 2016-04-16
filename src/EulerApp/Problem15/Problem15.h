//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
//
//
//How many such routes are there through a 20×20 grid ?
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "BaseProblem.h"


class Problem15 : public BaseProblem
{
public:
	Problem15();
	~Problem15();

protected:
   virtual void Execute();
   virtual std::string ProblemName() { return "Problem15"; }
};
