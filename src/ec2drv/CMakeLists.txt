cmake_minimum_required(VERSION 2.8)

project(ec2drv)

include_directories(../debug-core)
include_directories(../devel-tools)
include_directories(../ec2tools)
include_directories(../newcdb)


add_library(libec2drv device_table.c jtag_mode.c ec2drv.c devices.c c2_mode.c boot.c)

target_link_libraries(libec2drv usb-1.0)
