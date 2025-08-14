

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceDisplayDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceDisplayDataRequest::UpdateApplicationInstanceDisplayDataRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateApplicationInstanceDisplayDataRequest::~UpdateApplicationInstanceDisplayDataRequest() = default;

void UpdateApplicationInstanceDisplayDataRequest::validate()
{
}

web::json::value UpdateApplicationInstanceDisplayDataRequest::toJson() const
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
bool UpdateApplicationInstanceDisplayDataRequest::fromJson(const web::json::value& val)
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
            UpdateApplicationInstanceDisplayDataReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationInstanceDisplayDataRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateApplicationInstanceDisplayDataRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateApplicationInstanceDisplayDataRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateApplicationInstanceDisplayDataRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateApplicationInstanceDisplayDataRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateApplicationInstanceDisplayDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceDisplayDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateApplicationInstanceDisplayDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateApplicationInstanceDisplayDataRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void UpdateApplicationInstanceDisplayDataRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool UpdateApplicationInstanceDisplayDataRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void UpdateApplicationInstanceDisplayDataRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

UpdateApplicationInstanceDisplayDataReqBody UpdateApplicationInstanceDisplayDataRequest::getBody() const
{
    return body_;
}

void UpdateApplicationInstanceDisplayDataRequest::setBody(const UpdateApplicationInstanceDisplayDataReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateApplicationInstanceDisplayDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateApplicationInstanceDisplayDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


