//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The sum of the squares of the first ten natural numbers is,
//                                  1^2 + 2^2 + ... + 10^2 = 385
//
// The square of the sum of the first ten natural numbers is,
//                                 (1 + 2 + ... + 10)^2 = 55^2 = 3025
//
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
//
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem6.h"

#include <iostream>
#include <math.h>

// Constructor
Problem6::Problem6() :
   BaseProblem()
{

}

// Destructor
Problem6::~Problem6()
{

}

// Main execution function
void Problem6::Execute()
{
   int numOfNums = 100;
   long long sumOfSquares = 0;
   long long squareOfSum = 0;

   for (int i = 1; i <= numOfNums; ++i)
   {
      sumOfSquares += (long long)pow(i, 2);
      squareOfSum += i;
   }

   squareOfSum = (long long)pow(squareOfSum, 2);

   std::cout << "Answer: " << squareOfSum << " - " << sumOfSquares << " = " << squareOfSum - sumOfSquares << std::endl;
}
