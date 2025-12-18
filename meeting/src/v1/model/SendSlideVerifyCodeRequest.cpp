

#include "huaweicloud/meeting/v1/model/SendSlideVerifyCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SendSlideVerifyCodeRequest::SendSlideVerifyCodeRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SendSlideVerifyCodeRequest::~SendSlideVerifyCodeRequest() = default;

void SendSlideVerifyCodeRequest::validate()
{
}

web::json::value SendSlideVerifyCodeRequest::toJson() const
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
bool SendSlideVerifyCodeRequest::fromJson(const web::json::value& val)
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
            SlideVerifyCodeSendDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SendSlideVerifyCodeRequest::getXRequestID() const
{
    return xRequestID_;
}

void SendSlideVerifyCodeRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool SendSlideVerifyCodeRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void SendSlideVerifyCodeRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string SendSlideVerifyCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SendSlideVerifyCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SendSlideVerifyCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SendSlideVerifyCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

SlideVerifyCodeSendDTO SendSlideVerifyCodeRequest::getBody() const
{
    return body_;
}

void SendSlideVerifyCodeRequest::setBody(const SlideVerifyCodeSendDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SendSlideVerifyCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SendSlideVerifyCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


