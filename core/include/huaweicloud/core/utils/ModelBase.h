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

#ifndef HUAWEICLOUD_SDK_CORE_UTILS_ModelBase_H_
#define HUAWEICLOUD_SDK_CORE_UTILS_ModelBase_H_

#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/core/utils/MultipartFormData.h>

#include <cpprest/details/basic_types.h>
#include <cpprest/json.h>

#include <map>
#include <vector>
#include <huaweicloud/core/CoreExport.h>

#if defined(HUAWEICLOUD_SDK_BSON_)
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

using namespace HuaweiCloud::Sdk::Core::Bson;
#endif

namespace HuaweiCloud {
namespace Sdk {
namespace Core {
namespace Utils {
class HUAWEICLOUD_CORE_EXPORT ModelBase {
public:
    ModelBase();
    virtual ~ModelBase();

    virtual void validate() = 0;

    virtual web::json::value toJson() const;
    virtual bool fromJson(const web::json::value &json);

    // virtual void toMultipart( std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix )
    // const = 0; virtual bool fromMultiPart( std::shared_ptr<MultipartFormData> multipart, const utility::string_t&
    // namePrefix ) = 0;

    virtual bool isSet() const;

    static utility::string_t toString(bool val);
    static utility::string_t toString(float val);
    static utility::string_t toString(double val);
    static utility::string_t toString(int32_t val);
    static utility::string_t toString(int64_t val);
    static utility::string_t toString(const utility::string_t &val);
    static utility::string_t toString(const utility::datetime &val);
    static utility::string_t toString(const web::json::value &val);
    static utility::string_t toString(const std::shared_ptr<HttpContent> &val);
    template <typename T> static utility::string_t toString(const std::shared_ptr<T> &val);
    template <typename T> static utility::string_t toString(const std::vector<T> &val);

    static web::json::value toJson(bool val);
    static web::json::value toJson(float val);
    static web::json::value toJson(double val);
    static web::json::value toJson(int32_t val);
    static web::json::value toJson(int64_t val);
    static web::json::value toJson(const std::string &val);

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    static web::json::value toJson(const utility::string_t &val);
#endif
    static web::json::value toJson(const utility::datetime &val);
    static web::json::value toJson(const web::json::value &val);
    static web::json::value toJson(const std::shared_ptr<HttpContent> &val);
    template <typename T> static web::json::value toJson(const std::shared_ptr<T> &val);
    template <typename T> static web::json::value toJson(const T &val);
    template <typename T> static web::json::value toJson(const std::vector<T> &val);
    template <typename T> static web::json::value toJson(const std::map<std::string, T> &val);
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    template <typename T> static web::json::value toJson(const std::map<utility::string_t, T> &val);
#endif

    static bool fromString(const utility::string_t &val, bool &);
    static bool fromString(const utility::string_t &val, float &);
    static bool fromString(const utility::string_t &val, double &);
    static bool fromString(const utility::string_t &val, int32_t &);
    static bool fromString(const utility::string_t &val, int64_t &);
    static bool fromString(const utility::string_t &val, utility::string_t &);
    static bool fromString(const utility::string_t &val, utility::datetime &);
    static bool fromString(const utility::string_t &val, web::json::value &);
    static bool fromString(const utility::string_t &val, std::shared_ptr<HttpContent> &);
    template <typename T> static bool fromString(const utility::string_t &val, std::shared_ptr<T> &);
    template <typename T> static bool fromString(const utility::string_t &val, std::vector<T> &);
    template <typename T> static bool fromString(const utility::string_t &val, std::map<utility::string_t, T> &);

    static bool fromJson(const web::json::value &val, bool &);
    static bool fromJson(const web::json::value &val, float &);
    static bool fromJson(const web::json::value &val, double &);
    static bool fromJson(const web::json::value &val, int32_t &);
    static bool fromJson(const web::json::value &val, int64_t &);
    static bool fromJson(const web::json::value &val, std::string &);
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    static bool fromJson(const web::json::value &val, utility::string_t &);
#endif
    static bool fromJson(const web::json::value &val, utility::datetime &);
    static bool fromJson(const web::json::value &val, web::json::value &);
    static bool fromJson(const web::json::value &val, std::shared_ptr<HttpContent> &);
    template <typename T> static bool fromJson(const web::json::value &val, std::shared_ptr<T> &);
    template <typename T> static bool fromJson(const web::json::value &val, T &);
    template <typename T> static bool fromJson(const web::json::value &val, std::vector<T> &);
    template <typename T> static bool fromJson(const web::json::value &val, std::map<std::string, T> &);
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    template <typename T> static bool fromJson(const web::json::value &val, std::map<utility::string_t, T> &);
#endif
#if defined(HUAWEICLOUD_SDK_BSON_)
#define BSON_METHOD_DECL(TYPE)                                     \
    static bool bson_get(const Viewer::Iterator &it, TYPE &value); \
    static bool bson_append(Builder &builder, const TYPE &value);  \
    static bool bson_append(Builder &builder, const std::string &key, const TYPE &value);

    BSON_METHOD_DECL(double)
    BSON_METHOD_DECL(BsonDouble)
    BSON_METHOD_DECL(std::string)
    BSON_METHOD_DECL(BsonString)
    BSON_METHOD_DECL(Document)
    BSON_METHOD_DECL(BsonDocument)
    BSON_METHOD_DECL(Array)
    BSON_METHOD_DECL(BsonArray)
    BSON_METHOD_DECL(BsonBinary)
    BSON_METHOD_DECL(BsonUndefined)
    BSON_METHOD_DECL(Oid)
    BSON_METHOD_DECL(BsonOid)
    BSON_METHOD_DECL(bool)
    BSON_METHOD_DECL(BsonBool)
    BSON_METHOD_DECL(std::chrono::milliseconds)
    BSON_METHOD_DECL(BsonDate)
    BSON_METHOD_DECL(BsonNull)
    BSON_METHOD_DECL(BsonRegex)
    BSON_METHOD_DECL(BsonDBPointer)
    BSON_METHOD_DECL(BsonCode)
    BSON_METHOD_DECL(BsonSymbol)
    BSON_METHOD_DECL(BsonCodeWScope)
    BSON_METHOD_DECL(int32_t)
    BSON_METHOD_DECL(BsonInt32)
    BSON_METHOD_DECL(BsonTimestamp)
    BSON_METHOD_DECL(int64_t)
    BSON_METHOD_DECL(BsonInt64)
    BSON_METHOD_DECL(Decimal128)
    BSON_METHOD_DECL(BsonDecimal128)
    BSON_METHOD_DECL(BsonMinKey)
    BSON_METHOD_DECL(BsonMaxKey)

    static bool bson_get(const Viewer::Iterator &it, ModelBase &value);
    static bool bson_append(Builder &builder, const ModelBase &value);
    static bool bson_append(Builder &builder, const std::string &key, const ModelBase &value);

    template<typename T>
    static bool bson_get(const Viewer::Iterator &it, std::vector<T> &value);

    template<typename T>
    static bool bson_get(const Viewer::Iterator &it, std::map<std::string, T> &value);

    template<typename T>
    static bool bson_append(Builder &builder, const std::vector<T> &value);

    template<typename T>
    static bool bson_append(Builder &builder, const std::string &key, const std::vector<T> &value);

    template<typename T>
    static bool bson_append(Builder &builder, const std::map<std::string, T> &value);

    template<typename T>
    static bool bson_append(Builder &builder, const std::string &key, const std::map<std::string, T> &value);

    virtual bool toBson(Builder &builder) const = 0;
    virtual bool fromBson(const Viewer &viewer) = 0;
#endif
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, bool value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, float value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, double value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, int32_t value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, int64_t value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, const utility::string_t &value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, const utility::datetime &value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, const web::json::value &value,
        const utility::string_t &contentType = utility::conversions::to_string_t("application/json"));
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name,
        const std::shared_ptr<HttpContent> &);
    template <typename T>
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, const std::shared_ptr<T> &,
        const utility::string_t &contentType = utility::conversions::to_string_t("application/json"));
    template <typename T>
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name, const std::vector<T> &value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));
    template <typename T>
    static std::shared_ptr<HttpContent> toHttpContent(const utility::string_t &name,
        const std::map<utility::string_t, T> &value,
        const utility::string_t &contentType = utility::conversions::to_string_t(""));

    static bool fromHttpContent(std::shared_ptr<HttpContent> val, bool &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, float &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, double &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, int64_t &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, int32_t &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, utility::string_t &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, utility::datetime &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, web::json::value &);
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, std::shared_ptr<HttpContent> &);
    template <typename T> static bool fromHttpContent(std::shared_ptr<HttpContent> val, std::shared_ptr<T> &);
    template <typename T> static bool fromHttpContent(std::shared_ptr<HttpContent> val, std::vector<T> &);
    template <typename T>
    static bool fromHttpContent(std::shared_ptr<HttpContent> val, std::map<utility::string_t, T> &);

    static utility::string_t toBase64(utility::string_t value);
    static utility::string_t toBase64(std::shared_ptr<std::istream> value);
    static std::shared_ptr<std::istream> fromBase64(const utility::string_t &encoded);

protected:
    bool isSet_;
};

template <typename T> utility::string_t ModelBase::toString(const std::shared_ptr<T> &val)
{
    utility::stringstream_t ss;
    if (val != nullptr) {
        val->toJson().serialize(ss);
    }
    return utility::string_t(ss.str());
}
template <typename T> utility::string_t ModelBase::toString(const std::vector<T> &val)
{
    utility::string_t strArray;
    for (const auto &item : val) {
        strArray.append(toString(item) + ",");
    }
    if (val.count() > 0) {
        strArray.pop_back();
    }
    return strArray;
}
template <typename T> web::json::value ModelBase::toJson(const std::shared_ptr<T> &val)
{
    web::json::value retVal;
    if (val != nullptr) {
        retVal = val->toJson();
    }
    return retVal;
}
template <typename T> web::json::value ModelBase::toJson(const T &val)
{
    web::json::value retVal;
    retVal = val.toJson();
    return retVal;
}

template <typename T> web::json::value ModelBase::toJson(const std::vector<T> &value)
{
    std::vector<web::json::value> ret;
    for (const auto &x : value) {
        ret.push_back(toJson(x));
    }
    return web::json::value::array(ret);
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
template <typename T> web::json::value ModelBase::toJson(const std::map<utility::string_t, T> &val)
{
    web::json::value obj;
    for (const auto &itemkey : val) {
        obj[itemkey.first] = toJson(itemkey.second);
    }
    return obj;
}
#endif
template <typename T> web::json::value ModelBase::toJson(const std::map<std::string, T> &val)
{
    web::json::value obj;
    for (const auto &itemkey : val) {
        obj[utility::conversions::to_string_t(itemkey.first)] = toJson(itemkey.second);
    }
    return obj;
}
template <typename T> bool ModelBase::fromString(const utility::string_t &val, std::shared_ptr<T> &outVal)
{
    bool ok = false;
    if (outVal == nullptr) {
        outVal = std::shared_ptr<T>(new T());
    }
    if (outVal != nullptr) {
        ok = outVal->fromJson(web::json::value::parse(val));
    }
    return ok;
}
template <typename T> bool ModelBase::fromJson(const web::json::value &val, std::shared_ptr<T> &outVal)
{
    bool ok = false;
    if (outVal == nullptr) {
        outVal = std::shared_ptr<T>(new T());
    }
    if (outVal != nullptr) {
        ok = outVal->fromJson(val);
    }
    return ok;
}
template <typename T> bool ModelBase::fromJson(const web::json::value &val, T &outVal)
{
    bool ok = false;
    ok = outVal.fromJson(val);
    return ok;
}
template <typename T> bool ModelBase::fromJson(const web::json::value &val, std::vector<T> &outVal)
{
    bool ok = true;
    if (val.is_array()) {
        for (const auto &jitem : val.as_array()) {
            T item;
            ok &= fromJson(jitem, item);
            outVal.push_back(item);
        }
    } else {
        ok = false;
    }
    return ok;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
template <typename T> bool ModelBase::fromJson(const web::json::value &jval, std::map<utility::string_t, T> &outVal)
{
    bool ok = true;
    if (jval.is_object()) {
        auto obj = jval.as_object();
        for (auto objItr = obj.begin(); objItr != obj.end(); objItr++) {
            T itemVal;
            ok &= fromJson(objItr->second, itemVal);
            outVal.insert(std::pair<utility::string_t, T>(objItr->first, itemVal));
        }
    } else {
        ok = false;
    }
    return ok;
}
#endif
template <typename T> bool ModelBase::fromJson(const web::json::value &jval, std::map<std::string, T> &outVal)
{
    bool ok = true;
    if (jval.is_object()) {
        auto obj = jval.as_object();
        for (auto objItr = obj.begin(); objItr != obj.end(); objItr++) {
            T itemVal;
            ok &= fromJson(objItr->second, itemVal);
            outVal.insert(std::pair<std::string, T>(utility::conversions::to_utf8string(objItr->first), itemVal));
        }
    } else {
        ok = false;
    }
    return ok;
}

#if defined(HUAWEICLOUD_SDK_BSON_)

template<typename T>
bool ModelBase::bson_get(const Viewer::Iterator &it, std::vector<T> &value) {
    Array arr = it->getArray();
    Viewer arrViewer(arr);
    Viewer::Iterator arrIter = arrViewer.begin();
    while (arrIter != arrViewer.end()) {
        T tmp;
        bson_get(arrIter, tmp);
        value.push_back(tmp);
        ++arrIter;
    }
    return true;
}

template<typename T>
bool ModelBase::bson_get(const Viewer::Iterator &it, std::map<std::string, T> &value) {
    Document doc = it->getDocument();
    Viewer docViewer(doc);
    Viewer::Iterator docIter = docViewer.begin();
    while (docIter != docViewer.end()) {
        T tmp;
        bson_get(docIter, tmp);
        value[it->key()] = tmp;
        ++docIter;
    }
    return true;
}

template<typename T>
bool ModelBase::bson_append(Builder &builder, const std::vector<T> &value) {
    builder << Builder::SubArrayBegin;
    for (const auto &v: value) {
        if (!bson_append(builder, v)) {
            return false;
        }
    }
    builder << Builder::SubArrayEnd;
    return true;
}

template<typename T>
bool ModelBase::bson_append(Builder &builder, const std::string &key, const std::vector<T> &value) {
    builder << key << Builder::SubArrayBegin;
    for (const auto &v: value) {
        if (!bson_append(builder, v)) {
            return false;
        }
    }
    builder << Builder::SubArrayEnd;
    return true;
}

template<typename T>
bool ModelBase::bson_append(Builder &builder, const std::map<std::string, T> &value) {
    builder << Builder::SubDocumentBegin;
    for (const auto &p: value) {
        if (!bson_append(builder, p.first, p.second)) {
            return false;
        }
    }
    builder << Builder::SubDocumentEnd;
    return true;
}

template<typename T>
bool ModelBase::bson_append(Builder &builder, const std::string &key, const std::map<std::string, T> &value) {
    builder << key << Builder::SubDocumentBegin;
    for (const auto &p: value) {
        if (!bson_append(builder, p.first, p.second)) {
            return false;
        }
    }
    builder << Builder::SubDocumentEnd;
    return true;
}
#endif // HUAWEICLOUD_SDK_BSON_

template <typename T>
std::shared_ptr<HttpContent> ModelBase::toHttpContent(const utility::string_t &name, const std::shared_ptr<T> &value,
    const utility::string_t &contentType)
{
    std::shared_ptr<HttpContent> content(new HttpContent);
    if (value != nullptr) {
        content->setName(name);
        content->setContentDisposition(utility::conversions::to_string_t("form-data"));
        content->setContentType(contentType);
        content->setData(std::shared_ptr<std::istream>(
            new std::stringstream(utility::conversions::to_utf8string(value->toJson().serialize()))));
    }
    return content;
}
template <typename T>
std::shared_ptr<HttpContent> ModelBase::toHttpContent(const utility::string_t &name, const std::vector<T> &value,
    const utility::string_t &contentType)
{
    web::json::value json_array = ModelBase::toJson(value);
    std::shared_ptr<HttpContent> content(new HttpContent);
    content->setName(name);
    content->setContentDisposition(utility::conversions::to_string_t("form-data"));
    content->setContentType(contentType);
    content->setData(std::shared_ptr<std::istream>(
        new std::stringstream(utility::conversions::to_utf8string(json_array.serialize()))));
    return content;
}
template <typename T>
std::shared_ptr<HttpContent> ModelBase::toHttpContent(const utility::string_t &name,
    const std::map<utility::string_t, T> &value, const utility::string_t &contentType)
{
    web::json::value jobj = ModelBase::toJson(value);
    std::shared_ptr<HttpContent> content(new HttpContent);
    content->setName(name);
    content->setContentDisposition(utility::conversions::to_string_t("form-data"));
    content->setContentType(contentType);
    content->setData(
        std::shared_ptr<std::istream>(new std::stringstream(utility::conversions::to_utf8string(jobj.serialize()))));
    return content;
}
template <typename T> bool ModelBase::fromHttpContent(std::shared_ptr<HttpContent> val, std::shared_ptr<T> &outVal)
{
    utility::string_t str;
    if (val == nullptr)
        return false;
    if (outVal == nullptr) {
        outVal = std::shared_ptr<T>(new T());
    }
    ModelBase::fromHttpContent(val, str);
    return fromString(str, outVal);
}
template <typename T> bool ModelBase::fromHttpContent(std::shared_ptr<HttpContent> val, std::vector<T> &)
{
    return true;
}
template <typename T>
bool ModelBase::fromHttpContent(std::shared_ptr<HttpContent> val, std::map<utility::string_t, T> &)
{
    return true;
}
}
}
}
}
#endif // HUAWEICLOUD_SDK_CORE_UTILS_ModelBase_H_