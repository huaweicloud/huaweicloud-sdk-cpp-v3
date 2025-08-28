

#include "huaweicloud/metastudio/v1/model/ShowPluginConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPluginConfigRequest::ShowPluginConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    pluginConfigId_ = "";
    pluginConfigIdIsSet_ = false;
}

ShowPluginConfigRequest::~ShowPluginConfigRequest() = default;

void ShowPluginConfigRequest::validate()
{
}

web::json::value ShowPluginConfigRequest::toJson() const
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
    if(pluginConfigIdIsSet_) {
        val[utility::conversions::to_string_t("plugin_config_id")] = ModelBase::toJson(pluginConfigId_);
    }

    return val;
}
bool ShowPluginConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plugin_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginConfigId(refVal);
        }
    }
    return ok;
}


std::string ShowPluginConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPluginConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPluginConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPluginConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPluginConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPluginConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPluginConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPluginConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPluginConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPluginConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPluginConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPluginConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPluginConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPluginConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPluginConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPluginConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowPluginConfigRequest::getPluginConfigId() const
{
    return pluginConfigId_;
}

void ShowPluginConfigRequest::setPluginConfigId(const std::string& value)
{
    pluginConfigId_ = value;
    pluginConfigIdIsSet_ = true;
}

bool ShowPluginConfigRequest::pluginConfigIdIsSet() const
{
    return pluginConfigIdIsSet_;
}

void ShowPluginConfigRequest::unsetpluginConfigId()
{
    pluginConfigIdIsSet_ = false;
}

}
}
}
}
}


