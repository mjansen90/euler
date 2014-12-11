//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//
// Find the largest palindrome made from the product of two 3 - digit numbers.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "BaseProblem.h"


class Problem4 : public BaseProblem
{
public:
	Problem4();
	~Problem4();

protected:
   virtual void Execute();
   virtual std::string ProblemName() { return "Problem4"; }
};
