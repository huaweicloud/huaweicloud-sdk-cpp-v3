

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceServiceProviderConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceServiceProviderConfigurationRequest::UpdateApplicationInstanceServiceProviderConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationInstanceServiceProviderConfigurationRequest::~UpdateApplicationInstanceServiceProviderConfigurationRequest() = default;

void UpdateApplicationInstanceServiceProviderConfigurationRequest::validate()
{
}

web::json::value UpdateApplicationInstanceServiceProviderConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateApplicationInstanceServiceProviderConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateApplicationInstanceServiceProviderConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationInstanceServiceProviderConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateApplicationInstanceServiceProviderConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateApplicationInstanceServiceProviderConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceServiceProviderConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateApplicationInstanceServiceProviderConfigurationRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceServiceProviderConfigurationRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

UpdateApplicationInstanceServiceProviderConfigurationReqBody UpdateApplicationInstanceServiceProviderConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::setBody(const UpdateApplicationInstanceServiceProviderConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationInstanceServiceProviderConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationInstanceServiceProviderConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


