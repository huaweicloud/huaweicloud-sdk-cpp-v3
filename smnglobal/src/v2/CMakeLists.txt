cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(smnglobal_v2)

if(CMAKE_HOST_WIN32)
    add_compile_options(-bigobj)
else()
    set(cxx_base_flags "${cxx_base_flags} -bigobj")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBOOST_UUID_FORCE_AUTO_LINK")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

#HEADER FILES
file(GLOB service_client_header
        ${CMAKE_SOURCE_DIR}/smnglobal/include/huaweicloud/smnglobal/v2/*.h)
file(GLOB service_model_header
        ${CMAKE_SOURCE_DIR}/smnglobal/include/huaweicloud/smnglobal/v2/model/*.h)
#SOURCE FILES
file(GLOB source_file
        ${CMAKE_SOURCE_DIR}/smnglobal/src/v2/*.cpp
        ${CMAKE_SOURCE_DIR}/smnglobal/src/v2/model/*.cpp)

add_library(smnglobal_v2 ${LIB_TYPE}
        ${source_file}
        ${service_client_header}
        ${service_model_header})

set_target_properties(smnglobal_v2
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME smnglobal_v2
        )

if(CMAKE_HOST_WIN32)
    if(${LIB_TYPE} STREQUAL "SHARED")
        set_target_properties(smnglobal_v2
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_SMNGLOBAL_V2_SHARED)
    endif()
else()
    if(${LIB_TYPE} STREQUAL "SHARED")
        set_target_properties(smnglobal_v2
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_SMNGLOBAL_V2_EXPORT)
    endif()
endif()

target_include_directories(smnglobal_v2 PUBLIC
        ${CMAKE_SOURCE_DIR}/smnglobal/include
        )

target_link_libraries(smnglobal_v2 PUBLIC
        core)

if(ENABLE_RTTR)
    if(NOT CMAKE_HOST_WIN32)
        set(rttr_DIR /home/nfs/rttr/rttr-0.9.6/build/install/share/rttr/cmake)
    endif()
    find_package(rttr CONFIG REQUIRED)
    target_link_libraries(smnglobal_v2 PUBLIC
            RTTR::Core)
endif()

install(FILES ${service_client_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/smnglobal/v2)
install(FILES ${service_model_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/smnglobal/v2/model)
install(TARGETS smnglobal_v2
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)