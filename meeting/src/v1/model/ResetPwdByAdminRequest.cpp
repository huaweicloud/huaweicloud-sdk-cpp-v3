

#include "huaweicloud/meeting/v1/model/ResetPwdByAdminRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetPwdByAdminRequest::ResetPwdByAdminRequest()
{
    xRequestID_ = "";
    xRequestIDIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ResetPwdByAdminRequest::~ResetPwdByAdminRequest() = default;

void ResetPwdByAdminRequest::validate()
{
}

web::json::value ResetPwdByAdminRequest::toJson() const
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
bool ResetPwdByAdminRequest::fromJson(const web::json::value& val)
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
            AdminResetPwdReqDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetPwdByAdminRequest::getXRequestID() const
{
    return xRequestID_;
}

void ResetPwdByAdminRequest::setXRequestID(const std::string& value)
{
    xRequestID_ = value;
    xRequestIDIsSet_ = true;
}

bool ResetPwdByAdminRequest::xRequestIDIsSet() const
{
    return xRequestIDIsSet_;
}

void ResetPwdByAdminRequest::unsetxRequestID()
{
    xRequestIDIsSet_ = false;
}

std::string ResetPwdByAdminRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ResetPwdByAdminRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ResetPwdByAdminRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ResetPwdByAdminRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AdminResetPwdReqDTO ResetPwdByAdminRequest::getBody() const
{
    return body_;
}

void ResetPwdByAdminRequest::setBody(const AdminResetPwdReqDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetPwdByAdminRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetPwdByAdminRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


