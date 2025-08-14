

#include "huaweicloud/identitycenter/v1/model/UpdateSsoConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateSsoConfigurationRequest::UpdateSsoConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSsoConfigurationRequest::~UpdateSsoConfigurationRequest() = default;

void UpdateSsoConfigurationRequest::validate()
{
}

web::json::value UpdateSsoConfigurationRequest::toJson() const
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
bool UpdateSsoConfigurationRequest::fromJson(const web::json::value& val)
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
            UpdateSsoConfigurationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSsoConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateSsoConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateSsoConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateSsoConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateSsoConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSsoConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSsoConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSsoConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateSsoConfigurationReqBody UpdateSsoConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateSsoConfigurationRequest::setBody(const UpdateSsoConfigurationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSsoConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSsoConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


