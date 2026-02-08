cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(huaweicloud_cpp_sdk_v3)

set(CMAKE_CXX_STANDARD 14)


include(GNUInstallDirs)
include(FindPackageHandleStandardArgs)

option(ENABLE_SHARED  "Enable shared library" ON)
option(ENABLE_RTTR  "Enable rttr library" ON)
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

# USE SINGLE SERVICE(EXAMPLE: USE VPC ECS AND EIP)
# compile core default
add_subdirectory(core)
#If you need to compile a specific version of a service, specify BUILD_SERVICE as the service name and SERVICE_VERSION as the version number.
SET(BUILD_SERVICE cce)
SET(SERVICE_VERSION v3)
# If you want to compile multiple services, refer to the compilation instructions for a single service and simply append the add_subdirectory command at the end.
add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
