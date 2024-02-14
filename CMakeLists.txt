cmake_minimum_required(VERSION 3.6)

project(CMP5359_Coursework LANGUAGES CXX)

add_subdirectory(common)
include_directories(common)
add_subdirectory(rasteriser)
add_subdirectory(raytracer)
