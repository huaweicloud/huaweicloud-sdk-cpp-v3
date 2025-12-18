

#include "huaweicloud/meeting/v1/model/ResetPwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetPwdRequest::ResetPwdRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ResetPwdRequest::~ResetPwdRequest() = default;

void ResetPwdRequest::validate()
{
}

web::json::value ResetPwdRequest::toJson() const
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
bool ResetPwdRequest::fromJson(const web::json::value& val)
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
            ResetPwdReqDTOV1 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetPwdRequest::getXRequestID() const
{
    return xRequestID_;
}

void ResetPwdRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool ResetPwdRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void ResetPwdRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string ResetPwdRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ResetPwdRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ResetPwdRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ResetPwdRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

ResetPwdReqDTOV1 ResetPwdRequest::getBody() const
{
    return body_;
}

void ResetPwdRequest::setBody(const ResetPwdReqDTOV1& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetPwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetPwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


