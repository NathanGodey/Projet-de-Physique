cmake_minimum_required(VERSION 2.6)
file(TO_CMAKE_PATH "$ENV{IMAGINEPP_ROOT}/CMake" p)
list(APPEND CMAKE_MODULE_PATH "${p}") #For old Imagine++
list(APPEND CMAKE_SYSTEM_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?

project(ProjetPhysique)
add_executable(ProjetPhysique utils.cpp utils.h main.cpp params.h params.cpp forces.h forces.cpp test.h test.cpp)
