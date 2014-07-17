cmake_minimum_required(VERSION 2.8)

project(ec2drv)

include_directories(../devel-tools)
include_directories(../ec2drv)
include_directories(../newcdb)
include_directories(../ec2tools)

add_library(libec2debugcore 	cdbfile.cpp cdbfile.h data_types.h ihex.c ihex.h memremap.cpp 
memremap.h module.cpp module.h symbol.cpp symbol.h symtab.cpp symtab.h 
symtypetree.cpp symtypetree.h target.cpp target.h targets51.cpp 
targets51.h targetsilabs.cpp targetsilabs.h types.h linespec.h 
dbgsession.cpp outformat.cpp outformat.h contextmgr.cpp contextmgr.h 
breakpointmgr.cpp breakpointmgr.h linespec.cpp target-dummy.cpp)

target_link_libraries(libec2debugcore pthread libec2drv)
