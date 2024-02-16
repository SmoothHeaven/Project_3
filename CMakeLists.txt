cmake_minimum_required(VERSION 3.11)
project(Project_3)
set(CMAKE_CXX_STANDARD 14)

add_executable(my_project src/main.cpp src/Person.cpp)
# Include directories
target_include_directories(my_project PRIVATE "${CMAKE_SOURCE_DIR}/src")

install(TARGETS my_project DESTINATION ${PROJECT_SOURCE_DIR}/bin)
