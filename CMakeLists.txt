cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(huaweicloud_cpp_sdk_v3)

set(CMAKE_CXX_STANDARD 14)

include(GNUInstallDirs)

option(ENABLE_SHARED  "Enable shared library" ON)
option(ENABLE_RTTR  "Enable rttr library" OFF)

if(ENABLE_SHARED)
    set(LIB_TYPE SHARED)
    add_definitions(-DHUAWEICLOUD_SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

SET(BUILD_SERVICE vpc)

if(BUILD_SERVICE STREQUAL "")
    add_subdirectory(core)
else()
    add_subdirectory(core)
    add_subdirectory(${BUILD_SERVICE})
    message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
endif()