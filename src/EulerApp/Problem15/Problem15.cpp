//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
//
//
//How many such routes are there through a 20×20 grid ?
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Problem15.h"

#include "Windows.h"

#include <algorithm>
#include <iostream>
#include <thread>
#include <vector>

const int SQUARE_WIDTH = 20;

size_t a[SQUARE_WIDTH][SQUARE_WIDTH] = { false };

volatile LONG64 g_Total = 0;
volatile long g_ThreadIndex = 0;
std::vector<std::thread> g_Threads;

// Constructor
Problem15::Problem15() :
   BaseProblem()
{

}

// Destructor
Problem15::~Problem15()
{

}


void go(int x, int y)
{
#ifdef VERBOSE
   std::cout << "->(" << x << "," << y << ")";
#endif
   if (x == SQUARE_WIDTH && y == SQUARE_WIDTH)
   {
      // donezo
      InterlockedIncrement64(&g_Total);
      if (g_Total == 0)
      {
         std::cout << "Overflow!";
      }
#ifdef VERBOSE
      std::cout << "->done!" << std::endl;
#endif
   }
   else
   {
      if (x < SQUARE_WIDTH)
      {
         if (y == 1)
         {
            g_Threads.push_back(std::thread(&go, x + 1, y));
            std::cout << "Spawning x thread..." << std::endl;
         }
         else
         {
            go(x + 1, y);
         }
      }
      if (y < SQUARE_WIDTH)
      {
         //if (x == 1/*y > g_ThreadIndex*/)
         //{
         //   //_InterlockedIncrement(&g_ThreadIndex);
         //   g_Threads.push_back(std::thread(&go, x, y + 1));
         //   std::cout << "Spawning y thread..." << std::endl;
         //}
         //else
         {
            go(x, y + 1);
         }
      }
   }
}

// Main execution function
void Problem15::Execute()
{
   int x = 0;
   int y = 0;
   go(x, y);

   std::for_each(g_Threads.begin(), g_Threads.end(), [](std::thread& thread)
   {
      thread.join();
   });

   std::cout << "Answer: " << g_Total << std::endl;
}
