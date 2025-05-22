

#include "huaweicloud/live/v1/model/ShowChannelStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowChannelStatisticRequest::ShowChannelStatisticRequest()
{
    accessControlAllowInternal_ = "";
    accessControlAllowInternalIsSet_ = false;
    accessControlAllowExternal_ = "";
    accessControlAllowExternalIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ShowChannelStatisticRequest::~ShowChannelStatisticRequest() = default;

void ShowChannelStatisticRequest::validate()
{
}

web::json::value ShowChannelStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessControlAllowInternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-Internal")] = ModelBase::toJson(accessControlAllowInternal_);
    }
    if(accessControlAllowExternalIsSet_) {
        val[utility::conversions::to_string_t("Access-Control-Allow-External")] = ModelBase::toJson(accessControlAllowExternal_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowChannelStatisticRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-Internal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-Internal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowInternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Access-Control-Allow-External"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Access-Control-Allow-External"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlAllowExternal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ShowChannelStatisticReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowChannelStatisticRequest::getAccessControlAllowInternal() const
{
    return accessControlAllowInternal_;
}

void ShowChannelStatisticRequest::setAccessControlAllowInternal(const std::string& value)
{
    accessControlAllowInternal_ = value;
    accessControlAllowInternalIsSet_ = true;
}

bool ShowChannelStatisticRequest::accessControlAllowInternalIsSet() const
{
    return accessControlAllowInternalIsSet_;
}

void ShowChannelStatisticRequest::unsetaccessControlAllowInternal()
{
    accessControlAllowInternalIsSet_ = false;
}

std::string ShowChannelStatisticRequest::getAccessControlAllowExternal() const
{
    return accessControlAllowExternal_;
}

void ShowChannelStatisticRequest::setAccessControlAllowExternal(const std::string& value)
{
    accessControlAllowExternal_ = value;
    accessControlAllowExternalIsSet_ = true;
}

bool ShowChannelStatisticRequest::accessControlAllowExternalIsSet() const
{
    return accessControlAllowExternalIsSet_;
}

void ShowChannelStatisticRequest::unsetaccessControlAllowExternal()
{
    accessControlAllowExternalIsSet_ = false;
}

int32_t ShowChannelStatisticRequest::getLimit() const
{
    return limit_;
}

void ShowChannelStatisticRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowChannelStatisticRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowChannelStatisticRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowChannelStatisticRequest::getOffset() const
{
    return offset_;
}

void ShowChannelStatisticRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowChannelStatisticRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowChannelStatisticRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

ShowChannelStatisticReq ShowChannelStatisticRequest::getBody() const
{
    return body_;
}

void ShowChannelStatisticRequest::setBody(const ShowChannelStatisticReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowChannelStatisticRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowChannelStatisticRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


