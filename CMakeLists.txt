#/bin
# The first line is to use cmake_minimum_required()
# to set the CMake version 
cmake_minimum_required(VERSION 3.20)
# The next step to make a basic project is to use the project() command
# to set the project name
project(TEST)

#  enable support for a specific C++ standard in CMake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# add_library(src ./src/test.cpp)

# aux_source_directory(./src/leetcode SRCS_DIR) # add all source files
file(GLOB_RECURSE SOURCE
    main.cpp
    src/basesyntax/*.cpp
    src/timecomplexity/timeCostTest.cpp
)
# set(SRC_LIST
#         ./main.cpp
#         ./test1.cpp
#         ./test2.cpp
#         SOURCE
#         SRCS_DIR
#          )



# cmake_path()

# header file directory
include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

# add_subdirectory(SRC_DIR)
add_executable(TEST ${SOURCE} ${SRCS_DIR})



