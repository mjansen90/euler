//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
// Find the sum of all the primes below two million.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem10.h"

#include <iostream>

// Constructor
Problem10::Problem10() :
   BaseProblem()
{

}

// Destructor
Problem10::~Problem10()
{

}

// Main execution function
void Problem10::Execute()
{
   long maxNum = 2000000; //2m
   long long primeSum = 0;

   for (long i = 2; i < maxNum; ++i)
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

#ifdef VERBOSE
      if (i % 100000 == 0)
      {
         std::cout << "Testing primes above " << i << std::endl;
         std::cout << "Current sum: " << primeSum << std::endl;
      }
#endif

      if (prime)
      {
         primeSum += i;
#ifdef VERBOSE
         std::cout << "Found prime number: " << i << std::endl;
#endif
      }
   }

   std::cout << "Answer: " << primeSum << std::endl;
}
