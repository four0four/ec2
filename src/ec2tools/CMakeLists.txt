cmake_minimum_required(VERSION 2.8)

project(ec2drv)

include_directories(../debug-core)
include_directories(../devel-tools)
include_directories(../ec2drv)
include_directories(../newcdb)

add_executable(ec2writeflash writeflash.c ihex.c)
target_link_libraries(ec2writeflash libec2drv)
install(TARGETS ec2writeflash DESTINATION bin)

add_executable(ec2readflash readflash.c ihex.c)
target_link_libraries(ec2readflash libec2drv)
install(TARGETS ec2readflash DESTINATION bin)

add_executable(ec2_update_fw ec2fw.c)
target_link_libraries(ec2_update_fw libec2drv)
install(TARGETS ec2_update_fw DESTINATION bin)

add_executable(ec2_read_fw ec2rfw.c)
target_link_libraries(ec2_read_fw libec2drv)
install(TARGETS ec2_read_fw DESTINATION bin)

add_executable(ec2device ec2device.cpp)
target_link_libraries(ec2device libec2drv)
install(TARGETS ec2device DESTINATION bin)

add_executable(ec3adapters ec3adapters.c)
target_link_libraries(ec3adapters libec2drv usb)
install(TARGETS ec3adapters DESTINATION bin)

add_executable(ec2test-any ec2test-any.cpp)
target_link_libraries(ec2test-any libec2drv)
install(TARGETS ec2test-any DESTINATION bin)
