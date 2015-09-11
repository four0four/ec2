cmake_minimum_required(VERSION 2.8)

project(ec2drv)

add_subdirectory(ec2drv)
add_subdirectory(debug-core)
add_subdirectory(devel-tools)
add_subdirectory(ec2tools)
add_subdirectory(newcdb)

#set(INCDIRS debug-core devel-tools ec2drv ec2tools newcdb)

include_directories(ec2drv)
include_directories(debug-core)
include_directories(devel-tools)
include_directories(ec2tools)
include_directories(newcdb)
