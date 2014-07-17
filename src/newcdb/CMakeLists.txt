cmake_minimum_required(VERSION 2.8)

project(ec2drv)

include_directories(../debug-core)
include_directories(../devel-tools)
include_directories(../ec2drv)
include_directories(../ec2tools)

add_executable(newcdb parsecmd.cpp cmdcommon.cpp cmdbreakpoints.cpp cmddisassemble.cpp cmdmaintenance.cpp main.cpp)
target_link_libraries(newcdb readline history libec2debugcore boost_regex)

install(TARGETS newcdb DESTINATION bin)
