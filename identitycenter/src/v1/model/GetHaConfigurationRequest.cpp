

#include "huaweicloud/identitycenter/v1/model/GetHaConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetHaConfigurationRequest::GetHaConfigurationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

GetHaConfigurationRequest::~GetHaConfigurationRequest() = default;

void GetHaConfigurationRequest::validate()
{
}

web::json::value GetHaConfigurationRequest::toJson() const
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
bool GetHaConfigurationRequest::fromJson(const web::json::value& val)
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


std::string GetHaConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetHaConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetHaConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetHaConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetHaConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void GetHaConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetHaConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetHaConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


