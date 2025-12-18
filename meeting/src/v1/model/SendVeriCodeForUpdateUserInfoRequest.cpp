

#include "huaweicloud/meeting/v1/model/SendVeriCodeForUpdateUserInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SendVeriCodeForUpdateUserInfoRequest::SendVeriCodeForUpdateUserInfoRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SendVeriCodeForUpdateUserInfoRequest::~SendVeriCodeForUpdateUserInfoRequest() = default;

void SendVeriCodeForUpdateUserInfoRequest::validate()
{
}

web::json::value SendVeriCodeForUpdateUserInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SendVeriCodeForUpdateUserInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VerificationCodeDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SendVeriCodeForUpdateUserInfoRequest::getXRequestId() const
{
    return xRequestId_;
}

void SendVeriCodeForUpdateUserInfoRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SendVeriCodeForUpdateUserInfoRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SendVeriCodeForUpdateUserInfoRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SendVeriCodeForUpdateUserInfoRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SendVeriCodeForUpdateUserInfoRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SendVeriCodeForUpdateUserInfoRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SendVeriCodeForUpdateUserInfoRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

VerificationCodeDTO SendVeriCodeForUpdateUserInfoRequest::getBody() const
{
    return body_;
}

void SendVeriCodeForUpdateUserInfoRequest::setBody(const VerificationCodeDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SendVeriCodeForUpdateUserInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SendVeriCodeForUpdateUserInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


