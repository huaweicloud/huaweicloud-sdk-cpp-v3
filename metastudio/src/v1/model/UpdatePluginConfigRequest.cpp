

#include "huaweicloud/metastudio/v1/model/UpdatePluginConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePluginConfigRequest::UpdatePluginConfigRequest()
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
    bodyIsSet_ = false;
}

UpdatePluginConfigRequest::~UpdatePluginConfigRequest() = default;

void UpdatePluginConfigRequest::validate()
{
}

web::json::value UpdatePluginConfigRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePluginConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePluginConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePluginConfigRequest::getAuthorization() const
{
    return authorization_;
}

void UpdatePluginConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdatePluginConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdatePluginConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdatePluginConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdatePluginConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdatePluginConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdatePluginConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdatePluginConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdatePluginConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdatePluginConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdatePluginConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdatePluginConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdatePluginConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdatePluginConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdatePluginConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdatePluginConfigRequest::getPluginConfigId() const
{
    return pluginConfigId_;
}

void UpdatePluginConfigRequest::setPluginConfigId(const std::string& value)
{
    pluginConfigId_ = value;
    pluginConfigIdIsSet_ = true;
}

bool UpdatePluginConfigRequest::pluginConfigIdIsSet() const
{
    return pluginConfigIdIsSet_;
}

void UpdatePluginConfigRequest::unsetpluginConfigId()
{
    pluginConfigIdIsSet_ = false;
}

UpdatePluginConfigReq UpdatePluginConfigRequest::getBody() const
{
    return body_;
}

void UpdatePluginConfigRequest::setBody(const UpdatePluginConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePluginConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePluginConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


