

#include "huaweicloud/identitycenter/v1/model/GetSsoConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetSsoConfigurationRequest::GetSsoConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

GetSsoConfigurationRequest::~GetSsoConfigurationRequest() = default;

void GetSsoConfigurationRequest::validate()
{
}

web::json::value GetSsoConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool GetSsoConfigurationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetSsoConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetSsoConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetSsoConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetSsoConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetSsoConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void GetSsoConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetSsoConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetSsoConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


