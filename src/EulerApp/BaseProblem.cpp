//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Base Problem
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "BaseProblem.h"

#include <iostream>

// Constructor
BaseProblem::BaseProblem()
{

}

// Destructor
BaseProblem::~BaseProblem()
{

}

// Outputs information about the problem and executes
void BaseProblem::Run()
{
   std::cout << "--------------------------------" << std::endl
             << "-- Executing: " << ProblemName().c_str() << std::endl
             << "--------------------------------" << std::endl;
   Execute();
   std::cout << "--------------------------------" << std::endl
             << "-- Finished: " << ProblemName().c_str() << std::endl
             << "--------------------------------" << std::endl << std::endl;
}