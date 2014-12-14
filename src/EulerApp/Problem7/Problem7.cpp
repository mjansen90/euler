//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//  What is the 10 001st prime number ?
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem7.h"

#include <iostream>

// Constructor
Problem7::Problem7() :
   BaseProblem()
{

}

// Destructor
Problem7::~Problem7()
{

}

// Main execution function
void Problem7::Execute()
{
   int primeCount = 0;
   long lastPrime = 0;
   long maxNumToTest = 15;

   for (long i = 2;/* i <= maxNumToTest && */primeCount < 10001; ++i)
   {
      bool prime = true;
      for (long j = 2; j <= i / 2; ++j)
      {
         if (i % j == 0)
         {
            prime = false;
            break;
         }
      }

      if (prime)
      {
         ++primeCount;
         lastPrime = i;
#ifdef VEBOSE
         std::cout << "Found prime number #" << primeCount << ": " << lastPrime << std::endl;
#endif
      }
   }

   std::cout << "Answer: " << lastPrime << std::endl;
}
