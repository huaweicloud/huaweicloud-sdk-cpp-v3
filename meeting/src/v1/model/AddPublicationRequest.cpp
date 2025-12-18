

#include "huaweicloud/meeting/v1/model/AddPublicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddPublicationRequest::AddPublicationRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddPublicationRequest::~AddPublicationRequest() = default;

void AddPublicationRequest::validate()
{
}

web::json::value AddPublicationRequest::toJson() const
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
bool AddPublicationRequest::fromJson(const web::json::value& val)
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
            CreatePublicationRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddPublicationRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddPublicationRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddPublicationRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddPublicationRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddPublicationRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddPublicationRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddPublicationRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddPublicationRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

CreatePublicationRequestDTO AddPublicationRequest::getBody() const
{
    return body_;
}

void AddPublicationRequest::setBody(const CreatePublicationRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddPublicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddPublicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


