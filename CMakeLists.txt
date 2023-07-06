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

SET(BUILD_SERVICE all)
SET(SERVICE_VERSION v1)

if(BUILD_SERVICE STREQUAL "all" OR BUILD_SERVICE STREQUAL "")
   # USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
   add_subdirectory(core)
   #add_subdirectory(tms/src/v1)
   #add_subdirectory(eps/src/v1)
   add_subdirectory(drs/src/v3)
   add_subdirectory(drs/src/v5)
   message(STATUS "Build all Services")
else()
   # USE SINGLE SERVICE(EXAMPLE: USE VPC ECS AND EIP)
   add_subdirectory(core)
   add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
   message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
endif()

