cmake_minimum_required(VERSION 2.8)

CMAKE_POLICY(SET CMP0079 NEW)

include_directories(/usr/local/include)
include_directories(/usr/local/Cellar/libusb-compat/0.1.5_1/include)
include_directories(/usr/local/opt/readline/include)

link_directories(/usr/local/lib)
link_directories(/usr/local/Cellar/libusb-compat/0.1.5_1/lib)
link_directories(/usr/local/opt/readline/lib)

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
