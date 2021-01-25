English | [简体中文](./README_CN.md)

# HuaweiCloud C++ Software Development Kit (C++ SDK)

The HuaweiCloud C++ SDK allows you to easily work with Huawei Cloud services such as Elastic Compute Service (ECS) and Virtual Private Cloud(VPC) without the need to handle API related tasks.

This document introduces how to obtain and use HuaweiCloud C++ SDK.

## Getting Started

- To use HuaweiCloud C++ SDK, you must have Huawei Cloud account as well as the Access Key and Secret key of the HuaweiCloud account.

  The accessKey is required when initializing `{Service}Client`. You can create an AccessKey in the Huawei Cloud console. For more information, see [My Credentials](https://support.huaweicloud.com/en-us/usermanual-ca/en-us_topic_0046606340.html).

- HuaweiCloud C++ SDK requires C++ 14 or later.

- Install CMake 3.10 or later.

## Install C++ SDK

- ### Third-part Libraries

  curl,boost,cpprestsdk,spdlog,openssl

- ### Linux

  1. Install third-party libraries on the Linux platform :

     Run the following commands on the `Debian/Ubuntu` system

  ```bash
  sudo apt-get install libcurl4-openssl-dev libboost-all-dev libssl-dev libcpprest-dev
  ```

  ​	Install spdlog:

  ```bash
  git clone https://github.com/gabime/spdlog.git
  cd spdlog
  mkdir build
  cd build
  cmake -DCMAKE_POSITION_INDEPENDENT_CODE=ON ..  // for shared library
  make
  sudo make install
  ```

  2. Build and install SDK

  ```bash
  cd huaweicloud-cpp-sdk
  mkdir build
  cd build
  cmake ..
  make
  sudo make install
  ```

     **HuaweiCloud Cpp SDK will be installed to `/usr/local`.**

- ### Windows

  1. Install vcpkg and install third-part libraries by vcpkg:

  ```bash
  vcpkg install curl cpprestsdk boost openssl spdlog
  ```

  2. Build By CLion

     - open huaweicloud_sdk_cpp directory by clion

     - choose `File` -> `Settings`

     - choose  `Build,Execution,Devloyment` -> `CMake`

     - add `-DCMAKE_TOOLCHAIN_FILE={your vcpkg install dir}/scripts/buildsystems/vcpkg.cmake`     in `CMake options`

     - click `CMakeLists.txt`  and choose `Load CMake Project`

     - choose `Build`

  3. Install C++ SDK

     - choose `Build` -> `Install`

     

     **HuaweiCloud Cpp SDK will be installed to `C:\Program File (x86)\huaweicloud_sdk_cpp`目录**

     

## Use C++ SDK

1. Import the required modules as follows:

   ```c++
   #include <huaweicloud/core/exception/Exceptions.h>
   #include <huaweicloud/core/Client.h>
   #include <huaweicloud/vpc/v2/VpcClient.h>
   ```

2. Config Client Configurations

   2.1 Use default configuration

   ```c++
   #  Use default configuration
   HttpConfig httpConfig = HttpConfig();
   ```

   2.2 Proxy(Optional)

   ```c++
   # Use Proxy if needed
   httpConfig.setProxyProtocol("http");
   httpConfig.setProxyHost("proxy.huawei.com");
   httpConfig.setProxyPort("8080");
   httpConfig.setProxyUser("username");
   httpConfig.setProxyPassword("password");
   ```

   2.3 Connection(Optional)

   ```c++
   # seconds to wait for the server to send data before giving up, as a float (connect timeout, read timeout)
   httpConfig.setConnectTimeout(3);
   httpConfig.setReadTimeout(3);
   ```

   2.4 SSL Certification(Optional)

   ```c++
   # Skip ssl certification checking while using https protocol if needed
   httpConfig.setIgnoreSslVerification(true);
   ```

3. Initialize Credentials

   **Notice:**
   There are two types of HUAWEI CLOUD services, regional services and global services. 
   Global services currently only support IAM.

   For Regional services' authentication, projectId is required. 
   For global services' authentication, domainId is required. 

   - `ak` is the access key ID for your account.
   - `sk` is the secret access key for your account.
   - `project_id` is the ID of your project depending on your region which you want to operate.
   - `domain_id` is the account ID of HUAWEI CLOUD.
   - `security_token` is the security token when using temporary AK/SK.

   3.1 Use permanent AK/SK

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

   3.2 Use temporary AK/SK

   It's preferred to obtain temporary access key, security key and security token first, which could be obtained through permanent access key and security key or through an agency.

   Obtaining a temporary access key token through permanent access key and security key, you could refer to document: https://support.huaweicloud.com/en-us/api-iam/iam_04_0002.html . The API mentioned in the document above corresponds to the method of createTemporaryAccessKeyByToken in IAM SDK.

   Obtaining a temporary access key and security token through an agency, you could refer to document: https://support.huaweicloud.com/en-us/api-iam/iam_04_0101.html . The API mentioned in the document above corresponds to the method of createTemporaryAccessKeyByAgency in IAM SDK.

4. Initialize the `{Service}Client` instance:

   ```c++
   # Initialize specified service client instance, take VpcClient for example
   std::unique_ptr<Vpc::V2::VpcClient> vpcApi_v2 = Vpc::V2::VpcClient::newBuilder()
       .withCredentials(std::unique_ptr<Credentials>(basicCredentials.release()))
       .withHttpConfig(httpConfig)
       .withFileLog(R"(.\log.txt)", true)
       .withStreamLog(true)
       .withEndPoint("https://vpc.cn-north-7.ulanqab.huawei.com")
       .build();
   ```

   **where:**

   - `Endpoint`: service specific endpoints, see [Regions and Endpoints](https://developer.huaweicloud.com/intl/en-us/endpoint).
   - `withFileLogger`:
     - `logPath`: log file path.
     - `enable`: file log enable.
   - `withStreamLogger`:
     - `enable`: console log enable.

   After enabled log, the SDK will print the access log by default, every request will be recorded in console like: `"{httpMethod} {uri}" {httpStatusCode} {responseContentLength} {requestId}`

   ```shell
   [2020-10-16 03:10:29][INFO] "GET https://iam.cn-north-1.myhuaweicloud.com/v3.0/OS-CREDENTIAL/credentials/W8VHHFEFPIJV6TFOUOQO"  200 244 7a68399eb8ed63fc91018426a7c4b8a0
   ```

5. Send a request and print response.

   ```c++
   # Initialize request
   Vpc::V2::Model::ListVpcsRequest listRequest;
   std::shared_ptr<Vpc::V2::Model::ListVpcsResponse> listRes = vpcApi->listVpcs(listRequest);
   std::string responseBody = listRes->getHttpBody();
   std::cout << stringValue << std::endl;
   ```

6. Exceptions

   | Level 1                  | Notice                 | Level 2                  | Notice                                        |
   | :----------------------- | :--------------------- | :----------------------- | :-------------------------------------------- |
   | ConnectionException      | Connection error       | HostUnreachableException | Host is not reachable                         |
   |                          |                        | SslHandShakeException    | SSL certification error                       |
   | RequestTimeoutException  | Request timeout        | CallTimeoutException     | timeout for single request                    |
   |                          |                        | RetryOutageException     | no response after retrying                    |
   | ServiceResponseException | service response error | ServerResponseException  | server inner error, http status code: [500,]  |
   |                          |                        | ClientRequestException   | invalid request, http status code: [400? 500) |

   ```c++
   # handle exceptions
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

7. Asynchronous Requests

   ```cpp
   # use c++ std::async
   #inclue <future>
   auto future = std::async(std::launch::async,
                            &Vpc::V2::VpcClient::listVpcs, vpcApi, listRequest);
   auto listResponse = future.get();
   ```

8. Set CMakeLists.txt

    use one service

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

    use multiple services

    ```cmake
    # USE MULTIPLE SERVICES(EXAMPLE: USE VPC ECS AND EIP)
    add_subdirectory(core)
    add_subdirectory(vpc/src/v2)
    add_subdirectory(eip/src/v2)
    add_subdirectory(ecs/src/v2)
    ```



## Code example

- The following example shows how to query a list of VPC in a specific region, you need to substitute your real `{Service}Client` for `VpcClient` in actual use.

- Substitute the values for `{your ak string}`, `{your sk string}`, `{your endpoint string}` and `{your domain id}`.

  ```cpp
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
  Copy the above to vpc_test.cpp, then build with the following command. 

  Linux:

  ```bash
  $ g++ -o vpc_test vpc_test.cpp --std=c++14 -lvpc_v2 -lcore -lcrypto -lboost_system -lcpprest
  $ ./vpc_test
  # response
  $
  ```

  