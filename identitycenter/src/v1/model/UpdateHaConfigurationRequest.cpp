

#include "huaweicloud/identitycenter/v1/model/UpdateHaConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateHaConfigurationRequest::UpdateHaConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHaConfigurationRequest::~UpdateHaConfigurationRequest() = default;

void UpdateHaConfigurationRequest::validate()
{
}

web::json::value UpdateHaConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHaConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHAConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHaConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateHaConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateHaConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateHaConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateHaConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateHaConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateHaConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateHaConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateHAConfigurationReqBody UpdateHaConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateHaConfigurationRequest::setBody(const UpdateHAConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHaConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHaConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


