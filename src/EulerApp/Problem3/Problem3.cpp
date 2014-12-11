//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143 ?
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem3.h"

#include <chrono>
#include <iostream>

// Constructor
Problem3::Problem3() :
   BaseProblem()
{

}

// Destructor
Problem3::~Problem3()
{

}

// Main execution function
void Problem3::Execute()
{
   long long number = 600851475143;
   long long testMax = 10000;
   long long largest = 0;

   // time for some brute force. increase testMax until we get the right answer
   for (long long i = 3; i < testMax; ++i)
   {
      bool prime = true;
      for (long long j = 2; j < i; ++j)
      {
         if (i % j == 0)
         {
            prime = false;
            break;
         }
      }

      if (prime)
      {
         if (number % i == 0)
         {
#ifdef VERBOSE
            std::cout << "Found prime factor: " << i << std::endl;
#endif
            largest = i;
         }
      }
   }

   std::cout << "Answer: " << largest << std::endl;
}
