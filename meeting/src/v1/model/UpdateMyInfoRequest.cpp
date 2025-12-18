

#include "huaweicloud/meeting/v1/model/UpdateMyInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateMyInfoRequest::UpdateMyInfoRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMyInfoRequest::~UpdateMyInfoRequest() = default;

void UpdateMyInfoRequest::validate()
{
}

web::json::value UpdateMyInfoRequest::toJson() const
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
bool UpdateMyInfoRequest::fromJson(const web::json::value& val)
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
            ModMemberDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMyInfoRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateMyInfoRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateMyInfoRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateMyInfoRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateMyInfoRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateMyInfoRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateMyInfoRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateMyInfoRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

ModMemberDTO UpdateMyInfoRequest::getBody() const
{
    return body_;
}

void UpdateMyInfoRequest::setBody(const ModMemberDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMyInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMyInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


