[English](./README.md) | 简体中文

<p align="center">
  <a href="https://www.huaweicloud.com/"><img width="270px" height="90px" src="https://console-static.huaweicloud.com/static/authui/20210202115135/public/custom/images/logo.svg"></a>
</p>

<h1 align="center">华为云开发者 C++ 软件开发工具包（C++ SDK）</h1>

欢迎使用华为云 C++ SDK。

华为云 C++ SDK 让您无需关心请求细节即可快速使用弹性云服务器、虚拟私有云等多个华为云服务。

这里将向您介绍如何获取并使用华为云 C++ SDK 。

## 使用前提

- 要使用华为云 C++ SDK ，您需要拥有云账号以及该账号对应的 Access Key（AK）和 Secret Access Key（SK）。 请在华为云控制台“我的凭证-访问密钥”页面上创建和查看您的 AK&SK
  。更多信息请查看 [访问密钥](https://support.huaweicloud.com/usermanual-ca/zh-cn_topic_0046606340.html) 。

- 要使用华为云 C++ SDK 访问指定服务的 API
  ，您需要确认已在 [华为云控制台](https://console.huaweicloud.com/console/?locale=zh-cn&region=cn-north-4#/home) 开通当前服务。

- 华为云 C++ SDK 支持 **C++ 14** 及以上版本，要求安装 **CMake 3.10** 及以上版本。

## SDK 获取和安装

### 依赖的第三方库

`curl`、`boost`、`cpprestsdk`、`spdlog`、`openssl`

### 在 Linux 系统上安装 SDK

#### Step 1：获取依赖包

所需的这些第三方软件包在大部分系统的包管理工具中都有提供：

例如基于 Debian/Ubuntu 的系统

``` bash
sudo apt-get install libcurl4-openssl-dev libboost-all-dev libssl-dev libcpprest-dev
```

spdlog 需要从源码进行安装

``` bash
git clone https://github.com/gabime/spdlog.git
cd spdlog
mkdir build
cd build
cmake -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..  // 用以生成动态库
make
sudo make install
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

### 在 Windows 系统上安装 SDK

#### Step 1：安装 vcpkg 并使用 vcpkg 安装所需软件包

``` bash
vcpkg install curl cpprestsdk boost openssl spdlog
```

#### Step 2：使用 CLion 进行编译

1. 使用 CLion 打开 `huaweicloud-sdk-cpp-v3` 目录

2. 选择 `File` → `Settings`

3. 选择 `Build, Execution, Deployment` → `CMake`

4. 在 `CMake options` 中加入

`-DCMAKE_TOOLCHAIN_FILE={your vcpkg install dir}/scripts/buildsystems/vcpkg.cmake`

5. 右键 `CMakeLists.txt` 选择 `Load CMake Project`

6. 选择`Build`开始编译

#### Step 3：安装 C++ SDK

编译完成后选择 `Build` → `Install`

完成上述操作后，**C++ SDK 安装目录为 `C:\Program File (x86)\huaweicloud-sdk-cpp-v3`** 。

## 代码示例

- 使用如下代码同步查询指定 Region 下的 VPC 列表，实际使用中请将 `VpcClient` 替换为您使用的产品/服务相应的 `{Service}Client`。

- 调用前请根据实际情况替换如下变量：`{your ak string}`、 `{your sk string}`、 `{your endpoint}` 以及 `{your project id}`。

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
    // Initialize HTTP config
    HttpConfig httpConfig = HttpConfig();

    // Initialize AK/SK module
    auto basicCredentials = std::make_unique<BasicCredentials>();
    basicCredentials->withAk("{your ak string}")
            .withSk("{your sk string}")
            .withProjectId("{your project id}");
    
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

如果您是在 Linux 系统中运行该代码，请复制上述文件到 vpc_test.cpp。然后执行如下命令：

``` bash
$ g++ -o vpc_test vpc_test.cpp --std=c++14 -lvpc_v2 -lcore -lcrypto -lboost_system -lcpprest
$ ./vpc_test
# 下方会显示实际运行结果
$ 
```

## 在线调试

[API Explorer](https://apiexplorer.developer.huaweicloud.com/apiexplorer/overview)
提供API检索及平台调试，支持全量快速检索、可视化调试、帮助文档查看、在线咨询。

## 变更日志

每个版本的详细更改记录可在 [变更日志](https://github.com/huaweicloud/huaweicloud-sdk-cpp-v3/blob/master/CHANGELOG_CN.md) 中查看。

## 用户手册 [:top:](#华为云开发者-c-软件开发工具包c-sdk)

* [1. 客户端连接参数](#1-客户端连接参数-top)
    * [1.1 默认配置](#11-默认配置-top)
    * [1.2 网络代理](#12-网络代理-top)
    * [1.3 超时配置](#13-超时配置-top)
    * [1.4 SSL 配置](#14-ssl-配置-top)
* [2. 客户端认证信息](#2-客户端认证信息-top)
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
httpConfig.setProxyHost("proxy.huawei.com");
httpConfig.setProxyPort("8080");
httpConfig.setProxyUser("username");
httpConfig.setProxyPassword("password");
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

### 2. 客户端认证信息 [:top:](#用户手册-top)

华为云服务存在两种部署方式，Region 级服务和 Global 级服务。

Global 级服务当前仅支持 IAM 。

Region 级服务需要提供 projectId 。Global 级服务需要提供 domainId 。

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
std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = vpcApi->listVpcs(listRequest);
std::string responseBody = listRes->getHttpBody();
std::cout << stringValue << std::endl;
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

### 5. 异步客户端使用 [:top:](#用户手册-top)

``` cpp
// 采用c++ std::async接口实现，以listVpcs接口为例
#include <future>
auto future = std::async(std::launch::async,
                        &Vpc::V2::VpcClient::listVpcs, vpcApi, listRequest);
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
