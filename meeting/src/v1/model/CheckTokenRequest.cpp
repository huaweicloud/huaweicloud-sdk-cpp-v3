

#include "huaweicloud/meeting/v1/model/CheckTokenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckTokenRequest::CheckTokenRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckTokenRequest::~CheckTokenRequest() = default;

void CheckTokenRequest::validate()
{
}

web::json::value CheckTokenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIDIsSet_) {
        val[utility::conversions::to_string_t("X-Request-ID")] = ModelBase::toJson(xRequestID_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckTokenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ValidateTokenReqDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckTokenRequest::getXRequestID() const
{
    return xRequestID_;
}

void CheckTokenRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool CheckTokenRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void CheckTokenRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string CheckTokenRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void CheckTokenRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool CheckTokenRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void CheckTokenRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

ValidateTokenReqDTO CheckTokenRequest::getBody() const
{
    return body_;
}

void CheckTokenRequest::setBody(const ValidateTokenReqDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckTokenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckTokenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


