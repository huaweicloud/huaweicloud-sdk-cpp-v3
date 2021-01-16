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

#ifndef HUAWEICLOUD_SDK_CORE_HTTP_HTTPCONFIG_H
#define HUAWEICLOUD_SDK_CORE_HTTP_HTTPCONFIG_H

#include <string>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Http {
class HUAWEICLOUD_CORE_EXPORT HttpConfig {
public:
    const std::string &getProxyProtocol() const;

    void setProxyProtocol(const std::string &proxyProtocol);

    const std::string &getProxyHost() const;

    void setProxyHost(const std::string &proxyHost);

    const std::string &getProxyPort() const;

    void setProxyPort(const std::string &proxyPort);

    const std::string &getProxyUser() const;

    void setProxyUser(const std::string &proxyUser);

    const std::string &getProxyPassword() const;

    void setProxyPassword(const std::string &proxyPassword);

    bool isIgnoreSslVerification() const;

    void setIgnoreSslVerification(bool ignoreSslVerification);

    const std::string &getSslCaCert() const;

    void setSslCaCert(const std::string &sslCaCert);

    const std::string &getCertFile() const;

    void setCertFile(const std::string &certFile);

    const std::string &getKeyFile() const;

    void setKeyFile(const std::string &keyFile);

    int getReadTimeout() const;

    void setReadTimeout(int readTimeout);

    int getConnectTimeout() const;

    void setConnectTimeout(int connectTimeout);

    int getPoolConnections() const;

    void setPoolConnections(int poolConnections);

    int getPoolMaxsize() const;

    void setPoolMaxsize(int poolMaxsize);

private:
    std::string proxyProtocol_;
    std::string proxyHost_;
    std::string proxyPort_;
    std::string proxyUser_;
    std::string proxyPassword_;

    bool ignoreSslVerification_ = false;
    std::string sslCaCert_;
    std::string certFile_;

    std::string keyFile_;
    int readTimeout_ = 100;
    int connectTimeout_ = 100;
    int poolConnections_ = 1;
    int poolMaxsize_ = 1;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_HTTP_HTTPCONFIG_H