

#include "huaweicloud/identitycenter/v1/model/DescribeInstanceAccessControlAttributeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeInstanceAccessControlAttributeConfigurationRequest::DescribeInstanceAccessControlAttributeConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DescribeInstanceAccessControlAttributeConfigurationRequest::~DescribeInstanceAccessControlAttributeConfigurationRequest() = default;

void DescribeInstanceAccessControlAttributeConfigurationRequest::validate()
{
}

web::json::value DescribeInstanceAccessControlAttributeConfigurationRequest::toJson() const
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
bool DescribeInstanceAccessControlAttributeConfigurationRequest::fromJson(const web::json::value& val)
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


std::string DescribeInstanceAccessControlAttributeConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void DescribeInstanceAccessControlAttributeConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DescribeInstanceAccessControlAttributeConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DescribeInstanceAccessControlAttributeConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DescribeInstanceAccessControlAttributeConfigurationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeInstanceAccessControlAttributeConfigurationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeInstanceAccessControlAttributeConfigurationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeInstanceAccessControlAttributeConfigurationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


