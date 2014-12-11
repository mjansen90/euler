//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Each new term in the Fibonacci sequence is generated by adding the previous two terms.By starting with 1 and 2, the first 10 terms will be :
//
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even - valued terms.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem2.h"

#include <iostream>

// Constructor
Problem2::Problem2() :
   BaseProblem()
{

}

// Destructor
Problem2::~Problem2()
{

}

// Main execution function
void Problem2::Execute()
{
   long long answer = 0;
   int prev = 1;
   int cur = 2;
   int next = 0;

   while (next < 4e6)
   {
      if (cur % 2 == 0)
      {
#ifdef VERBOSE
         std::cout << "Found even number: " << cur << std::endl;
#endif
         answer += cur;
      }

      next = prev + cur;
      prev = cur;
      cur = next;
   }

   std::cout << "Answer: " << answer << std::endl;
}