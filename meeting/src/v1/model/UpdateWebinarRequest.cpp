

#include "huaweicloud/meeting/v1/model/UpdateWebinarRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateWebinarRequest::UpdateWebinarRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWebinarRequest::~UpdateWebinarRequest() = default;

void UpdateWebinarRequest::validate()
{
}

web::json::value UpdateWebinarRequest::toJson() const
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
bool UpdateWebinarRequest::fromJson(const web::json::value& val)
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
            OpenEditConfReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWebinarRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateWebinarRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateWebinarRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateWebinarRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateWebinarRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateWebinarRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateWebinarRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateWebinarRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

OpenEditConfReq UpdateWebinarRequest::getBody() const
{
    return body_;
}

void UpdateWebinarRequest::setBody(const OpenEditConfReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWebinarRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWebinarRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


