/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache LICENSE, Version 2.0 (the
 * "LICENSE"); you may not use this file except in compliance
 * with the LICENSE.  You may obtain a copy of the LICENSE at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the LICENSE is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the LICENSE for the
 * specific language governing permissions and limitations
 * under the LICENSE.
 */


#ifndef HUAWEICLOUD_SDK_CORE_CLIENTBUILDER_H
#define HUAWEICLOUD_SDK_CORE_CLIENTBUILDER_H

#include <cstdlib>
#include <cstdio>

#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/http/HttpConfig.h>
#include <huaweicloud/core/auth/Credentials.h>
#include <huaweicloud/core/auth/BasicCredentials.h>
#include <huaweicloud/core/auth/GlobalCredentials.h>
#include <huaweicloud/core/auth/Region.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/CoreExport.h>
#include <type_traits>


namespace HuaweiCloud {
namespace Sdk {
namespace Core {
using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)

inline std::string getenv(const std::string &envVariable)
{
    size_t requiredSize;
    // get size of environment variable
    getenv_s(&requiredSize, nullptr, 0, envVariable.c_str());
    if (requiredSize == 0) {
        return "";
    }
    std::vector<char> envVar;
    envVar.resize(requiredSize);
    // get data of environment variable
    getenv_s(&requiredSize, envVar.data(), requiredSize, envVariable.c_str());
    return std::string(envVar.data(), requiredSize - 1);
}

#endif

inline std::unique_ptr<Credentials> getCredentialFromSystem(const std::string &defaultType)
{
    std::string akStr;
    std::string skStr;
    std::string securityTokenStr;
    std::string projectIdStr;
    std::string domainIdStr;
    std::string typeStr;

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)

    akStr = getenv("HUAWEICLOUD_SDK_AK");
    skStr = getenv("HUAWEICLOUD_SDK_SK");
    securityTokenStr = getenv("HUAWEICLOUD_SDK_SECURITY_TOKEN");
    projectIdStr = getenv("HUAWEICLOUD_SDK_PROJECT_ID");
    domainIdStr = getenv("HUAWEICLOUD_SDK_DOMAIN_ID");
    typeStr = getenv("HUAWEICLOUD_SDK_TYPE");

#elif defined(linux) || defined(__linux) || defined(__linux__)

    char *envVar;

#define INIT_ENV_VAR(ID, NAME)               \
    do {                                     \
        if (envVar = secure_getenv(#NAME)) { \
            ID = std::string(envVar);        \
        }                                    \
    } while (0)

    INIT_ENV_VAR(akStr, HUAWEICLOUD_SDK_AK);
    INIT_ENV_VAR(skStr, HUAWEICLOUD_SDK_SK);
    INIT_ENV_VAR(securityTokenStr, HUAWEICLOUD_SDK_SECURITY_TOKEN);
    INIT_ENV_VAR(projectIdStr, HUAWEICLOUD_SDK_PROJECT_ID);
    INIT_ENV_VAR(domainIdStr, HUAWEICLOUD_SDK_DOMAIN_ID);
    INIT_ENV_VAR(typeStr, HUAWEICLOUD_SDK_TYPE);

#undef INIT_ENV_VAR

#endif
    if (typeStr == "GlobalCredentials" || defaultType == "GlobalCredentials") {
        return std::make_unique<GlobalCredentials>(akStr, skStr, securityTokenStr, domainIdStr);
    } else {
        return std::make_unique<BasicCredentials>(akStr, skStr, securityTokenStr, projectIdStr);
    }
}

template <typename T> class HUAWEICLOUD_CORE_EXPORT ClientBuilder {
    static_assert(std::is_base_of<Client, T>::value, "Type parameter of ClientBuilder should be subtype of Client");

public:
    explicit ClientBuilder(std::string defaultType)
        : defaultType_(std::move(defaultType))
    {}

    ClientBuilder(ClientBuilder &&that) = default;

    ClientBuilder& operator= (ClientBuilder &&that) noexcept = default;

    ClientBuilder &withHttpConfig(const HttpConfig &httpConfig)
    {
        httpConfig_ = std::make_unique<HttpConfig>(httpConfig);
        return *this;
    }

    ClientBuilder &withCredentials(std::unique_ptr<Credentials> credentials)
    {
        if (credentials != nullptr) {
            credentials_ = std::move(credentials);
        }
        return *this;
    }

    ClientBuilder &withEndPoint(std::string endPoint)
    {
        endPoint_ = std::move(endPoint);
        return *this;
    }

    ClientBuilder &withStreamLog(bool streamLog)
    {
        streamLog_ = streamLog;
        return *this;
    }

    ClientBuilder &withFileLog(std::string filePath, bool fileLog)
    {
        filePath_ = std::move(filePath);
        fileLog_ = fileLog;
        return *this;
    }

    ClientBuilder &withRegion(const Region& region)
    {
        region_ = std::move(region);
        return *this;
    }

    std::unique_ptr<T> build()
    {
        auto client = std::make_unique<T>();
        if (credentials_ == nullptr) {
            client->setCredentials(getCredentialFromSystem(defaultType_));
        } else {
            client->setCredentials(std::move(credentials_));
        }
        if (client->isCredentialsEmpty()) {
            throw SdkException("credential can not be null, Credential objects are required");
        }
        if (!httpConfig_) {
            HttpConfig httpConfig = HttpConfig();
            client->setHttpConfig(httpConfig);
        } else {
            client->setHttpConfig(*std::move(httpConfig_));
        }
        client->setFileLog(std::move(filePath_), fileLog_);
        client->setStreamLog(streamLog_);
        client->setEndPoint(endPoint_);
        if (region_.getRegionId() != "" && region_.getEndpoint() != "") {
            client->setRegion(region_);
            client->processRegionAuth();
        }
        fileLog_ = false;
        streamLog_ = false;
        return client;
    }

private:
    std::unique_ptr<Credentials> credentials_;
    std::unique_ptr<HttpConfig> httpConfig_;
    Region region_;
    bool streamLog_ = false;
    std::string endPoint_;
    std::string filePath_;
    bool fileLog_ = false;
    std::string defaultType_;
};
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_CLIENTBUILDER_H