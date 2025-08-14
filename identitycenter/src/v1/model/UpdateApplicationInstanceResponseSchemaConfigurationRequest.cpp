

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseSchemaConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceResponseSchemaConfigurationRequest::UpdateApplicationInstanceResponseSchemaConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationInstanceResponseSchemaConfigurationRequest::~UpdateApplicationInstanceResponseSchemaConfigurationRequest() = default;

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::validate()
{
}

web::json::value UpdateApplicationInstanceResponseSchemaConfigurationRequest::toJson() const
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
bool UpdateApplicationInstanceResponseSchemaConfigurationRequest::fromJson(const web::json::value& val)
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
            UpdateApplicationInstanceResponseSchemaConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationInstanceResponseSchemaConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateApplicationInstanceResponseSchemaConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateApplicationInstanceResponseSchemaConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceResponseSchemaConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateApplicationInstanceResponseSchemaConfigurationRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceResponseSchemaConfigurationRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

UpdateApplicationInstanceResponseSchemaConfigurationReqBody UpdateApplicationInstanceResponseSchemaConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::setBody(const UpdateApplicationInstanceResponseSchemaConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationInstanceResponseSchemaConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


