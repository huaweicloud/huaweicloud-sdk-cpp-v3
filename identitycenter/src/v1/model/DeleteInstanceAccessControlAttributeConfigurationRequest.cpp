

#include "huaweicloud/identitycenter/v1/model/DeleteInstanceAccessControlAttributeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteInstanceAccessControlAttributeConfigurationRequest::DeleteInstanceAccessControlAttributeConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DeleteInstanceAccessControlAttributeConfigurationRequest::~DeleteInstanceAccessControlAttributeConfigurationRequest() = default;

void DeleteInstanceAccessControlAttributeConfigurationRequest::validate()
{
}

web::json::value DeleteInstanceAccessControlAttributeConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool DeleteInstanceAccessControlAttributeConfigurationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteInstanceAccessControlAttributeConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteInstanceAccessControlAttributeConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteInstanceAccessControlAttributeConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteInstanceAccessControlAttributeConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteInstanceAccessControlAttributeConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteInstanceAccessControlAttributeConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteInstanceAccessControlAttributeConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteInstanceAccessControlAttributeConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


