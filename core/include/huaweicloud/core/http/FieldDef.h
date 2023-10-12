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

#ifndef HUAWEICLOUD_SDK_CORE_HTTP_FIELDDEF_H
#define HUAWEICLOUD_SDK_CORE_HTTP_FIELDDEF_H

#include <string>
#include <huaweicloud/core/CoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Http {

enum HUAWEICLOUD_CORE_EXPORT LocationType {
    Header_ = 1,
    Path_,
    Query_,
    Body_,
    Form_,
    Cname
};

class HUAWEICLOUD_CORE_EXPORT FieldDef {
private:
    LocationType locationType;
    std::string name;
    std::string JsonTag;
public:
    FieldDef();
    virtual ~FieldDef();

    FieldDef(const FieldDef& def);

    FieldDef(FieldDef&& def) = default;

    const std::string &getName() const;
    const std::string &getJsonTag() const;
    LocationType getLocationType();

    FieldDef& withName(std::string name);
    FieldDef& withLocationType(LocationType locationType);

    // set函数定义
    FieldDef& withJsonTag(std::string tag);
    FieldDef& withKindName(std::string kindName);

};

}
}
}
}
#endif //HUAWEICLOUD_SDK_CORE_HTTP_FIELDDEF_H
