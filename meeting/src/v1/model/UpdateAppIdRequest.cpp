

#include "huaweicloud/meeting/v1/model/UpdateAppIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateAppIdRequest::UpdateAppIdRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAppIdRequest::~UpdateAppIdRequest() = default;

void UpdateAppIdRequest::validate()
{
}

web::json::value UpdateAppIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAppIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAppIdRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAppIdRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateAppIdRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateAppIdRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateAppIdRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateAppIdRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateAppIdRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateAppIdRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateAppIdRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateAppIdRequest::getAppId() const
{
    return appId_;
}

void UpdateAppIdRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateAppIdRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateAppIdRequest::unsetappId()
{
    appIdIsSet_ = false;
}

UpdateAppIdRequestBody UpdateAppIdRequest::getBody() const
{
    return body_;
}

void UpdateAppIdRequest::setBody(const UpdateAppIdRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAppIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAppIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


