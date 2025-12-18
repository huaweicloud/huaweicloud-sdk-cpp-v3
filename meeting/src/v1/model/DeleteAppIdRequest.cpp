

#include "huaweicloud/meeting/v1/model/DeleteAppIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteAppIdRequest::DeleteAppIdRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

DeleteAppIdRequest::~DeleteAppIdRequest() = default;

void DeleteAppIdRequest::validate()
{
}

web::json::value DeleteAppIdRequest::toJson() const
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
bool DeleteAppIdRequest::fromJson(const web::json::value& val)
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


std::string DeleteAppIdRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteAppIdRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteAppIdRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteAppIdRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteAppIdRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteAppIdRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteAppIdRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteAppIdRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string DeleteAppIdRequest::getAppId() const
{
    return appId_;
}

void DeleteAppIdRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeleteAppIdRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeleteAppIdRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


