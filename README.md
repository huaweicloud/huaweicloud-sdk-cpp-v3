English | [简体中文](./README_CN.md)

<p align="center">
<a href="https://www.huaweicloud.com/"><img width="450px" height="102px" src="https://console-static.huaweicloud.com/static/authui/20210202115135/public/custom/images/logo-en.svg"></a>
</p>

<h1 align="center">Huawei Cloud C++ Software Development Kit (C++ SDK)</h1>

The Huawei Cloud C++ SDK allows you to easily work with Huawei Cloud services such as Elastic Compute Service (ECS) and
Virtual Private Cloud (VPC) without the need to handle API related tasks.

This document introduces how to obtain and use Huawei Cloud C++ SDK.

## Requirements

- To use Huawei Cloud C++ SDK, you must have Huawei Cloud account as well as the Access Key (AK) and Secret key (SK) of the Huawei
  Cloud account. You can create an Access Key in the Huawei Cloud console. For more information,
  see [My Credentials](https://support.huaweicloud.com/en-us/usermanual-ca/en-us_topic_0046606340.html).

- To use Huawei Cloud C++ SDK to access the APIs of specific service, please make sure you do have activated the service
  in [Huawei Cloud console](https://console.huaweicloud.com/?locale=en-us) if needed.

- Huawei Cloud C++ SDK requires **C++ 14** or later, and requires **CMake 3.10** or later.

## Install C++ SDK

You can get the SDK version information through [SDK center](https://console-intl.huaweicloud.com/apiexplorer/#/sdkcenter?language=C%2B%2B) or [Github Releases](https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3/releases?page=1).

### Dependent Third-Party Libraries

`curl`, `boost`, `cpprestsdk`, `spdlog`, `openssl`

### Install SDK on Linux platform

#### Step 1: Install third-party libraries

The required third-party packages are available in great part of package management tools of different OS.

Take `Debian/Ubuntu` system for example, you could run the following commands:

``` bash
sudo apt-get install libcurl4-openssl-dev libboost-all-dev libssl-dev libcpprest-dev
```

`spdlog` is able to installed by source code only:

``` bash
git clone https://github.com/gabime/spdlog.git
cd spdlog
mkdir build
cd build
cmake -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..  // for shared library
make
sudo make install
```

For services that use BSON (kvs), install `libbson` and configure LIBBSON_INCLUDE_DIRS and LIBBSON_LIBRARY_DIRS to specify the header file path and library file path, respectively.

``` bash
sudo apt-get install libbson-1.0
```

#### Step 2: Build and install SDK

``` bash
git clone https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3.git
cd huaweicloud-sdk-cpp-v3
mkdir build
cd build
cmake ..
make
sudo make install
```

After the preceding commands completed, **the installation directory of C++ SDK** is `/usr/local`.

### Install SDK on Windows platform

#### Step 1: Install vcpkg and install third-part libraries by vcpkg:

``` bash
vcpkg install curl cpprestsdk boost openssl spdlog
```
For services that use BSON (kvs), install `libbson` and configure LIBBSON_DIR to specify libbson root path.
``` bash
vcpkg install libbson
```
#### Step 2: Build By CLion

1. open directory `huaweicloud-sdk-cpp-v3` by clion

2. choose `File` -> `Settings`

3. choose `Build, Execution, Devloyment` -> `CMake`

4. add `-DCMAKE_TOOLCHAIN_FILE={your vcpkg install dir}/scripts/buildsystems/vcpkg.cmake` in `CMake options`

5. click `CMakeLists.txt` and choose `Load CMake Project`

6. Configure compilation toolchain of clion as MSVC: Select Toolchain as Visual Studio on the `CMake` configuration page in step 3, and you cannot select other compilers such as mingw (the windows platform relies on the msvc compiler,
   Compiling with other compilers such as mingw will report an error). In addition, the user can also choose whether the compiled binary file is in Debug mode or Release mode, and select `Build Type` to make a drop-down selection.

7. Configure the architecture and platform of the target file: the windows platform supports compiling sdk link library files of different CPU architectures (x64, x86), users can configure according to actual needs, click
   `Build, Execution, Deployment` → `Toolchains`, in the Architecture option, you can drop down to select the supported CPU architecture.

8. choose `Build` and start compile

#### Step 3: Install C++ SDK

choose `Build` -> `Install` after compilation.

After the preceding commands completed, **the installation directory of C++ SDK**
is `C:\Program File (x86)\huaweicloud-sdk-cpp-v3`.

## Code example

- The following example shows how to query a list of VPC in a specific region, you need to substitute your
  real `{Service}Client` for `VpcClient` in actual use.

- - Hard-coding ak and sk for authentication into the code or storing it in plain text has a great security risk. It is recommended to store the ciphertext in the profile or environment variables and decrypt it when used to ensure security.
- In this example, ak and sk are stored in environment variables. Please configure the environment variables `HUAWEICLOUD_SDK_AK` and `HUAWEICLOUD_SDK_SK` before running this example.

``` cpp
#include <cstdio>
#include <iostream>
#include <huaweicloud/core/exception/Exceptions.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/vpc/v2/VpcClient.h>

using namespace HuaweiCloud::Sdk;
using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Core::Exception;

int main(void)
{   
    //Do not hard-code authentication information into the code, as this may pose a security risk
    //Authentication can be configured through environment variables and other methods. Please refer to Chapter 2.4 Authentication Management 
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
        std::string stringValue;
        // Creat an API request and get response
        std::cout << "************ListVpc***********" << std::endl;
        std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = 
            vpcApi->listVpcs(listRequest);
        stringValue = listRes->getHttpBody();
        std::cout << stringValue << std::endl;
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

If you want to run the example on Linux platform, please copy commands above and save as vpc_test.cpp, then build with
the following command:

``` bash
$ g++ -o vpc_test vpc_test.cpp --std=c++14 -lvpc_v2 -lcore -lcrypto -lboost_system -lcpprest
$ ./vpc_test
# response
$
```
If you use cmake to manage projects under Windows, you need to introduce the relevant dependencies of the sdk core package and service package in CMakeLists.txt.
You can refer to the following CMakeLists.txt file:
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

## Online Debugging

[API Explorer](https://apiexplorer.developer.intl.huaweicloud.com/apiexplorer/overview) provides api retrieval, SDK samples and online debugging, supports full fast retrieval, visual debugging, help document viewing, and online consultation.

## Changelog

Detailed changes for each released version are documented in
the [CHANGELOG.md](https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3/blob/master/CHANGELOG.md).

## User Manual [:top:](#huawei-cloud-c-software-development-kit-c-sdk)

* [1. Client Configuration](#1-client-configuration-top)
    * [1.1 Default Configuration](#11-default-configuration-top)
    * [1.2 Network Proxy](#12-network-proxy-top)
    * [1.3 Timeout Configuration](#13-timeout-configuration-top)
    * [1.4 SSL Certification](#14-ssl-certification-top)
* [2. Credentials Configuration](#2-credentials-configuration-top)
    * [2.1 Use Permanent AK&SK](#21-use-permanent-aksk-top)
    * [2.2 Use Temporary AK&SK](#22-use-temporary-aksk-top)
* [3. Client Initialization](#3-client-initialization-top)
    * [3.1 Initialize the client with specified Endpoint](#31-initialize-the-serviceclient-with-specified-endpoint-top)
* [4. Send Requests and Handle Responses](#4-send-requests-and-handle-responses-top)
    * [4.1 Exceptions](#41-exceptions-top)
* [5. Use Asynchronous Client](#5-use-asynchronous-client-top)
* [6. Troubleshooting](#6-troubleshooting-top)
    * [6.1 Access Log](#61-access-log-top)
* [7. Set CMakeLists.txt](#7-set-cmakeliststxt-top)

### 1. Client Configuration [:top:](#user-manual-top)

#### 1.1 Default Configuration [:top:](#user-manual-top)

``` cpp
// Use default configuration
HttpConfig httpConfig = HttpConfig();
```

#### 1.2 Network Proxy [:top:](#user-manual-top)

``` cpp
// Use network proxy if needed
httpConfig.setProxyProtocol("http");
httpConfig.setProxyHost("proxy.com");
httpConfig.setProxyPort("8080");
// In this example, username and password are stored in environment variables. Please configure the environment variables PROXY_USERNAME and PROXY_PASSWORD before running this example.
httpConfig.setProxyUser(getenv("USENAME"));
httpConfig.setProxyPassword(getenv("PASSWORD"));
```

#### 1.3 Timeout Configuration [:top:](#user-manual-top)

``` cpp
// The default connection timeout is 60 seconds, the default read timeout is 120 seconds. You could change it if needed.
httpConfig.setConnectTimeout(60);
httpConfig.setReadTimeout(120);
```

#### 1.4 SSL Certification [:top:](#user-manual-top)

``` cpp
// Skip SSL certification checking while using https protocol if needed
httpConfig.setIgnoreSslVerification(true);
```

### 2. Credentials Configuration [:top:](#user-manual-top)

There are two types of Huawei Cloud services, `regional` services and `global` services.

Global services only contain IAM.

For `regional` services' authentication, project_id is required. 

For `global` services' authentication, domain_id is required.

**Parameter description**:

- `ak` is the access key ID for your account.
- `sk` is the secret access key for your account.
- `project_id` is the ID of your project depending on your region which you want to operate.
- `domain_id` is the account ID of Huawei Cloud.
- `security_token` is the security token when using temporary AK/SK.

#### 2.1 Use Permanent AK&SK [:top:](#user-manual-top)

``` cpp
// Regional services
auto basicCredentials = std::make_unique<BasicCredentials>(); 
basicCredentials->withAk(ak)
    .withSk(sk)
    .withProjectId(projectId);

// Global services
auto globalCredentials = std::make_unique<GlobalCredentials>();
globalCredentials->withAk(ak)
    .withSk(sk)
    .withDomainId(domainId);
```
**Notice**:

- projectId/domainId supports **automatic acquisition** in version `0.0.26-beta` or later, if you want to use this
  feature, you need to provide the ak and sk of your account and the id of the region, and then build your client
  instance with method `WithRegion()`, detailed example could refer
  to [3.2  Initialize client with specified Region](#32-initialize-the-serviceclient-with-specified-region-recommended-top)


#### 2.2 Use Temporary AK&SK [:top:](#user-manual-top)

It's required to obtain temporary AK&SK and security token first, which could be obtained through
permanent AK&SK or through an agency.

- Obtaining a temporary access key and security token through token, you could refer to
document: https://support.huaweicloud.com/en-us/api-iam/iam_04_0002.html . The API mentioned in the document above
corresponds to the method of `CreateTemporaryAccessKeyByToken` in IAM SDK.

- Obtaining a temporary access key and security token through an agency, you could refer to
document: https://support.huaweicloud.com/en-us/api-iam/iam_04_0101.html . The API mentioned in the document above
corresponds to the method of `CreateTemporaryAccessKeyByAgency` in IAM SDK.

``` cpp
// Regional services
auto basicCredentials = std::make_unique<BasicCredentials>(); 
basicCredentials->withAk(ak)
    .withSk(sk)
    .withProjectId(projectId)
    .withSecurityToken(securityToken);

// Global services
auto globalCredentials = std::make_unique<GlobalCredentials>();
globalCredentials->withAk(ak)
    .withSk(sk)
    .withDomainId(domainId)
    .withSecurityToken(securityToken);
```

### 3. Client Initialization [:top:](#user-manual-top)

#### 3.1 Initialize the {Service}Client with specified Endpoint [:top:](#user-manual-top)

``` cpp
// Initialize specified service client instance, take VpcClient for example
std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
    .withCredentials(basicCredentials)
    .withHttpConfig(httpConfig)
    .withEndPoint(endpoint)
    .build();
```

**where:**

- `endpoint` varies by services and regions,
  see [Regions and Endpoints](https://developer.huaweicloud.com/intl/en-us/endpoint) to obtain correct endpoint.
- When you meet some trouble in getting projectId using the specified region way, you could use this way instead.

#### 3.2 Initialize the {Service}Client with specified Region **(Recommended)** [:top:](#user-manual-top)

* Region Services

```c++
// add dependency for the {{Service}}Region
#include <huaweicloud/ecs/v2/EcsRegion.h>
using namespace HuaweiCloud::Sdk::Ecs::V2;

//  Initialize the credentials, projectId or domainId could be unassigned in this situation, take initializing BasicCredentials for example
auto auth = std::make_unique<BasicCredentials>();
auth->withAk(ak)
        .withSk(sk);
// Initialize specified New{Service}Client, take initializing the region service ECS for example
auto client = EcsClient::newBuilder()
                .withCredentials(std::unique_ptr<Credentials>(auth.release()))
                .withHttpConfig(httpConfig)
                .withFileLog(R"(.\log.txt)", true)
                .withStreamLog(true)
                .withRegion(EcsRegion::valueOf("cn-east-2"))
                .build();
```

* Global Services

```c++
// add dependency for the {{Service}}Region
#include <huaweicloud/devstar/v1/DevstarRegion.h>
#include <huaweicloud/devstar/v1/DevstarClient.h>
using namespace HuaweiCloud::Sdk::Devstar::V1;

auto auth = std::make_unique<GlobalCredentials>();
auth->withAk(ak).withSk(sk);

// Initialize the credentials, projectId or domainId could be unassigned in this situation, take initializing GlobalCredentials for example
auto client = DevStarClient::newBuilder()
            .withCredentials(std::unique_ptr<Credentials>(auth.release()))
            .withHttpConfig(httpConfig)
            .withFileLog(R"(.\log.txt)", true)
            .withStreamLog(true)
            .withRegion(DevstarRegion::valueOf("cn-east-2"))
            .build();
```

**Notice:**

- If you use `region` to initialize {Service}Client, projectId/domainId supports automatic acquisition, you don't need
  to configure it when initializing Credentials.
- Multiple ProjectId situation is **not supported**.
- Supported region list: af-south-1, ap-southeast-1, ap-southeast-2, ap-southeast-3, cn-east-2, cn-east-3, cn-north-1,
  cn-north-4, cn-south-1, cn-southwest-2, ru-northwest-2. You may get exception such as `Unsupported regionId` if your
  region don't in the list above.

**Comparison of the two ways:**

| Initialization     | Advantages                                                   | Disadvantage                                         |
| ------------------ | ------------------------------------------------------------ | ---------------------------------------------------- |
| Specified Endpoint | The API can be invoked successfully once it has been published in the environment. | You need to prepare projectId and endpoint yourself. |
| Specified Region   | No need for projectId and endpoint, it supports automatic acquisition if you configure it in the right way. | The supported services and regions are limited.      |

### 4. Send Requests and Handle Responses [:top:](#user-manual-top)

``` cpp
// Initialize request
Vpc::V2::Model::ListVpcsRequest listRequest;
std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = vpcApi->listVpcs(listRequest);
std::string responseBody = listRes->getHttpBody();
std::cout << stringValue << std::endl;
```

#### 4.1 Exceptions [:top:](#user-manual-top)

| Level 1                  | Notice                 | Level 2                  | Notice                                        |
| :----------------------- | :--------------------- | :----------------------- | :-------------------------------------------- |
| ConnectionException      | Connection error       | HostUnreachableException | Host is not reachable                         |
|                          |                        | SslHandShakeException    | SSL certification error                       |
| RequestTimeoutException  | Request timeout        | CallTimeoutException     | timeout for single request                    |
|                          |                        | RetryOutageException     | no response after retrying                    |
| ServiceResponseException | service response error | ServerResponseException  | server inner error, http status code: [500,]  |
|                          |                        | ClientRequestException   | invalid request, http status code: [400? 500) |

``` cpp
// handle exceptions
try {
    std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = 
        vpcApi->listVpcs(listRequest);
    std::string responseBody = listRes->getHttpBody();
    std::cout << stringValue << std::endl;
} catch (HostUnreachableException& e) {
    std::cout << e.what() << std::endl;
} catch (SslHandShakeException& e) {
    std::cout << e.what() << std::endl;
} catch (RetryQutageException& e) {
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

### 5. Use Asynchronous Client [:top:](#user-manual-top)

``` cpp
// use c++ std::async
#include <future>
auto future = std::async(std::launch::async,
                        &Vpc::V2::VpcClient::listVpcs, vpcApi, listRequest);
auto listResponse = future.get();
```

### 6. Troubleshooting [:top:](#user-manual-top)

SDK supports `Access` log which could be configured manually.

#### 6.1 Access Log [:top:](#user-manual-top)

SDK supports print access log which could be enabled by manual configuration, the log could be output to the console or
specified files.

For example:

``` cpp
// Initialize specified service client instance, take VpcClient for example
std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
    .withCredentials(basicCredentials)
    .withHttpConfig(httpConfig)
    .withFileLog(R"(.\log.txt)", true)
    .withStreamLog(true)
    .withEndPoint(endpoint)
    .build();
```

**where:**

- `withFileLogger`:
    - `logPath` means log file path.
    - `enable` means file log is enabled.
- `withStreamLogger`:
    - `enable` means console log is enabled.

After enabled log, the SDK will print the access log by default, every request will be recorded to the console like:

``` text
[2020-10-16 03:10:29][INFO] "GET https://iam.cn-north-1.myhuaweicloud.com/v3.0/OS-CREDENTIAL/credentials/W8VHHFEFPIJV6TFOUOQO"  200 244 7a68399eb8ed63fc91018426a7c4b8a0
```

The format of access log is:

``` text
"{httpMethod} {uri}" {httpStatusCode} {responseContentLength} {requestId}
```

### 7. Set CMakeLists.txt [:top:](#user-manual-top)

- If you want to use one service, you could configure like this:

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

- If you want to use multiple services, you could configure like this:

``` cmake
# USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
add_subdirectory(core)
add_subdirectory(vpc/src/v2)
add_subdirectory(eip/src/v2)
add_subdirectory(ecs/src/v2)
```
- For services that use BSON (kvs), set ENABLE_BSON to ON. ENABLE_BSON is set to OFF by default.
``` bash
# For services that use BSON, set ENABLE_BSON to ON. ENABLE_BSON is set to OFF by default.
option(ENABLE_BSON "Enable bson library" ON)
```