#include <iostream>

#include "Problem1/Problem1.h"
#include "Problem2/Problem2.h"
#include "Problem3/Problem3.h"
#include "Problem4/Problem4.h"
#include "Problem5/Problem5.h"
#include "Problem6/Problem6.h"
#include "Problem7/Problem7.h"
#include "Problem8/Problem8.h"
#include "Problem9/Problem9.h"
#include "Problem10/Problem10.h"

int main(int argc, char* argv[])
{
   Problem1().Run();
   Problem2().Run();
   Problem3().Run();
   Problem4().Run();
   Problem5().Run(); // slow (~2 seconds)
   Problem6().Run();
   Problem7().Run();
   Problem8().Run();
   Problem9().Run();
   Problem10().Run(); // extremely slow (>3 minutes)

   system("pause");
   return 0;
}