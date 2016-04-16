//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//The following iterative sequence is defined for the set of positive integers :
//
//n->n / 2 (n is even)
//n -> 3n + 1 (n is odd)
//
//Using the rule above and starting with 13, we generate the following sequence :
//
//13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
//It can be seen that this sequence(starting at 13 and finishing at 1) contains 10 terms.Although it has not been proved yet(Collatz Problem), it is thought that all starting numbers finish at 1.
//
//Which starting number, under one million, produces the longest chain ?
//
//NOTE : Once the chain starts the terms are allowed to go above one million.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem14.h"

#include <iostream>

// Constructor
Problem14::Problem14() :
   BaseProblem()
{

}

// Destructor
Problem14::~Problem14()
{

}

// Gets the number of numbers in the sequence, using the above iterative sequence
unsigned long long Problem14::GetSequenceLength(unsigned long long num)
{
   int ret = 0;
   while (num > 1)
   {
      if (num % 2 == 0)
      {
         // Even: n = n / 2
         num = num / 2;
      }
      else
      {
         // Odd: n = 3n + 1
         num = 3 * num + 1;
      }
      ++ret;
   }
   return ret + 1; // Tack on another for the 1 that ends the sequence
}

// Main execution function
void Problem14::Execute()
{
   unsigned long long answer = 0;
   unsigned long long largestSequence = 0;
   for (unsigned long long i = 0; i < 1000000; ++i)
   {
      if (i % 1000 == 0)
      {
         std::cout << i << std::endl;
      }
      if (i == 999999)
      {
         bool hit = true;
      }
      unsigned long long seqLen = GetSequenceLength(i);
      if (seqLen > largestSequence)
      {
         std::cout << "Largest so far: " << i << " with length of " << seqLen << std::endl;
         largestSequence = seqLen;
         answer = i;
      }
   }
   std::cout << "Answer: " << answer << " with length of " << largestSequence << std::endl;
}
