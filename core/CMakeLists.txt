cmake_minimum_required (VERSION 3.10)

project(core)

if(CMAKE_HOST_WIN32)
    add_compile_options(-bigobj)
else()
    set(cxx_base_flags "${cxx_base_flags} -bigobj")
    set(cpprestsdk_DIR /usr/lib/${CMAKE_LIBRARY_ARCHITECTURE}/cmake/)
endif()

set(CMAKE_BUILD_TYPE Debug)

find_package(OpenSSL REQUIRED)
find_package(spdlog REQUIRED)
find_package(cpprestsdk REQUIRED)
find_package(CURL REQUIRED)
# Update require components as necessary
if(CMAKE_HOST_WIN32)
    find_package(Boost REQUIRED COMPONENTS ${Boost_THREAD_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_REGEX_LIBRARY} ${Boost_DATE_TIME_LIBRARY} ${Boost_PROGRAM_OPTIONS_LIBRARY} ${Boost_FILESYSTEM_LIBRARY})
else()
    find_package(Boost REQUIRED COMPONENTS filesystem thread system regex date_time program_options)
endif()

file(GLOB source_file  "src/*.cpp" "src/auth/*.cpp" "src/http/*.cpp" "src/utils/*.cpp" "src/exception/*.cpp")
file(GLOB core_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/*.h)
file(GLOB core_auth_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/auth/*.h)
file(GLOB core_exception_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/exception/*.h)
file(GLOB core_http_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/http/*.h)
file(GLOB core_utils_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/utils/*.h)

add_library(core ${LIB_TYPE}
        ${source_file}
        ${core_header}
        ${core_auth_header}
        ${core_exception_header}
        ${core_http_header}
        ${core_utils_header})

set_target_properties(core
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME core
        )

if(${LIB_TYPE} STREQUAL "SHARED")
    set_target_properties(core
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_CORE_SHARED)
endif()

target_include_directories(core PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )

if(CMAKE_HOST_WIN32)
    target_link_libraries(core PUBLIC
            spdlog::spdlog
            OpenSSL::SSL
            bcrypt
            ${Boost_LIBRARIES}
            ${CURL_LIBRARIES}
            cpprestsdk::cpprest
            )
else()
    target_link_libraries(core PUBLIC
            spdlog::spdlog
            OpenSSL::SSL
            crypto
            ${Boost_LIBRARIES}
            ${CURL_LIBRARIES}
            cpprest
            )
endif()

install(FILES ${core_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core)
install(FILES ${core_auth_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core/auth)
install(FILES ${core_exception_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core/exception)
install(FILES ${core_http_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core/http)
install(FILES ${core_utils_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core/utils)
install(TARGETS core
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )