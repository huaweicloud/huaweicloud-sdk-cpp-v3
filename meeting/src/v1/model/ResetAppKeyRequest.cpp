

#include "huaweicloud/meeting/v1/model/ResetAppKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ResetAppKeyRequest::ResetAppKeyRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ResetAppKeyRequest::~ResetAppKeyRequest() = default;

void ResetAppKeyRequest::validate()
{
}

web::json::value ResetAppKeyRequest::toJson() const
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

    return val;
}
bool ResetAppKeyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResetAppKeyRequest::getXRequestId() const
{
    return xRequestId_;
}

void ResetAppKeyRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ResetAppKeyRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ResetAppKeyRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ResetAppKeyRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ResetAppKeyRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ResetAppKeyRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ResetAppKeyRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string ResetAppKeyRequest::getAppId() const
{
    return appId_;
}

void ResetAppKeyRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ResetAppKeyRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ResetAppKeyRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


