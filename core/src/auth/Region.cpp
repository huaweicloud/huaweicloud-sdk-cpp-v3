/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <huaweicloud/core/auth/Region.h>
using namespace HuaweiCloud::Sdk::Core::Auth;

Region::Region(std::string regionId, std::string endpoint) :regionId_(regionId) {
    this->endpoints_.emplace_back(endpoint);
}

Region::Region(const Region& region) :regionId_(region.getRegionId()), endpoints_(region.getEndpoints())
{}

Region::Region(std::string regionId, std::initializer_list<std::string> endpoints) {
    this->regionId_ = regionId;
    for (auto iter = endpoints.begin(); iter != endpoints.end(); iter++) {
        endpoints_.emplace_back(*iter);
    }
}

Region& Region::withRegionId(const std::string regionId) {
    this->regionId_ = regionId;
    return *this;
}

Region& Region::withEndpoint(const std::string endpoint) {
    if (this->endpoints_.empty()) {
        this->endpoints_.emplace_back(endpoint);
    } else {
        this->endpoints_[0] = endpoint;
    }
    return *this;
}

Region& Region::withEndpoints(std::vector<std::string> endpoints) {
    this->endpoints_ = endpoints;
    return *this;
}

const std::string Region::getRegionId() const {
    return this->regionId_;
}

const std::string Region::getEndpoint() const {
    return this->endpoints_.empty() ? "" : this->endpoints_.front();
}

std::vector<std::string> Region::getEndpoints() const {
    return this->endpoints_;
}