

#include "huaweicloud/meeting/v1/model/SetSsoConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetSsoConfigRequest::SetSsoConfigRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetSsoConfigRequest::~SetSsoConfigRequest() = default;

void SetSsoConfigRequest::validate()
{
}

web::json::value SetSsoConfigRequest::toJson() const
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
bool SetSsoConfigRequest::fromJson(const web::json::value& val)
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
            AuthorizeConfigInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSsoConfigRequest::getXRequestId() const
{
    return xRequestId_;
}

void SetSsoConfigRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetSsoConfigRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetSsoConfigRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SetSsoConfigRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SetSsoConfigRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SetSsoConfigRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SetSsoConfigRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AuthorizeConfigInfoRequestBody SetSsoConfigRequest::getBody() const
{
    return body_;
}

void SetSsoConfigRequest::setBody(const AuthorizeConfigInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSsoConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSsoConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


