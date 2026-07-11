cmake_minimum_required(VERSION 3.22.2)
project(my_projectCM)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(dynamic_link_library SHARED leaver.cpp dllmain.cpp pch.cpp)
target_include_directories(dynamic_link_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers(dynamic_link_library PRIVATE pch.h)

add_executable(my_program main.cpp)
target_include_directories(my_program PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(my_program PRIVATE dynamic_link_library)