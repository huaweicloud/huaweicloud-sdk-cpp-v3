

#include "huaweicloud/identitycenter/v1/model/GetApplicationAssignmentConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetApplicationAssignmentConfigurationRequest::GetApplicationAssignmentConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
}

GetApplicationAssignmentConfigurationRequest::~GetApplicationAssignmentConfigurationRequest() = default;

void GetApplicationAssignmentConfigurationRequest::validate()
{
}

web::json::value GetApplicationAssignmentConfigurationRequest::toJson() const
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

    return val;
}
bool GetApplicationAssignmentConfigurationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetApplicationAssignmentConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetApplicationAssignmentConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetApplicationAssignmentConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetApplicationAssignmentConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetApplicationAssignmentConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void GetApplicationAssignmentConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetApplicationAssignmentConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetApplicationAssignmentConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string GetApplicationAssignmentConfigurationRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void GetApplicationAssignmentConfigurationRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool GetApplicationAssignmentConfigurationRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void GetApplicationAssignmentConfigurationRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

}
}
}
}
}


