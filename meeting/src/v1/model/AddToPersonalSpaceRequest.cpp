

#include "huaweicloud/meeting/v1/model/AddToPersonalSpaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddToPersonalSpaceRequest::AddToPersonalSpaceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddToPersonalSpaceRequest::~AddToPersonalSpaceRequest() = default;

void AddToPersonalSpaceRequest::validate()
{
}

web::json::value AddToPersonalSpaceRequest::toJson() const
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
bool AddToPersonalSpaceRequest::fromJson(const web::json::value& val)
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
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddToPersonalSpaceRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddToPersonalSpaceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddToPersonalSpaceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddToPersonalSpaceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddToPersonalSpaceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddToPersonalSpaceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddToPersonalSpaceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddToPersonalSpaceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::map<std::string, std::string>& AddToPersonalSpaceRequest::getBody()
{
    return body_;
}

void AddToPersonalSpaceRequest::setBody(const std::map<std::string, std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddToPersonalSpaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddToPersonalSpaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


