

#include "huaweicloud/meeting/v1/model/UpdateContactRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateContactRequest::UpdateContactRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateContactRequest::~UpdateContactRequest() = default;

void UpdateContactRequest::validate()
{
}

web::json::value UpdateContactRequest::toJson() const
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
bool UpdateContactRequest::fromJson(const web::json::value& val)
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


std::string UpdateContactRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateContactRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateContactRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateContactRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateContactRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateContactRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateContactRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateContactRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

VerificationCodeDTO UpdateContactRequest::getBody() const
{
    return body_;
}

void UpdateContactRequest::setBody(const VerificationCodeDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateContactRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateContactRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


