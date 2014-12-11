cmake_minimum_required(VERSION 2.6)

project(EulerApp)

set(EULERAPP_SRCS
   main.cpp
   BaseProblem.cpp
   BaseProblem.h
   Problem1.cpp
   Problem1.h
)

add_executable(EulerApp
   ${EULERAPP_SRCS}
)