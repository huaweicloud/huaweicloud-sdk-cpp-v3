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


#include <huaweicloud/core/http/HttpConfig.h>

using namespace HuaweiCloud::Sdk::Core::Http;

const std::string &HttpConfig::getProxyProtocol() const
{
    return proxyProtocol_;
}

void HttpConfig::setProxyProtocol(const std::string &proxyProtocol)
{
    proxyProtocol_ = proxyProtocol;
}

const std::string &HttpConfig::getProxyHost() const
{
    return proxyHost_;
}

void HttpConfig::setProxyHost(const std::string &proxyHost)
{
    proxyHost_ = proxyHost;
}

const std::string &HttpConfig::getProxyPort() const
{
    return proxyPort_;
}

void HttpConfig::setProxyPort(const std::string &proxyPort)
{
    proxyPort_ = proxyPort;
}

const std::string &HttpConfig::getProxyUser() const
{
    return proxyUser_;
}

void HttpConfig::setProxyUser(const std::string &proxyUser)
{
    proxyUser_ = proxyUser;
}

const std::string &HttpConfig::getProxyPassword() const
{
    return proxyPassword_;
}

void HttpConfig::setProxyPassword(const std::string &proxyPassword)
{
    proxyPassword_ = proxyPassword;
}

bool HttpConfig::isIgnoreSslVerification() const
{
    return ignoreSslVerification_;
}

void HttpConfig::setIgnoreSslVerification(bool ignoreSslVerification)
{
    ignoreSslVerification_ = ignoreSslVerification;
}

const std::string &HttpConfig::getSslCaCert() const
{
    return sslCaCert_;
}

void HttpConfig::setSslCaCert(const std::string &sslCaCert)
{
    sslCaCert_ = sslCaCert;
}

const std::string &HttpConfig::getCertFile() const
{
    return certFile_;
}

void HttpConfig::setCertFile(const std::string &certFile)
{
    certFile_ = certFile;
}

const std::string &HttpConfig::getKeyFile() const
{
    return keyFile_;
}

void HttpConfig::setKeyFile(const std::string &keyFile)
{
    keyFile_ = keyFile;
}

int HttpConfig::getReadTimeout() const
{
    return readTimeout_;
}

void HttpConfig::setReadTimeout(int readTimeout)
{
    readTimeout_ = readTimeout;
}

int HttpConfig::getConnectTimeout() const
{
    return connectTimeout_;
}

void HttpConfig::setConnectTimeout(int connectTimeout)
{
    connectTimeout_ = connectTimeout;
}

int HttpConfig::getPoolConnections() const
{
    return poolConnections_;
}

void HttpConfig::setPoolConnections(int poolConnections)
{
    poolConnections_ = poolConnections;
}

int HttpConfig::getPoolMaxsize() const
{
    return poolMaxsize_;
}

void HttpConfig::setPoolMaxsize(int poolMaxsize)
{
    poolMaxsize_ = poolMaxsize;
}
