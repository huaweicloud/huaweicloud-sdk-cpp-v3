

#include "huaweicloud/meeting/v1/model/CheckVerifyCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckVerifyCodeRequest::CheckVerifyCodeRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckVerifyCodeRequest::~CheckVerifyCodeRequest() = default;

void CheckVerifyCodeRequest::validate()
{
}

web::json::value CheckVerifyCodeRequest::toJson() const
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
bool CheckVerifyCodeRequest::fromJson(const web::json::value& val)
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
            VerifyCodeCheckDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckVerifyCodeRequest::getXRequestID() const
{
    return xRequestID_;
}

void CheckVerifyCodeRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool CheckVerifyCodeRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void CheckVerifyCodeRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string CheckVerifyCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void CheckVerifyCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool CheckVerifyCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void CheckVerifyCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

VerifyCodeCheckDTO CheckVerifyCodeRequest::getBody() const
{
    return body_;
}

void CheckVerifyCodeRequest::setBody(const VerifyCodeCheckDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckVerifyCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckVerifyCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


