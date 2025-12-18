

#include "huaweicloud/meeting/v1/model/AddUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddUserRequest::AddUserRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddUserRequest::~AddUserRequest() = default;

void AddUserRequest::validate()
{
}

web::json::value AddUserRequest::toJson() const
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
bool AddUserRequest::fromJson(const web::json::value& val)
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
            AddUserDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddUserRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddUserRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddUserRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddUserRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddUserRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddUserRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddUserRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddUserRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AddUserDTO AddUserRequest::getBody() const
{
    return body_;
}

void AddUserRequest::setBody(const AddUserDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


