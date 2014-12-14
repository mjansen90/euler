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

#include "Problem9.h"

#include <iostream>

// Constructor
Problem9::Problem9() :
   BaseProblem()
{

}

// Destructor
Problem9::~Problem9()
{

}

// Main execution function
void Problem9::Execute()
{
   int answer = 0;
   int maxToTest = 500;
   for (int a = 1; a < maxToTest && answer == 0; ++a)
   {
      for (int b = a; b < maxToTest && answer == 0; ++b)
      {
         for (int c = 1; c < maxToTest; ++c)
         {
            if (a + b + c == 1000)
            {
               if (pow(a, 2) + pow(b, 2) == pow(c, 2))
               {
                  answer = a * b * c;
                  std::cout << "Found answer: " << a << " * " << b << " * " << c << " = " << answer << std::endl;
                  break;
               }
            }
         }
      }
   }
}
