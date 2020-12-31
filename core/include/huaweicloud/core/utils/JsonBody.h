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
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2018 SmartBear Software
 */

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_JsonBody_H_
#define HUAWEICLOUD_SDK_CORE_UTILS_JsonBody_H_

#include "huaweicloud/core/utils/IHttpBody.h"
#include <huaweicloud/core/CoreExport.h>

#include <cpprest/json.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
class HUAWEICLOUD_CORE_EXPORT JsonBody : public IHttpBody {
public:
    explicit JsonBody(web::json::value value);
    virtual ~JsonBody();

    void writeTo(std::ostream &target) override;

protected:
    web::json::value json_;
};
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_JsonBody_H_