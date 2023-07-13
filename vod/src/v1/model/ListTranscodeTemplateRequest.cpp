

#include "huaweicloud/vod/v1/model/ListTranscodeTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTranscodeTemplateRequest::ListTranscodeTemplateRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    queryString_ = "";
    queryStringIsSet_ = false;
}

ListTranscodeTemplateRequest::~ListTranscodeTemplateRequest() = default;

void ListTranscodeTemplateRequest::validate()
{
}

web::json::value ListTranscodeTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(queryStringIsSet_) {
        val[utility::conversions::to_string_t("query_string")] = ModelBase::toJson(queryString_);
    }

    return val;
}

bool ListTranscodeTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryString(refVal);
        }
    }
    return ok;
}

std::string ListTranscodeTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTranscodeTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTranscodeTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTranscodeTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTranscodeTemplateRequest::getGroupId() const
{
    return groupId_;
}

void ListTranscodeTemplateRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListTranscodeTemplateRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListTranscodeTemplateRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

bool ListTranscodeTemplateRequest::isIsDefault() const
{
    return isDefault_;
}

void ListTranscodeTemplateRequest::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool ListTranscodeTemplateRequest::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void ListTranscodeTemplateRequest::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

int32_t ListTranscodeTemplateRequest::getOffset() const
{
    return offset_;
}

void ListTranscodeTemplateRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTranscodeTemplateRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTranscodeTemplateRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTranscodeTemplateRequest::getLimit() const
{
    return limit_;
}

void ListTranscodeTemplateRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTranscodeTemplateRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTranscodeTemplateRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTranscodeTemplateRequest::getQueryString() const
{
    return queryString_;
}

void ListTranscodeTemplateRequest::setQueryString(const std::string& value)
{
    queryString_ = value;
    queryStringIsSet_ = true;
}

bool ListTranscodeTemplateRequest::queryStringIsSet() const
{
    return queryStringIsSet_;
}

void ListTranscodeTemplateRequest::unsetqueryString()
{
    queryStringIsSet_ = false;
}

}
}
}
}
}


