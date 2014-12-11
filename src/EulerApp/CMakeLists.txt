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
)

include_directories(${CMAKE_SOURCE_DIR}/src/EulerApp)

add_executable(EulerApp
   ${EULERAPP_SRCS}
)