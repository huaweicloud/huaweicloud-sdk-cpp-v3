

#include "huaweicloud/meeting/v1/model/BatchSearchAppIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchSearchAppIdRequest::BatchSearchAppIdRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

BatchSearchAppIdRequest::~BatchSearchAppIdRequest() = default;

void BatchSearchAppIdRequest::validate()
{
}

web::json::value BatchSearchAppIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool BatchSearchAppIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
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
    return ok;
}


std::string BatchSearchAppIdRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchSearchAppIdRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchSearchAppIdRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchSearchAppIdRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchSearchAppIdRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchSearchAppIdRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchSearchAppIdRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchSearchAppIdRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t BatchSearchAppIdRequest::getOffset() const
{
    return offset_;
}

void BatchSearchAppIdRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BatchSearchAppIdRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void BatchSearchAppIdRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BatchSearchAppIdRequest::getLimit() const
{
    return limit_;
}

void BatchSearchAppIdRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BatchSearchAppIdRequest::limitIsSet() const
{
    return limitIsSet_;
}

void BatchSearchAppIdRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


