//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//

//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem5.h"

#include <iostream>

// Constructor
Problem5::Problem5() :
   BaseProblem()
{

}

// Destructor
Problem5::~Problem5()
{

}

// Main execution function
void Problem5::Execute()
{
   bool found = false;
   int curNum = 1000; // number to start at
   int maxToTest = 500000000; // number to give up at

   while (!found && curNum < maxToTest)
   {
      ++curNum;

      // innocent until proven guilty
      found = true;
      for (int i = 1; i <= 20; ++i)
      {
         if (curNum % i != 0)
         {
            found = false;
            break;
         }
      }
   }

   std::cout << "Answer: " << curNum << std::endl;
}
