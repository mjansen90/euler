//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Base Problem
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "BaseProblem.h"

#include <chrono>
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
   std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
   Execute();
   std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
   std::cout << "--------------------------------" << std::endl
             << "-- Finished: " << ProblemName().c_str() << std::endl
             << "-- Execution Time: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count()    << " ns" << std::endl
             << "-- Execution Time: " << std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count()   << " us" << std::endl
             << "-- Execution Time: " << std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()   << " ms" << std::endl
             << "-- Execution Time: " << std::chrono::duration_cast<std::chrono::seconds>(t2 - t1).count()        << " s"  << std::endl
             << "--------------------------------" << std::endl << std::endl;
}