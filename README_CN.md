[English](./README.md) | 简体中文

<p align="center">
  <a href="https://www.huaweicloud.com/"><img width="270px" height="90px" src="https://console-static.huaweicloud.com/static/authui/20210202115135/public/custom/images/logo.svg"></a>
</p>

<h1 align="center">华为云开发者 C++ 软件开发工具包（C++ SDK）</h1>

[![GitHub Release](https://img.shields.io/github/v/release/huaweicloud/huaweicloud-sdk-cpp-v3)](https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3/releases)
[![License](https://img.shields.io/badge/license-Apache--2.0-green)](https://www.apache.org/licenses/LICENSE-2.0)

欢迎使用华为云 C++ SDK。

华为云 C++ SDK 让您无需关心请求细节即可快速使用弹性云服务器（ECS）、虚拟私有云（VPC）等多个华为云服务。

这里将向您介绍如何获取并使用华为云 C++ SDK 。

## 项目说明

- 当前SDK主体代码由华为云内部团队通过开源组件（openapi-generator）自动生成，并由华为云团队直接提交到Github社区，基于实现方案一致性以及版本兼容性考虑，暂时无法接受开发者PR
- 我们正在研究SDK按开源社区标准方式运作的可行性，需要一些时间，同时我们会及时响应并处理开发者提的Issue

## 使用前提

- 要使用华为云 C++ SDK ，您需要拥有云账号以及该账号对应的 Access Key（AK）和 Secret Access Key（SK）。 请在华为云控制台“我的凭证-访问密钥”页面上创建和查看您的 AK&SK
  。更多信息请查看 [访问密钥](https://support.huaweicloud.com/usermanual-ca/zh-cn_topic_0046606340.html) 。

- 要使用华为云 C++ SDK 访问指定服务的 API
  ，您需要确认已在 [华为云控制台](https://console.huaweicloud.com/console/?locale=zh-cn&region=cn-north-4#/home) 开通当前服务。

- 华为云 C++ SDK 支持 **C++ 14** 及以上版本，要求安装 **CMake 3.10** 及以上版本。

## 隐私声明

- 收集信息：
  为完成华为云服务开放API调用的必要校验，SDK需要使用由华为云控制台下载的用户访问密钥（AK）进行签名，该过程不会上传您的私有密钥（SK）。

- 数据处理方式：当您使用本工具提供的服务开放API功能时，您的相关数据（如上传的文件、提交的文本内容）将通过加密传输通道（HTTPS） 直接发送至华为云服务端进行处理。

- 该过程由华为云服务端完成计算、存储或分析，数据不会在本应用客户端本地处理或持久化存储。

- 华为云将根据其服务协议和隐私政策作为数据处理方独立处理这些数据，我们仅作为控制方发起API请求。数据处理结果将返回至本工具供您使用。

- 华为云官方隐私声明：https://www.huaweicloud.com/declaration/sa_prp.html

## SDK 获取和安装

您可以通过 [SDK中心](https://console.huaweicloud.com/apiexplorer/#/sdkcenter?language=C%2B%2B) 或 [Github Releases](https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3/releases?page=1) 查询SDK版本信息。

### 依赖的第三方库

`curl`、`boost`、`cpprestsdk`、`spdlog`、`openssl`、`rttr`

### 在 Linux 系统上安装 SDK

#### Step 1：获取依赖包

所需的这些第三方软件包在大部分系统的包管理工具中都有提供：

例如基于 Debian/Ubuntu 的系统

``` bash
sudo apt-get install libcurl4-openssl-dev libboost-all-dev libssl-dev libcpprest-dev librttr-dev
```

spdlog 需要从源码进行安装, 生成对应的动态库，推荐使用v1.17.0版本，如果您本地安装其他版本的spdlog，建议参考官网文档进行源码安装 https://github.com/gabime/spdlog 。

``` bash
git clone -b v1.17.0 https://github.com/gabime/spdlog.git
cd spdlog
mkdir build
cd build
cmake -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DBUILD_SHARED_LIBS=ON .. 
make
sudo make install
```

对于使用bson编码的服务(kvs)，需要安装libbson，编译sdk时设置LIBBSON_DIR指定libbson根目录
``` bash
sudo apt-get install libbson-1.0
```

#### Step 2：编译安装

``` bash
git clone https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3.git
cd huaweicloud-sdk-cpp-v3
mkdir build
cd build
cmake ..
make
sudo make install
```

完成上述操作后，**C++ SDK 安装目录为 `/usr/local`**。
#### 特殊说明
产物中的`libcore`可能会与其他动态库名字发生冲突，可以在源码中手动改名后再构建，以避免冲突。
以下以编译vpc包为例，产物改名为`core_change_name_demo`

1、修改`/huaweicloud-sdk-cpp-v3/core/CMakeLists.txt`中的`core`为`core_change_name_demo`，涉及改动点已通过注释标明。
``` cmake
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

if(ENABLE_BSON)
    file(GLOB source_file "src/*.cpp" "src/auth/*.cpp" "src/http/*.cpp" "src/utils/*.cpp" "src/exception/*.cpp" "src/bson/*.cpp" "src/bson/impl/*.cpp")
    file(GLOB core_bson_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/bson/*.h)
    file(GLOB core_bson_impl_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/bson/impl/*.h)
else()
    file(GLOB source_file "src/*.cpp" "src/auth/*.cpp" "src/http/*.cpp" "src/utils/*.cpp" "src/exception/*.cpp")
endif ()
file(GLOB core_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/*.h)
file(GLOB core_auth_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/auth/*.h)
file(GLOB core_exception_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/exception/*.h)
file(GLOB core_http_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/http/*.h)
file(GLOB core_utils_header ${CMAKE_CURRENT_SOURCE_DIR}/include/huaweicloud/core/utils/*.h)

if(ENABLE_BSON)
    # 改动点1
    add_library(core_change_name_demo ${LIB_TYPE}
            ${source_file}
            ${core_header}
            ${core_auth_header}
            ${core_exception_header}
            ${core_http_header}
            ${core_utils_header}
            ${core_bson_header}
            ${core_bson_impl_header}
            )
else()
    # 改动点2
    add_library(core_change_name_demo ${LIB_TYPE}
            ${source_file}
            ${core_header}
            ${core_auth_header}
            ${core_exception_header}
            ${core_http_header}
            ${core_utils_header}
            )
endif()
# 改动点3
set_target_properties(core_change_name_demo
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        #改动点4
        OUTPUT_NAME core_change_name_demo
        )

if(${LIB_TYPE} STREQUAL "SHARED")
    # 改动点5
    set_target_properties(core_change_name_demo
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_CORE_SHARED)
endif()


if(ENABLE_BSON)
    if(NOT LIBBSON_DIR)
        message(FATAL_ERROR "Please manual set variable LIBBSON_DIR for search libbson root dir")
    endif()
    set(LIBBSON_LIBRARY_DIR ${LIBBSON_DIR}/lib)
    set(LIBBSON_INCLUDE_DIR ${LIBBSON_DIR}/include/libbson-1.0)
    # 改动点6
    target_include_directories(core_change_name_demo PUBLIC ${LIBBSON_INCLUDE_DIR})
    target_link_libraries(core_change_name_demo PUBLIC bson-1.0)
    target_link_directories(core_change_name_demo PUBLIC ${LIBBSON_LIBRARY_DIR})
endif()
# 改动点7
target_include_directories(core_change_name_demo PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )
# 改动点8
if(CMAKE_HOST_WIN32)
    target_link_libraries(core_change_name_demo PUBLIC
            spdlog::spdlog
            OpenSSL::SSL
            bcrypt
            ${Boost_LIBRARIES}
            ${CURL_LIBRARIES}
            cpprestsdk::cpprest
            )
else()
# 改动点9
    target_link_libraries(core_change_name_demo PUBLIC
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
# 改动点10
install(TARGETS core_change_name_demo
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )
if(ENABLE_BSON)
install(FILES ${core_bson_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core/bson)
install(FILES ${core_bson_impl_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/core/bson/impl)
endif()

```

2、修改/huaweicloud-sdk-cpp-v3/vpc/src/v2/CMakeLists.txt，将链接的库名从`core`修改为`core_change_name_demo`，修改点已用注释标明。

``` cmake
cmake_minimum_required (VERSION 3.10)

#PROJECT's NAME
project(vpc_v2)

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
        ${CMAKE_SOURCE_DIR}/vpc/include/huaweicloud/vpc/v2/*.h)
file(GLOB service_model_header
        ${CMAKE_SOURCE_DIR}/vpc/include/huaweicloud/vpc/v2/model/*.h)
#SOURCE FILES
file(GLOB source_file
        ${CMAKE_SOURCE_DIR}/vpc/src/v2/*.cpp
        ${CMAKE_SOURCE_DIR}/vpc/src/v2/model/*.cpp)

add_library(vpc_v2 ${LIB_TYPE}
        ${source_file}
        ${service_client_header}
        ${service_model_header})

set_target_properties(vpc_v2
        PROPERTIES
        LINKER_LANGUAGE CXX
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        OUTPUT_NAME vpc_v2
        )

if(CMAKE_HOST_WIN32)
    if(${LIB_TYPE} STREQUAL "SHARED")
        set_target_properties(vpc_v2
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_VPC_V2_SHARED)
    endif()
else()
    if(${LIB_TYPE} STREQUAL "SHARED")
        set_target_properties(vpc_v2
            PROPERTIES
            DEFINE_SYMBOL HUAWEICLOUD_VPC_V2_EXPORT)
    endif()
endif()

target_include_directories(vpc_v2 PUBLIC
        ${CMAKE_SOURCE_DIR}/vpc/include
        )
# 改动点
target_link_libraries(vpc_v2 PUBLIC
        core_change_name_demo)

if(ENABLE_RTTR)
    if(NOT CMAKE_HOST_WIN32)
        set(rttr_DIR /home/nfs/rttr/rttr-0.9.6/build/install/share/rttr/cmake)
    endif()
    find_package(rttr CONFIG REQUIRED)
    target_link_libraries(vpc_v2 PUBLIC
            RTTR::Core)
endif()

install(FILES ${service_client_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/vpc/v2)
install(FILES ${service_model_header}
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/huaweicloud/vpc/v2/model)
install(TARGETS vpc_v2
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
```
### 在 Windows 系统上安装 SDK

#### Step 1：安装 vcpkg 并使用 vcpkg 安装所需软件包

``` bash
vcpkg install curl cpprestsdk boost openssl spdlog
```
对于使用bson编码的服务(kvs)，需要安装libbson，编译sdk时设置LIBBSON_INCLUDE_DIRS和LIBBSON_LIBRARY_DIRS指定头文件和库文件路径
``` bash
vcpkg install libbson
```

#### Step 2：使用 CLion 进行编译

1. 使用 CLion 打开 `huaweicloud-sdk-cpp-v3` 目录

2. 选择 `File` → `Settings`

3. 选择 `Build, Execution, Deployment` → `CMake`

4. 在 `CMake options` 中加入

`-DCMAKE_TOOLCHAIN_FILE={your vcpkg install dir}/scripts/buildsystems/vcpkg.cmake`

5. 右键 `CMakeLists.txt` 选择 `Load CMake Project`

6. 配置clion的编译工具链为MSVC: 在第3步的`CMake`配置页面选择Toolchain为Visual Studio，不能选择mingw等其他编译器(windows平台下依赖msvc 编译器，
 选择mingw等其他编译器编译会报错)。另外，用户还可以选择编译出来的二进制文件是Debug模式还是Release 模式, 选择 `Build Type`进行下拉选择即可。
  
7. 配置目标文件的架构和平台: windows平台支持编译不同CPU架构（x64, x86)的sdk链接库文件，用户可以根据实际需要进行配置，点击
`Build, Execution, Deployment` → `Toolchains`, 在Architecture 选项可以下拉选择支持的CPU架构。

8. 选择`Build`开始编译，编译结果会在clion控制台进行打印。

#### Step 3：安装 C++ SDK

编译完成后选择 `Build` → `Install`

完成上述操作后，**C++ SDK 安装目录为 `C:\Program File (x86)\huaweicloud-sdk-cpp-v3`** 。

## 代码示例

- 使用如下代码同步查询指定 Region 下的 VPC 列表，实际使用中请将 `VpcClient` 替换为您使用的产品/服务相应的 `{Service}Client`。

- 认证用的ak和sk硬编码到代码中或者明文存储都有很大的安全风险，建议在配置文件或者环境变量中密文存放，使用时解密，确保安全。
- 本示例中的ak和sk保存在环境变量中，运行本示例前请先配置环境变量`HUAWEICLOUD_SDK_AK`和`HUAWEICLOUD_SDK_SK`。

``` cpp
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <huaweicloud/core/exception/Exceptions.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/vpc/v2/VpcClient.h>

using namespace HuaweiCloud::Sdk;
using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Core::Exception;

int main(void)
{   
    std::string ak;
    std::string sk;
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    ak = getenv("HUAWEICLOUD_SDK_AK");
    sk = getenv("HUAWEICLOUD_SDK_SK");    
#elif defined(linux) || defined(__linux) || defined(__linux__)
    char* envVar; 
    #define INIT_ENV_VAR(ID, NAME)               \
    do {                                     \
        if (envVar = secure_getenv(#NAME)) { \
            ID = std::string(envVar);        \
        }                                    \
    } while (0)
    INIT_ENV_VAR(ak, HUAWEICLOUD_SDK_AK);
    INIT_ENV_VAR(sk, HUAWEICLOUD_SDK_SK);
    #undef INIT_ENV_VAR
#endif
    // Initialize AK/SK module
    auto basicCredentials = std::make_unique<BasicCredentials>();
    basicCredentials->withAk(ak)
            .withSk(sk)
            .withProjectId("{your project id}");
     
    // Initialize HTTP config
    HttpConfig httpConfig = HttpConfig();
    // Configure VpcClient instance
    std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
            .withCredentials(std::unique_ptr<Credentials>(basicCredentials.release()))
            .withHttpConfig(httpConfig)
            .withEndPoint("{your endpoint}")
            .build();

    // Initialize request parameters
    Vpc::V2::Model::ListVpcsRequest listRequest;
    try {
        std::string responseBody;
        // Creat an API request and get response
        std::cout << "************ListVpc***********" << std::endl;
        std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = 
            vpcApi_v2->listVpcs(listRequest);
        responseBody = listRes->getHttpBody();
        std::cout << responseBody << std::endl;
    } catch (HostUnreachableException& e) { // handle exception
        std::cout << e.what() << std::endl;
    } catch (SslHandShakeException& e) {
        std::cout << e.what() << std::endl;
    } catch (RetryOutageException& e) {
        std::cout << e.what() << std::endl;
    } catch (CallTimeoutException& e) {
        std::cout << e.what() << std::endl;
    } catch (ServiceResponseException& e) {
        std::cout << "StatusCode: " << e.getStatusCode() << std::endl;
        std::cout << "ErrorCode: " << e.getErrorCode() << std::endl;
        std::cout << "ErrorMsg: " << e.getErrorMsg() << std::endl;
        std::cout << "RequestId: " << e.getRequestId() << std::endl;
    }
    return 0;
}
```

如果您是在 Linux 系统中运行该代码，请复制上述文件到 vpc_test.cpp。然后执行如下命令：

``` bash
$ g++ -o vpc_test vpc_test.cpp --std=c++14 -lvpc_v2 -lcore -lcrypto -lboost_system -lcpprest
$ ./vpc_test
# 下方会显示实际运行结果
$ 
```
如果您是在 Windows系统下使用cmake来管理工程，则需要在CMakeLists.txt 中引入sdk core包和服务包的相关依赖。
可以参考下面的CMakeLists.txt 文件:
```
cmake_minimum_required(VERSION 3.16)
project(demo)
find_package(CURL REQUIRED)
set(CMAKE_CXX_STANDARD 14)

set(LINK_DIR "C:/Program Files (x86)/huaweicloud_cpp_sdk_v3/bin;")
set(BIN_DIR "C:/Program Files (x86)/huaweicloud_cpp_sdk_v3/lib;")
set(SERVICE_DIR "C:/Program Files (x86)/huaweicloud_cpp_sdk_v3/include;")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBOOST_UUID_FORCE_AUTO_LINK")

link_directories(${BIN_DIR})
include_directories(${SERVICE_DIR})
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_executable(demo main.cpp)
target_link_libraries(demo PUBLIC core vpc_v2)
```


## 在线调试

[API Explorer](https://apiexplorer.developer.huaweicloud.com/apiexplorer/overview)
提供API检索、SDK示例及平台调试，支持全量快速检索、可视化调试、帮助文档查看、在线咨询。

## 变更日志

每个版本的详细更改记录可在 [变更日志](https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3/blob/master/CHANGELOG_CN.md) 中查看。

## 用户手册 [:top:](#华为云开发者-c-软件开发工具包c-sdk)

* [1. 客户端连接参数](#1-客户端连接参数-top)
    * [1.1 默认配置](#11-默认配置-top)
    * [1.2 网络代理](#12-网络代理-top)
    * [1.3 超时配置](#13-超时配置-top)
    * [1.4 SSL 配置](#14-ssl-配置-top)
* [2. 认证信息配置](#2-认证信息配置-top)
    * [2.1 使用永久 AK 和 SK](#21-使用永久-ak-和-sk-top)
    * [2.2 使用临时 AK 和 SK](#22-使用临时-ak-和-sk-top)
* [3. 客户端初始化](#3-客户端初始化-top)
    * [3.1 指定云服务 Endpoint 方式](#31-指定云服务-endpoint-方式-top)
* [4. 发送请求并查看响应](#4-发送请求并查看响应-top)
    * [4.1 异常处理](#41-异常处理-top)
* [5. 异步客户端使用](#5-异步客户端使用-top)
* [6. 故障处理](#6-故障处理-top)
    * [6.1 访问日志](#61-访问日志-top)
* [7. 配置 CMakeLists.txt](#7-配置-cmakeliststxt-top)

### 1. 客户端连接参数 [:top:](#用户手册-top)

#### 1.1 默认配置 [:top:](#用户手册-top)

``` cpp
// 使用默认配置
HttpConfig httpConfig = HttpConfig();
```

#### 1.2 网络代理 [:top:](#用户手册-top)

``` cpp
// 根据需要配置网络代理
httpConfig.setProxyProtocol("http");
httpConfig.setProxyHost("proxy");
httpConfig.setProxyPort("8080");
// 本示例中的账号和密码保存在环境变量中，运行本示例前请先在本地环境中配置环境变量PROXY_USERNAME和PROXY_PASSWORD
httpConfig.setProxyUser(getenv("USENAME"));
httpConfig.setProxyPassword(getenv("PASSWORD"));
```

#### 1.3 超时配置 [:top:](#用户手册-top)

``` cpp
// 默认连接超时为60秒，默认读取超时为120秒。可根据需求修改该默认值
httpConfig.setConnectTimeout(60);
httpConfig.setReadTimeout(120);
```

#### 1.4 SSL 配置 [:top:](#用户手册-top)

``` cpp
// 配置跳过服务端证书验证（可选）
httpConfig.setIgnoreSslVerification(true);
```

### 2. 认证信息配置 [:top:](#用户手册-top)

华为云服务存在两种部署方式，Region 级服务和 Global 级服务。

Global 级服务当前仅支持 IAM 。

Region 级服务需要提供 projectId 。

Global 级服务需要提供 domainId 。

客户端认证可以使用永久 AK&SK 认证，也可以使用临时 AK&SK&SecurityToken 认证。

**认证参数说明**：

- `ak` 华为云账号 Access Key
- `sk` 华为云账号 Secret Access Key
- `projectId` 云服务所在项目 ID ，根据你想操作的项目所属区域选择对应的项目 ID
- `domainId` 华为云账号 ID
- `securityToken` 采用临时 AK&SK 认证场景下的安全票据

#### 2.1 使用永久 AK 和 SK [:top:](#用户手册-top)

``` cpp
// Region级服务
auto basicCredentials = std::make_unique<BasicCredentials>(); 
basicCredentials->withAk(ak)
    .withSk(sk)
    .withProjectId(projectId);

// Global级服务
auto globalCredentials = std::make_unique<GlobalCredentials>();
globalCredentials->withAk(ak)
    .withSk(sk)
    .withDomainId(domainId);
```

**说明**:

* `3.0.16-beta` 及以上版本支持自动获取 projectId/domainId ，用户需要指定当前华为云账号的永久 AK&SK 和 对应的 region_id，同时在初始化客户端时配合 `withRegion()`
  方法使用。 代码示例详见 [3.2 指定Region方式（推荐）](#32-指定-region-方式-推荐-top) 。

#### 2.2 使用临时 AK 和 SK [:top:](#用户手册-top)

首先需要获得临时 AK、SK 和 SecurityToken ，可以从永久 AK&SK 获得，或者通过委托授权获得。

- 通过永久 AK&SK 获得可以参考文档：https://support.huaweicloud.com/api-iam/iam_04_0002.html ，对应 IAM SDK
  中的 `CreateTemporaryAccessKeyByToken` 方法。

- 通过委托授权获得可以参考文档：https://support.huaweicloud.com/api-iam/iam_04_0101.html ，对应 IAM SDK
  中的 `CreateTemporaryAccessKeyByAgency` 方法。

临时 AK&SK&SecurityToken 获取成功后，可使用如下方式初始化认证信息：

``` cpp
// Region级服务
auto basicCredentials = std::make_unique<BasicCredentials>(); 
basicCredentials->withAk(ak)
    .withSk(sk)
    .withProjectId(projectId)
    .withSecurityToken(securityToken);

// Global级服务
auto globalCredentials = std::make_unique<GlobalCredentials>();
globalCredentials->withAk(ak)
    .withSk(sk)
    .withDomainId(domainId)
    .withSecurityToken(securityToken);
```

### 3. 客户端初始化 [:top:](#用户手册-top)

#### 3.1 指定云服务 Endpoint 方式 [:top:](#用户手册-top)

``` cpp
// 初始化指定云服务的客户端 {Service}Client ，以初始化 VpcClient 为例
std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
    .withCredentials(basicCredentials)
    .withHttpConfig(httpConfig)
    .withEndPoint(endpoint)
    .build();
```

**说明:**

- `endpoint` 是华为云各服务应用区域和各服务的终端节点，详情请查看 [地区和终端节点](https://developer.huaweicloud.com/endpoint) 。

- 当用户使用指定 Region 方式无法自动获取 projectId 时，可以使用当前方式调用接口。

#### 3.2 指定Region 方式（推荐)  [:top:](#用户手册-top)

* Region级服务

```c++
// 添加对应服务的Region依赖
#include <huaweicloud/ecs/v2/EcsRegion.h>
using namespace HuaweiCloud::Sdk::Ecs::V2;

// 初始化客户端认证信息，使用当前客户端初始化方式可不填 projectId/domainId，，以初始化 BaisicCredentials 为例
auto auth = std::make_unique<BasicCredentials>();
auth->withAk(ak)
        .withSk(sk);
// 初始化指定云服务的客户端 {Service}Client ，以初始化 Region 级服务 ECS 的 IamClient 为例
auto client = EcsClient::newBuilder()
                .withCredentials(std::unique_ptr<Credentials>(auth.release()))
                .withHttpConfig(httpConfig)
                .withFileLog(R"(.\log.txt)", true)
                .withStreamLog(true)
                .withRegion(EcsRegion::valueOf("cn-east-2"))
                .build();
```

* Global级服务

```c++
// 添加对应服务的Region依赖
#include <huaweicloud/devstar/v1/DevstarRegion.h>
#include <huaweicloud/devstar/v1/DevstarClient.h>
using namespace HuaweiCloud::Sdk::Devstar::V1;

auto auth = std::make_unique<GlobalCredentials>();
auth->withAk(ak).withSk(sk);

// 初始化指定云服务的客户端 {Service}Client ，以初始化 Global 级服务 Devstar为例
auto client = DevStarClient::newBuilder()
            .withCredentials(std::unique_ptr<Credentials>(auth.release()))
            .withHttpConfig(httpConfig)
            .withFileLog(R"(.\log.txt)", true)
            .withStreamLog(true)
            .withRegion(DevstarRegion::valueOf("cn-east-2"))
            .build();
```

**说明**：

* 指定 Region 方式创建客户端的场景，支持自动获取用户的 projectId 或者 domainId，初始化认证信息时可无需指定相应参数。

* **不适用**于 `多ProjectId` 的场景。

* 当前支持指定 Region 方式初始化客户端的 region_id : af-south-1, ap-southeast-1, ap-southeast-2, ap-southeast-3, cn-east-2, cn-east-3,
  cn-north-1, cn-north-4, cn-south-1, cn-southwest-2, ru-northwest-2。调用其他 region 可能会抛出 `Unsupported regionId` 的异常信息。

**两种方式对比：**

| 初始化方式               | 优势                                                         | 劣势                                         |
| ------------------------ | ------------------------------------------------------------ | -------------------------------------------- |
| 指定云服务 Endpoint 方式 | 只要接口已在当前环境发布就可以成功调用                       | 需要用户自行查找并填写 projectId 和 endpoint |
| 指定 Region 方式         | 无需指定 projectId 和 endpoint，按照要求配置即可自动获取该值并回填 | 支持的服务和 region 有限制                   |

### 4. 发送请求并查看响应 [:top:](#用户手册-top)

``` cpp
// 初始化请求，以调用接口 listVpcs 为例
Vpc::V2::Model::ListVpcsRequest listRequest;
std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = vpcApi_v2->listVpcs(listRequest);
std::string responseBody = listRes->getHttpBody();
std::cout << responseBody << std::endl;
```

#### 4.1 异常处理 [:top:](#用户手册-top)

| 一级分类                 | 一级分类说明   | 二级分类                 | 二级分类说明                            |
| :----------------------- | :------------- | :----------------------- | :-------------------------------------- |
| ConnectionException      | 连接类异常     | HostUnreachableException | 网络不可达、被拒绝                      |
|                          |                | SslHandShakeException    | SSL认证异常                             |
| RequestTimeoutException  | 响应超时异常   | CallTimeoutException     | 单次请求，服务器处理超时未返回          |
|                          |                | RetryOutageException     | 在重试策略消耗完成已后，仍无有效的响应  |
| ServiceResponseException | 服务器响应异常 | ServerResponseException  | 服务端内部错误，Http响应码：[500,]      |
|                          |                | ClientRequestException   | 请求参数不合法，Http响应码：[400， 500) |

``` cpp
// 异常处理
try {
    std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = 
        vpcApi_v2->listVpcs(listRequest);
    std::string responseBody = listRes->getHttpBody();
    std::cout << responseBody << std::endl;
} catch (HostUnreachableException& e) {
    std::cout << e.what() << std::endl;
} catch (SslHandShakeException& e) {
    std::cout << e.what() << std::endl;
} catch (RetryOutageException& e) {
    std::cout << e.what() << std::endl;
} catch (CallTimeoutException& e) {
    std::cout << e.what() << std::endl;
} catch (ServiceResponseException& e) {
    std::cout << "StatusCode: " << e.getStatusCode() << std::endl;
    std::cout << "ErrorCode: " << e.getErrorCode() << std::endl;
    std::cout << "ErrorMsg: " << e.getErrorMsg() << std::endl;
    std::cout << "RequestId: " << e.getRequestId() << std::endl;
}
```

### 5. 异步客户端使用 [:top:](#用户手册-top)

``` cpp
// 采用c++ std::async接口实现，以listVpcs接口为例
#include <future>
auto future = std::async(std::launch::async,
                        &Vpc::V2::VpcClient::listVpcs, vpcApi_v2.get(), listRequest);
auto listResponse = future.get();
```

### 6. 故障处理 [:top:](#用户手册-top)

SDK 提供 Access 级别的访问日志，用户可根据需要进行配置。

#### 6.1 访问日志 [:top:](#用户手册-top)

SDK 支持打印 Access 级别的访问日志，需要用户手动打开日志开关，支持打印到控制台或者指定的文件。示例如下：

``` cpp
// 初始化指定云服务的客户端 {Service}Client ，以初始化 VpcClient 为例
std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
    .withCredentials(basicCredentials)
    .withHttpConfig(httpConfig)
    .withFileLog(R"(.\log.txt)", true)
    .withStreamLog(true)
    .withEndPoint(endpoint)
    .build();
```

**说明**：

- `withFileLogger` 支持如下配置：
    - `logPath`: 日志文件路径
    - `enable`: 日志文件使能
- `withStreamLogger` 支持如下配置：
    - `enable`: 使能控制台输出日志

打开日志开关后，每次请求都会有一条记录，如：

``` text
[2020-10-16 03:10:29][INFO] "GET https://iam.cn-north-1.myhuaweicloud.com/v3.0/OS-CREDENTIAL/credentials/W8VHHFEFPIJV6TFOUOQO"  200 244 7a68399eb8ed63fc91018426a7c4b8a0
```

日志格式为：

``` text
"{httpMethod} {uri}" {httpStatusCode} {responseContentLength} {requestId}
```

### 7. 配置 CMakeLists.txt [:top:](#用户手册-top)

- 使用一个服务

``` cmake
# USE ONE SERVICE
SET(BUILD_SERVICE vpc)
SET(SERVICE_VERSION v2)

if(BUILD_SERVICE STREQUAL "")
    add_subdirectory(core)
else()
    add_subdirectory(core)
    add_subdirectory(${BUILD_SERVICE}/src/${SERVICE_VERSION})
    message(STATUS   "'BUILD_SERVICE'=${BUILD_SERVICE}")
endif()
```

- 使用多个服务

``` cmake
# USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
add_subdirectory(core)
add_subdirectory(vpc/src/v2)
add_subdirectory(eip/src/v2)
add_subdirectory(ecs/src/v2)
```
- 对于使用bson编码的服务(kvs)，需要设置ENABLE_BSON开关为ON，默认OFF
``` cmake
# SET ENABLE_BSON IS ON
option(ENABLE_BSON "Enable bson library" ON)

```

### 8.特殊说明
- 如果使用cce 服务的listAutopilotJobs、getAutopilotOneJob、deleteAutopilotJob 的3个特殊api, 需要参考以下示例代码进行调用。
和其他cce 的api 相比，有以下两处改动
1）在引用对应sdk 的client时需要引用 CceSpecClient.h头文件(其他api 是使用CceClient.h)
2）调用api 时需要CceSpecClient::newBuilder()方法来创建Client(其他api 是使用CceClient::newBuilder()方法)

``` cpp
#include <cstdlib>
#include <iostream>
#include <string>
#include <memory>
#include <huaweicloud/core/exception/Exceptions.h>
#include <huaweicloud/core/Client.h>
// include 头文件时需要引用CceSpecClient.h
#include <huaweicloud/cce/v3/CceSpecClient.h

using namespace HuaweiCloud::Sdk::Cce::V3;
using namespace HuaweiCloud::Sdk::Cce::V3::Model;
using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Core::Exception;
using namespace std;

int main() {
    string ak = getenv("CLOUD_SDK_AK");
    string sk = getenv("CLOUD_SDK_SK");

    auto auth = std::make_unique<BasicCredentials>();
    auth->withAk(ak)
        .withSk(sk);
    HttpConfig httpConfig = HttpConfig();
    // 调用api需要使用CceSpecClient
    auto client = CceSpecClient::newBuilder()
            .withCredentials(std::unique_ptr<Credentials>(auth.release()))
            .withHttpConfig(httpConfig)
            .withEndPoint(endpoint)
            .build();

    DeleteAutopilotJobRequest request;
    request.setJobId("f55daac6-0411-11f1-852c-0255ac101783");

    std::cout << "-----begin execute request-------" << std::endl;
    try {
        auto reponse = client->deleteAutopilotJob(request);
        std::cout << reponse->getHttpBody() << std::endl;
    } catch (HostUnreachableException& e) {
        std::cout << "host unreachable:" << e.what() << std::endl;
    } catch (SslHandShakeException& e) {
        std::cout << "ssl handshake error:" << e.what() << std::endl;
    } catch (RetryOutageException& e) {
        std::cout << "retryoutage error:" << e.what() << std::endl;
    } catch (CallTimeoutException& e) {
        std::cout << "call timeout:" <<  e.what() << std::endl;
    } catch (ServiceResponseException& e) {
        std::cout << "http status code:" << e.getStatusCode() << std::endl;
        std::cout << "error code:" << e.getErrorCode() << std::endl;
        std::cout << "error msg:" << e.getErrorMsg() << std::endl;
        std::cout << "RequestId:" << e.getRequestId() << std::endl;
    } catch (exception& e) {
        std:cout << "unknown exception:" << e.what() << std::endl;
    }
    std::cout << "------request finished--------" << std::endl;
    return 0;
}

```