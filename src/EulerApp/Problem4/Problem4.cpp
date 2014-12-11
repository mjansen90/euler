//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//
// Find the largest palindrome made from the product of two 3 - digit numbers.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem4.h"

#include <iostream>
#include <sstream>

// Constructor
Problem4::Problem4() :
   BaseProblem()
{

}

// Destructor
Problem4::~Problem4()
{

}

bool IsPalindromic(int num)
{
   bool ret = true;
   std::stringstream ss;
   ss << num;
   std::string str = ss.str();
   for (unsigned int i = 0; i < ss.str().length(); ++i)
   {
      if (str[i] != str[str.length() - i - 1])
      {
         ret = false;
         break;
      }
   }
   return ret;
}

// Main execution function
void Problem4::Execute()
{
   // Only testing the upper 100 in each. Good chance of it being there
   bool found = false;
   int answer = 0;
   for (int i = 999; i > 899 && !found; i--)
   {
#ifdef VERBOSE
      std::cout << "Testing: " << i << std::endl;
#endif
      for (int j = 999; j > 899; j--)
      {
         answer = i * j;
         if (IsPalindromic(answer))
         {
            found = true;
            break;
         }
      }
   }
   std::cout << "Answer: " << answer << std::endl;
}
