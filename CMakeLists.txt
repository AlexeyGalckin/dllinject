cmake_minimum_required(VERSION 3.5)
#
project(DllInject)
#
set(CMAKE_CXX_STANDARD 17)
#
link_directories(${CMAKE_CURRENT_LIST_DIR}/lib)
#
add_subdirectory(src)