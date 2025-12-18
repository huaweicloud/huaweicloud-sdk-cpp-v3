

#include "huaweicloud/meeting/v1/model/SendVeriCodeForChangePwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SendVeriCodeForChangePwdRequest::SendVeriCodeForChangePwdRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SendVeriCodeForChangePwdRequest::~SendVeriCodeForChangePwdRequest() = default;

void SendVeriCodeForChangePwdRequest::validate()
{
}

web::json::value SendVeriCodeForChangePwdRequest::toJson() const
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
bool SendVeriCodeForChangePwdRequest::fromJson(const web::json::value& val)
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
            VerifyCodeSendDTOV1 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SendVeriCodeForChangePwdRequest::getXRequestID() const
{
    return xRequestID_;
}

void SendVeriCodeForChangePwdRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool SendVeriCodeForChangePwdRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void SendVeriCodeForChangePwdRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string SendVeriCodeForChangePwdRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SendVeriCodeForChangePwdRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SendVeriCodeForChangePwdRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SendVeriCodeForChangePwdRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

VerifyCodeSendDTOV1 SendVeriCodeForChangePwdRequest::getBody() const
{
    return body_;
}

void SendVeriCodeForChangePwdRequest::setBody(const VerifyCodeSendDTOV1& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SendVeriCodeForChangePwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SendVeriCodeForChangePwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


