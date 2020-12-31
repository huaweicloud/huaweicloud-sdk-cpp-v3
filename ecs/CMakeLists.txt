cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(ecs)

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
file(GLOB service_client_header ${CMAKE_CURRENT_SOURCE_DIR}/v2/include/huaweicloud/ecs/*.h)
file(GLOB service_model_header ${CMAKE_CURRENT_SOURCE_DIR}/v2/include/huaweicloud/ecs/model/*.h)
#SOURCE FILES
file(GLOB source_file  "v2/src/*.cpp"  "v2/src/model/*.cpp")

add_library(ecs ${LIB_TYPE}
        ${source_file}
        ${service_client_header}
        ${service_model_header})

set_target_properties(ecs
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME ecs
        )

if(${LIB_TYPE} STREQUAL "SHARED")
    set_target_properties(ecs
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_ECS_SHARED)
endif()

target_include_directories(ecs PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/v2/include
        )

target_link_libraries(ecs PUBLIC
        core)

if(ENABLE_RTTR)
    if(NOT CMAKE_HOST_WIN32)
        set(rttr_DIR /home/nfs/rttr/rttr-0.9.6/build/install/share/rttr/cmake)
    endif()
    find_package(rttr CONFIG REQUIRED)
    target_link_libraries(ecs PUBLIC
            RTTR::Core)
endif()

install(FILES ${service_client_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/ecs)
install(FILES ${service_model_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/ecs/model)
install(TARGETS ecs
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)