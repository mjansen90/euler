import os
import sys

if len(sys.argv) != 2:
   print "Expected one argument!"
   sys.exit()

problem_name = sys.argv[1]
cpp_name = problem_name + ".cpp"
h_name = problem_name + ".h"

# Generates the .cpp file
def write_cpp(output_dir):
   cpp_file = """//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//

//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "{0}.h"

#include <iostream>

// Constructor
{0}::{0}() :
   BaseProblem()
{{

}}

// Destructor
{0}::~{0}()
{{

}}

// Main execution function
void {0}::Execute()
{{

}}
""".format(problem_name)

   with open(os.path.join(output_dir, cpp_name), 'w') as f:
      f.write(cpp_file)

# Generates the .h file
def write_h(output_dir):
   h_file = """//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//

//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "BaseProblem.h"


class {0} : public BaseProblem
{{
public:
	{0}();
	~{0}();

protected:
   virtual void Execute();
   virtual std::string ProblemName() {{ return "{0}"; }}
}};
""".format(problem_name)

   with open(os.path.join(output_dir, h_name), 'w') as f:
      f.write(h_file)

# Adds the appropriate entries to cmake
def update_cmake():
   cmake_entry = "   {0}/{1}\n   {0}/{2}\n".format(problem_name, cpp_name, h_name)

   old_filename = os.path.join("src", "EulerApp", "CMakeLists.txt")
   new_filename = os.path.join("src", "EulerApp", "CMakeListsTemp.txt")
   os.rename(old_filename, new_filename)

   added = False

   with open(new_filename, 'r') as infile:
      with open(old_filename, 'w') as outfile:
         for line in infile.readlines():
            if not added and line[0] == ")":
               outfile.write(cmake_entry)
               added = True
            outfile.write(line)
   
   if added:
      os.remove(new_filename)
      
def update_main():
   include = "#include \"{0}/{0}.h\"\n".format(problem_name)
   run = "   {0}().Run();\n".format(problem_name)

   old_main = os.path.join("src", "EulerApp", "main.cpp")
   new_main = os.path.join("src", "EulerApp", "main_temp.cpp")
   os.rename(old_main, new_main)
   
   empty_line_count = 0
   
   with open(new_main, 'r') as infile:
      with open(old_main, 'w') as outfile:
         for line in infile.readlines():
            if empty_line_count < 3 and line[0] == "\n":
               empty_line_count += 1
               if empty_line_count == 2:
                  outfile.write(include)
               elif empty_line_count == 3:
                  outfile.write(run)
            outfile.write(line)
            
   if empty_line_count > 2:
      os.remove(new_main)

# Main
if __name__ == "__main__":
   # Make a new folder
   output_dir = os.path.join("src", "EulerApp", problem_name)
   if os.path.exists(output_dir):
      print output_dir + " already exists! Exiting!"
      sys.exit()
   os.makedirs(output_dir)

   write_cpp(output_dir)
   write_h(output_dir)
   update_cmake()
   update_main()