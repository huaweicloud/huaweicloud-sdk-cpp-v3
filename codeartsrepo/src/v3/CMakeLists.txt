cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(codeartsrepo_v3)

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
        ${CMAKE_SOURCE_DIR}/codeartsrepo/include/huaweicloud/codeartsrepo/v3/*.h)
file(GLOB service_model_header
        ${CMAKE_SOURCE_DIR}/codeartsrepo/include/huaweicloud/codeartsrepo/v3/model/*.h)
#SOURCE FILES
file(GLOB source_file
        ${CMAKE_SOURCE_DIR}/codeartsrepo/src/v3/*.cpp
        ${CMAKE_SOURCE_DIR}/codeartsrepo/src/v3/model/*.cpp)

add_library(codeartsrepo_v3 ${LIB_TYPE}
        ${source_file}
        ${service_client_header}
        ${service_model_header})

set_target_properties(codeartsrepo_v3
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME codeartsrepo_v3
        )

if(CMAKE_HOST_WIN32)
    if(${LIB_TYPE} STREQUAL "SHARED")
        set_target_properties(codeartsrepo_v3
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_CODEARTSREPO_V3_SHARED)
    endif()
else()
    if(${LIB_TYPE} STREQUAL "SHARED")
        set_target_properties(codeartsrepo_v3
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_CODEARTSREPO_V3_EXPORT)
    endif()
endif()

target_include_directories(codeartsrepo_v3 PUBLIC
        ${CMAKE_SOURCE_DIR}/codeartsrepo/include
        )

target_link_libraries(codeartsrepo_v3 PUBLIC
        core)

if(ENABLE_RTTR)
    if(NOT CMAKE_HOST_WIN32)
        set(rttr_DIR /home/nfs/rttr/rttr-0.9.6/build/install/share/rttr/cmake)
    endif()
    find_package(rttr CONFIG REQUIRED)
    target_link_libraries(codeartsrepo_v3 PUBLIC
            RTTR::Core)
endif()

install(FILES ${service_client_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/codeartsrepo/v3)
install(FILES ${service_model_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/codeartsrepo/v3/model)
install(TARGETS codeartsrepo_v3
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)