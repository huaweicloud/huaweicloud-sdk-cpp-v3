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
#ifndef HUAWEICLOUD_SDK_CORE_AUTH_REGION_H
#define HUAWEICLOUD_SDK_CORE_AUTH_REGION_H

#include <string>
#include <vector>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Auth {
class HUAWEICLOUD_CORE_EXPORT Region {
public:
    Region() = default;
    virtual ~Region() = default;

    Region(const Region& region);
    Region(std::string regionId, std::string endpoint);
    Region(std::string regionId, std::initializer_list<std::string> endpoints);
   
    Region& withRegionId(std::string regionId);
    Region& withEndpoint(std::string endpoint);
    Region& withEndpoints(std::vector<std::string> endpoints);

    const std::string getEndpoint() const;
    const std::string getRegionId() const;

    std::vector<std::string> getEndpoints() const;
private:
    std::string regionId_;
    std::vector<std::string> endpoints_;
};
}
}
}
}
#endif //HUAWEICLOUD_CPP_SDK_V3_REGION_H
