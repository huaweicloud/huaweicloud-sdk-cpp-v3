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

#ifndef HUAWEICLOUD_SDK_CORE_AUTH_SIGNER_H
#define HUAWEICLOUD_SDK_CORE_AUTH_SIGNER_H
#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <ctime>
#include <huaweicloud/core/CoreExport.h>
#include <huaweicloud/core/utils/Header.h>
#include <huaweicloud/core/utils/Hasher.h>
#include <huaweicloud/core/RequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT Signer {
public:
    Signer();
    Signer(const std::string &appKey, const std::string &appSecret);
    ~Signer();

    /* Task 1: Get Canonicalized Request String */
    std::string getCanonicalRequest(const std::string &signedHeaders, const std::string &method, std::string uri,
        const std::string &query, const std::set<Header> &headers, const std::string &payload);

    std::string getCanonicalURI(std::string &uri);
    std::string getCanonicalQueryString(std::map<std::string, std::string> &queryParams);
    std::string getCanonicalQueryString(std::map<std::string, std::vector<std::string>> &queryParams);
    std::string getCanonicalQueryString(const std::string &queryParams);
    std::string getCanonicalHeaders(const std::set<Header> &headers);
    std::string getSignedHeaders(const std::set<Header> &headers);
    std::string getHexHash(const std::string &payload);

    /* Task 2:　Get String to Sign */
    std::string getStringToSign(const std::string &algorithm, const std::string &date,
        const std::string &canonicalRequest);

    /* Task 3: Calculate the Signature */
    std::string getSignature(const char *signingKey, const std::string &stringToSign);

    // One stroke create signature
    std::string createSignature(HuaweiCloud::Sdk::Core::RequestParams &request);

private:
    /* Credentials */
    std::string appKey_;
    std::string appSecret_;
    Hasher *hasher_;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_AUTH_SIGNER_H