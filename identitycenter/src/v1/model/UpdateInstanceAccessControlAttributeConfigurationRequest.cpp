

#include "huaweicloud/identitycenter/v1/model/UpdateInstanceAccessControlAttributeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateInstanceAccessControlAttributeConfigurationRequest::UpdateInstanceAccessControlAttributeConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceAccessControlAttributeConfigurationRequest::~UpdateInstanceAccessControlAttributeConfigurationRequest() = default;

void UpdateInstanceAccessControlAttributeConfigurationRequest::validate()
{
}

web::json::value UpdateInstanceAccessControlAttributeConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateInstanceAccessControlAttributeConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateInstanceAccessControlAttributeConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceAccessControlAttributeConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceAccessControlAttributeConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceAccessControlAttributeConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceAccessControlAttributeConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateInstanceAccessControlAttributeConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateInstanceAccessControlAttributeConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateInstanceAccessControlAttributeConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateInstanceAccessControlAttributeConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

UpdateInstanceAccessControlAttributeConfigurationReqBody UpdateInstanceAccessControlAttributeConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateInstanceAccessControlAttributeConfigurationRequest::setBody(const UpdateInstanceAccessControlAttributeConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceAccessControlAttributeConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceAccessControlAttributeConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


