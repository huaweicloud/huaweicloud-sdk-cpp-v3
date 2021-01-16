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
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2018 SmartBear Software
 */

#include <huaweicloud/core/utils/Object.h>

using namespace HuaweiCloud::Sdk::Core::Utils;

Object::Object()
{
    object_ = web::json::value::object();
}

Object::~Object() = default;

void Object::validate() {}

web::json::value Object::toJson() const
{
    return object_;
}

bool Object::fromJson(const web::json::value &val)
{
    if (val.is_object()) {
        object_ = val;
        isSet_ = true;
    }
    return isSet();
}

web::json::value Object::getValue(const utility::string_t &key) const
{
    return object_.at(key);
}


void Object::setValue(const utility::string_t &key, const web::json::value &value)
{
    if (!value.is_null()) {
        object_[key] = value;
        isSet_ = true;
    }
}