cmake_minimum_required(VERSION 2.8)

project(ec2drv)

include_directories(../debug-core)
include_directories(../devel-tools)
include_directories(../ec2drv)
include_directories(../newcdb)

add_executable(ec2writeflash writeflash.c ihex.c)
target_link_libraries(ec2writeflash libec2drv)
