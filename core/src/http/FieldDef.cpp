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

#include <huaweicloud/core/http/FieldDef.h>

using namespace HuaweiCloud::Sdk::Core::Http;

FieldDef::FieldDef() = default;

FieldDef::~FieldDef() = default;

FieldDef::FieldDef(const FieldDef &def) : name(def.name), locationType(def.locationType), JsonTag(def.JsonTag) {}

FieldDef& FieldDef::withLocationType(LocationType locationType)  {
    this->locationType = locationType;
    return *this;
}

FieldDef& FieldDef::withName(std::string name) {
    this->name = name;
    return *this;
}

FieldDef& FieldDef::withJsonTag(std::string jsonTag) {
    this->JsonTag = jsonTag;
    return *this;
}

FieldDef& FieldDef::withKindName(std::string kindName) {
    return *this;
}

LocationType FieldDef::getLocationType() {
    return this->locationType;
}

const std::string &FieldDef::getName() const {
    return name;
}

const std::string &FieldDef::getJsonTag() const {
    return JsonTag;
}

