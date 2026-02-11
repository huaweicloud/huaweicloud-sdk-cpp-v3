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

# USE SINGLE SERVICE(EXAMPLE: vpc ecs eip)
# compile core default
add_subdirectory(core)

#If you need to compile a specific version of a service, specify BUILD_SERVICE as the service name and SERVICE_VERSION as the version number.
if(BUILD_SERVICE)
    message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
    message(STATUS   "'SERVICE_VERSION'=${SERVICE_VERSION}")

    if(NOT EXISTS "${CMAKE_SOURCE_DIR}/${BUILD_SERVICE}")
        message(FATAL_ERROR "BUILD_SERVICE(${BUILD_SERVICE}) is invalid")
    endif()

    if(NOT EXISTS "${CMAKE_SOURCE_DIR}/${BUILD_SERVICE}/src/${SERVICE_VERSION}")
        message(FATAL_ERROR "SERVICE_VERSION(${SERVICE_VERSION}) is invalid")
    endif()

    add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
endif()
