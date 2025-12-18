

#include "huaweicloud/meeting/v1/model/UpdatePwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdatePwdRequest::UpdatePwdRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePwdRequest::~UpdatePwdRequest() = default;

void UpdatePwdRequest::validate()
{
}

web::json::value UpdatePwdRequest::toJson() const
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
bool UpdatePwdRequest::fromJson(const web::json::value& val)
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
            ModPwdReqDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePwdRequest::getXRequestID() const
{
    return xRequestID_;
}

void UpdatePwdRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool UpdatePwdRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void UpdatePwdRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string UpdatePwdRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdatePwdRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdatePwdRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdatePwdRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

ModPwdReqDTO UpdatePwdRequest::getBody() const
{
    return body_;
}

void UpdatePwdRequest::setBody(const ModPwdReqDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


