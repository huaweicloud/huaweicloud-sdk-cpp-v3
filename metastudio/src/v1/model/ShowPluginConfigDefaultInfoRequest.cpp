

#include "huaweicloud/metastudio/v1/model/ShowPluginConfigDefaultInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPluginConfigDefaultInfoRequest::ShowPluginConfigDefaultInfoRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowPluginConfigDefaultInfoRequest::~ShowPluginConfigDefaultInfoRequest() = default;

void ShowPluginConfigDefaultInfoRequest::validate()
{
}

web::json::value ShowPluginConfigDefaultInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }

    return val;
}
bool ShowPluginConfigDefaultInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    return ok;
}


std::string ShowPluginConfigDefaultInfoRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPluginConfigDefaultInfoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPluginConfigDefaultInfoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPluginConfigDefaultInfoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPluginConfigDefaultInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPluginConfigDefaultInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPluginConfigDefaultInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPluginConfigDefaultInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPluginConfigDefaultInfoRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPluginConfigDefaultInfoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPluginConfigDefaultInfoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPluginConfigDefaultInfoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPluginConfigDefaultInfoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPluginConfigDefaultInfoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPluginConfigDefaultInfoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPluginConfigDefaultInfoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


