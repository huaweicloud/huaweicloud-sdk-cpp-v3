[English](./README.md) | 简体中文

# 华为云开发者 C++ 软件开发工具包 （C++ SDK）

欢迎使用华为云 C++ SDK。

华为云 C++ SDK让您无需关心请求细节即可快速使用云服务器、虚拟私有云等多个华为云服务。

这里将向您介绍如何获取并使用华为云 C++ SDK。

## 在线示例

[API Explorer](https://apiexplorer.developer.huaweicloud.com/apiexplorer/overview) 提供API检索及平台调试，支持全量快速检索、可视化调试、帮助文档查看、在线咨询。

## 现在开始

- 要使用华为云 PHP SDK，您需要拥有云账号以及该账号对应的 Access Key（AK）和 Secret Access Key（SK）。 请在华为云控制台“我的凭证-访问密钥”页面上创建和查看您的 AK SK 。更多信息请查看[访问密钥](https://support.huaweicloud.com/usermanual-ca/zh-cn_topic_0046606340.html)。
- 华为云 C++ SDK 支持 C++ 14 及以上版本。
- 安装CMake 3.10 或以上版本。

## SDK 获取和安装

- ### 依赖的第三方库

  curl, boost, cpprestsdk, spdlog, openssl

- ### Linux

  1. 所需的这些第三方软件包在大部分系统的包管理工具中都有提供：

     例如基于 Debian/Ubuntu 的系统

  ```bash
  sudo apt-get install libcurl4-openssl-dev libboost-all-dev libssl-dev libcpprest-dev
  ```

  ​	spdlog需要从源码进行安装

  ```bash
  git clone https://github.com/gabime/spdlog.git
  cd spdlog
  mkdir build
  cd build
  cmake -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..  // 用以生成动态库
  make
  sudo make install
  ```

  2. 编译安装

  ```bash
  cd huaweicloud-cpp-sdk
  mkdir build
  cd build
  cmake ..
  make
  sudo make install
  ```

  **HuaweiCloud Cpp SDK 被安装在 `/usr/local`.**

- ### Windows

  1. 安装vcpkg并使用vcpkg安装所需软件包

     ```bash
     vcpkg install curl cpprestsdk boost openssl spdlog
     ```

  2. 使用CLion进行编译

     - 使用CLion打开huaweicloud_sdk_cpp目录

     - 选择`File` -> `Settings`

     - 选择`Build,Execution,Devloyment` -> `CMake`

     - 在`CMake options`中加入

       `-DCMAKE_TOOLCHAIN_FILE={your vcpkg install dir}/scripts/buildsystems/vcpkg.cmake`

     - 右键`CMakeLists.txt`选择`Load CMake Project`

     - 选择`Build`开始编译

  3. 安装C++ SDK

     - 编译完成后选择`Build` -> `Install`

     

  **HuaweiCloud Cpp SDK 被安装在 `C:\Program File (x86)\huaweicloud_sdk_cpp`目录**

​      

​      


## 开始使用

1. 导入依赖模块:

   ```c++
   #include <huaweicloud/core/exception/Exceptions.h>
   #include <huaweicloud/core/Client.h>
   #include <huaweicloud/vpc/v2/VpcClient.h>
   ```

2. 配置客户端属性

   2.1 默认配置

   ```c++
   # 使用默认配置
   HttpConfig httpConfig = HttpConfig();
   ```

   2.2 代理配置(可选)

   ```c++
   # 使用代理服务器（可选）
   httpConfig.setProxyProtocol("http");
   httpConfig.setProxyHost("proxy.huawei.com");
   httpConfig.setProxyPort("8080");
   httpConfig.setProxyUser("username");
   httpConfig.setProxyPassword("password");
   ```

   2.3 连接配置(可选)

   ```c++
   # 配置连接超时（可选），支持指定超时时长timeout=(connect timeout, read timeout)
   httpConfig.setConnectTimeout(3);
   httpConfig.setReadTimeout(3);
   ```

   2.4 SSL配置(可选)

   ```c++
   # 配置跳过服务端证书验证（可选）
   httpConfig.setIgnoreSslVerification(true);
   ```

3. 初始化认证信息

   **说明**：
   华为云服务存在两种部署方式，Region级服务和Global级服务。Global级服务当前仅支持IAM。

   Region级服务仅需要提供 projectId。Global级服务需要提供domainId。

   - `ak` 华为云账号 Access Key 。
   - `sk` 华为云账号 Secret Access Key 。
   - `project_id` 云服务所在项目 ID ，根据你想操作的项目所属区域选择对应的项目 ID 。
   - `domain_id` 华为云账号ID 。
   - `security_token` 采用临时AK/SK认证场景下的安全票据。

   3.1 使用永久AK/SK

   ```c++
   # Region services
   auto basicCredentials = std::make_unique<BasicCredentials>(); 
   basicCredentials->withAk("ak")
       .withSk("sk")
       .withProjectId("projectId")
       .withSecurityToken("securityToken")
   
   # Global services
   auto globalCredentials = std::make_unique<GlobalCredentials>();
   globalCredentials->withAk("ak")
       .withSk("sk")
       .withDomainId("domainId")
       .withSecurityToken("securityToken")
   ```

   3.2 使用临时AK/SK

   首选需要获得临时AK、SK和SecurityToken，获取可以从永久AK/SK获得，或者通过委托授权首选获得。

   通过永久AK/SK获得可以参考文档：https://support.huaweicloud.com/api-iam/iam_04_0002.html, 对应IAM SDK 中的createTemporaryAccessKeyByToken方法。

   通过委托授权获得可以参考文档：https://support.huaweicloud.com/api-iam/iam_04_0101.html, 对应IAM SDK 中的createTemporaryAccessKeyByAgency方法。

4. 初始化客户端:

   ```c++
   # 初始化指定云服务的客户端 {Service}Client ，以初始化 VpcClient 为例
   std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
       .withCredentials(std::unique_ptr<Credentials>(basicCredentials.release()))
       .withHttpConfig(httpConfig)
       .withFileLog(R"(.\log.txt)", true)
       .withStreamLog(true)
       .withEndPoint("https://vpc.cn-north-7.ulanqab.huawei.com")
       .build();
   ```

   **说明:**

   - `Endpoint` 华为云各服务应用区域和各服务的终端节点，详情请查看[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
   - `withFileLogger`支持如下配置：
     - `logPath`: 日志文件路径。
     - `enable`: 日志文件使能。
   - `withStreamLogger`支持如下配置：
     - `enable`: 使能控制台输出日志。

   打开日志开关后，每次请求将打印访问日志，格式如下：`"{httpMethod} {uri}" {httpStatusCode} {responseContentLength} {requestId}`

   ```shell
   [2020-10-16 03:10:29][INFO] "GET https://iam.cn-north-1.myhuaweicloud.com/v3.0/OS-CREDENTIAL/credentials/W8VHHFEFPIJV6TFOUOQO"  200 244 7a68399eb8ed63fc91018426a7c4b8a0
   ```

5. 发送请求并查看响应.

   ```c++
   # 初始化请求，以调用接口 listVpcs 为例
   Vpc::V2::Model::ListVpcsRequest listRequest;
   std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = vpcApi->listVpcs(listRequest);
   std::string responseBody = listRes->getHttpBody();
   std::cout << stringValue << std::endl;
   ```

6. 异常处理

   | 一级分类                 | 一级分类说明   | 二级分类                 | 二级分类说明                            |
   | :----------------------- | :------------- | :----------------------- | :-------------------------------------- |
   | ConnectionException      | 连接类异常     | HostUnreachableException | 网络不可达、被拒绝                      |
   |                          |                | SslHandShakeException    | SSL认证异常                             |
   | RequestTimeoutException  | 响应超时异常   | CallTimeoutException     | 单次请求，服务器处理超时未返回          |
   |                          |                | RetryOutageException     | 在重试策略消耗完成已后，仍无有效的响应  |
   | ServiceResponseException | 服务器响应异常 | ServerResponseException  | 服务端内部错误，Http响应码：[500,]      |
   |                          |                | ClientRequestException   | 请求参数不合法，Http响应码：[400， 500) |

   ```c++
   # 异常处理
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

7. 异步场景

   ```c++
   # 采用c++ std::async接口实现，以listVpcs接口为例
   #inclue <future>
   auto future = std::async(std::launch::async,
                            &Vpc::V2::VpcClient::listVpcs, vpcApi, listRequest);
   auto listResponse = future.get();
   ```

8. 配置CMakeLists.txt

   使用一个服务

   ```cmake
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

   使用多个服务

   ```cmake
   # USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
   add_subdirectory(core)
   add_subdirectory(vpc/src/v2)
   add_subdirectory(eip/src/v2)
   add_subdirectory(ecs/src/v2)
   ```

   

## 代码实例

- 使用如下代码演示`listVpcs`接口，实际使用中请将 `VpcClient` 替换为您使用的产品/服务相应的 `{Service}Client`。

- 调用前请根据实际情况替换如下变量：`{your ak string}`、 `{your sk string}`、 `{your endpoint}` 以及 `{your domain id}`。

  ```c++
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
      basicCredentials->withAk("ak")
              .withSk("sk")
              .withProjectId("projectId")
              .withSecurityToken("securityToken");
      
      // Configure VpcClient instance
      std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
              .withCredentials(std::unique_ptr<Credentials>(basicCredentials.release()))
              .withHttpConfig(httpConfig)
              .withFileLog("{output log path}", true)
              .withStreamLog(true)
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

  复制上述文件到 vpc_test.cpp。

  Linux 下

  ```bash
  $ g++ -o vpc_test vpc_test.cpp --std=c++14 -lvpc_v2 -lcore -lcrypto -lboost_system -lcpprest
  $ ./vpc_test
  # 返回结果
  $
  ```

  