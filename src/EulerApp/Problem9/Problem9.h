//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//                                        a^2 + b^2 = c^2
//
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2
//
// There exists exactly one Pythagorean triplet for which a + b + c = 1000
// Find the product abc.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "BaseProblem.h"


class Problem9 : public BaseProblem
{
public:
	Problem9();
	~Problem9();

protected:
   virtual void Execute();
   virtual std::string ProblemName() { return "Problem9"; }
};
