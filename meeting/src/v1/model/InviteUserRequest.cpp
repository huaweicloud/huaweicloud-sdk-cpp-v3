

#include "huaweicloud/meeting/v1/model/InviteUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InviteUserRequest::InviteUserRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

InviteUserRequest::~InviteUserRequest() = default;

void InviteUserRequest::validate()
{
}

web::json::value InviteUserRequest::toJson() const
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
bool InviteUserRequest::fromJson(const web::json::value& val)
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
            AddUserRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InviteUserRequest::getXRequestId() const
{
    return xRequestId_;
}

void InviteUserRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool InviteUserRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void InviteUserRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string InviteUserRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void InviteUserRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool InviteUserRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void InviteUserRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

AddUserRequestBody InviteUserRequest::getBody() const
{
    return body_;
}

void InviteUserRequest::setBody(const AddUserRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InviteUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InviteUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


