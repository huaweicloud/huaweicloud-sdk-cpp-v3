

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceResponseConfigurationRequest::UpdateApplicationInstanceResponseConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationInstanceResponseConfigurationRequest::~UpdateApplicationInstanceResponseConfigurationRequest() = default;

void UpdateApplicationInstanceResponseConfigurationRequest::validate()
{
}

web::json::value UpdateApplicationInstanceResponseConfigurationRequest::toJson() const
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
bool UpdateApplicationInstanceResponseConfigurationRequest::fromJson(const web::json::value& val)
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
            UpdateApplicationInstanceResponseConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationInstanceResponseConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateApplicationInstanceResponseConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateApplicationInstanceResponseConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceResponseConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateApplicationInstanceResponseConfigurationRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceResponseConfigurationRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

UpdateApplicationInstanceResponseConfigurationReqBody UpdateApplicationInstanceResponseConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::setBody(const UpdateApplicationInstanceResponseConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationInstanceResponseConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationInstanceResponseConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


