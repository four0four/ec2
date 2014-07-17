cmake_minimum_required(VERSION 2.8)

project(ec2drv)

include_directories(../debug-core)
include_directories(../devel-tools)
include_directories(../ec2drv)
include_directories(../newcdb)

add_executable(ec2writeflash writeflash.c ihex.c)
target_link_libraries(ec2writeflash libec2drv)

add_executable(ec2readflash readflash.c ihex.c)
target_link_libraries(ec2readflash libec2drv)

add_executable(ec2_update_fw ec2fw.c)
target_link_libraries(ec2_update_fw libec2drv)

add_executable(ec2_read_fw ec2rfw.c)
target_link_libraries(ec2_read_fw libec2drv)

add_executable(ec2device ec2device.cpp)
target_link_libraries(ec2device libec2drv)

add_executable(ec3adapters ec3adapters.c)
target_link_libraries(ec3adapters libec2drv usb)

add_executable(ec2test-any ec2test-any.cpp)
target_link_libraries(ec2test-any libec2drv)
