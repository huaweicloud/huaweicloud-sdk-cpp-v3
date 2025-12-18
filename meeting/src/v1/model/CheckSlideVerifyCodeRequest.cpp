

#include "huaweicloud/meeting/v1/model/CheckSlideVerifyCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckSlideVerifyCodeRequest::CheckSlideVerifyCodeRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CheckSlideVerifyCodeRequest::~CheckSlideVerifyCodeRequest() = default;

void CheckSlideVerifyCodeRequest::validate()
{
}

web::json::value CheckSlideVerifyCodeRequest::toJson() const
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
bool CheckSlideVerifyCodeRequest::fromJson(const web::json::value& val)
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
            SlideVerifyCodeCheckDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckSlideVerifyCodeRequest::getXRequestID() const
{
    return xRequestID_;
}

void CheckSlideVerifyCodeRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool CheckSlideVerifyCodeRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void CheckSlideVerifyCodeRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string CheckSlideVerifyCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void CheckSlideVerifyCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool CheckSlideVerifyCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void CheckSlideVerifyCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

SlideVerifyCodeCheckDTO CheckSlideVerifyCodeRequest::getBody() const
{
    return body_;
}

void CheckSlideVerifyCodeRequest::setBody(const SlideVerifyCodeCheckDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckSlideVerifyCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckSlideVerifyCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


