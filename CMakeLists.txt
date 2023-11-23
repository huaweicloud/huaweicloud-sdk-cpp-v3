cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(huaweicloud_cpp_sdk_v3)

set(CMAKE_CXX_STANDARD 14)


include(GNUInstallDirs)
include(FindPackageHandleStandardArgs)

option(ENABLE_SHARED  "Enable shared library" ON)
option(ENABLE_RTTR  "Enable rttr library" OFF)
option(ENABLE_BSON "Enable bson library" OFF)

if(ENABLE_SHARED)
    set(LIB_TYPE SHARED)
    add_definitions(-DHUAWEICLOUD_SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

if(ENABLE_BSON)
    add_definitions(-DBOOST_NO_CXX11_DELETED_FUNCTIONS)
    add_definitions(-DHUAWEICLOUD_SDK_BSON_)
endif()

SET(BUILD_SERVICE cfw)
SET(SERVICE_VERSION v1)

if(BUILD_SERVICE STREQUAL "all" OR BUILD_SERVICE STREQUAL "")
   # USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
   add_subdirectory(core)
   #add_subdirectory(tms/src/v1)
   #add_subdirectory(eps/src/v1)
   add_subdirectory(smn/src/v2)
   message(STATUS "Build all Services")
else()
   # USE SINGLE SERVICE(EXAMPLE: USE VPC ECS AND EIP)
   add_subdirectory(core)
   add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
   message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
endif()