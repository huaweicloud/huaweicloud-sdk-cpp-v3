cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(ims)

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
file(GLOB service_client_header ${CMAKE_CURRENT_SOURCE_DIR}/v2/include/huaweicloud/ims/*.h)
file(GLOB service_model_header ${CMAKE_CURRENT_SOURCE_DIR}/v2/include/huaweicloud/ims/model/*.h)
#SOURCE FILES
file(GLOB source_file  "v2/src/*.cpp"  "v2/src/model/*.cpp")

add_library(ims ${LIB_TYPE}
        ${source_file}
        ${service_client_header}
        ${service_model_header})

set_target_properties(ims
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME ims
        )

if(${LIB_TYPE} STREQUAL "SHARED")
    set_target_properties(ims
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_IMS_SHARED)
endif()

target_include_directories(ims PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/v2/include
        )

target_link_libraries(ims PUBLIC
        core)

if(ENABLE_RTTR)
    if(NOT CMAKE_HOST_WIN32)
        set(rttr_DIR /home/nfs/rttr/rttr-0.9.6/build/install/share/rttr/cmake)
    endif()
    find_package(rttr CONFIG REQUIRED)
    target_link_libraries(ims PUBLIC
            RTTR::Core)
endif()

install(FILES ${service_client_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/ims)
install(FILES ${service_model_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/ims/model)
install(TARGETS ims
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)