cmake_minimum_required(VERSION 2.6)

project(EulerApp)

set(EULERAPP_SRCS
   main.cpp
   BaseProblem.cpp
   BaseProblem.h
   Problem1/Problem1.cpp
   Problem1/Problem1.h
   Problem2/Problem2.cpp
   Problem2/Problem2.h
   Problem3/Problem3.cpp
   Problem3/Problem3.h
   Problem4/Problem4.cpp
   Problem4/Problem4.h
   Problem5/Problem5.cpp
   Problem5/Problem5.h
   Problem6/Problem6.cpp
   Problem6/Problem6.h
   Problem7/Problem7.cpp
   Problem7/Problem7.h
   Problem8/Problem8.cpp
   Problem8/Problem8.h
   Problem9/Problem9.cpp
   Problem9/Problem9.h
   Problem10/Problem10.cpp
   Problem10/Problem10.h
   Problem11/Problem11.cpp
   Problem11/Problem11.h
   Problem12/Problem12.cpp
   Problem12/Problem12.h
)

include_directories(${CMAKE_SOURCE_DIR}/src/EulerApp)

add_executable(EulerApp
   ${EULERAPP_SRCS}
)