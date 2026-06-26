cmake_minimum_required(VERSION 3.10)
project(figures_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(figures_program
    main.cpp
    triangle.cpp
    right_triangle.cpp
    isosceles_triangle.cpp
    equilateral_triangle.cpp
    quadrilateral.cpp
    rectangle.cpp
    square.cpp
    parallelogram.cpp
    rhombus.cpp
)

set_target_properties(figures_program PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)