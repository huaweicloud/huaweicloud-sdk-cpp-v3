

#include "huaweicloud/identitycenter/v1/model/DescribeInstanceAccessControlAttributeConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeInstanceAccessControlAttributeConfigurationResponse::DescribeInstanceAccessControlAttributeConfigurationResponse()
{
    instanceAccessControlAttributeConfigurationIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusReason_ = "";
    statusReasonIsSet_ = false;
}

DescribeInstanceAccessControlAttributeConfigurationResponse::~DescribeInstanceAccessControlAttributeConfigurationResponse() = default;

void DescribeInstanceAccessControlAttributeConfigurationResponse::validate()
{
}

web::json::value DescribeInstanceAccessControlAttributeConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceAccessControlAttributeConfigurationIsSet_) {
        val[utility::conversions::to_string_t("instance_access_control_attribute_configuration")] = ModelBase::toJson(instanceAccessControlAttributeConfiguration_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusReasonIsSet_) {
        val[utility::conversions::to_string_t("status_reason")] = ModelBase::toJson(statusReason_);
    }

    return val;
}
bool DescribeInstanceAccessControlAttributeConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_access_control_attribute_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_access_control_attribute_configuration"));
        if(!fieldValue.is_null())
        {
            InstanceAccessControlAttributeConfigurationDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceAccessControlAttributeConfiguration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusReason(refVal);
        }
    }
    return ok;
}


InstanceAccessControlAttributeConfigurationDto DescribeInstanceAccessControlAttributeConfigurationResponse::getInstanceAccessControlAttributeConfiguration() const
{
    return instanceAccessControlAttributeConfiguration_;
}

void DescribeInstanceAccessControlAttributeConfigurationResponse::setInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfigurationDto& value)
{
    instanceAccessControlAttributeConfiguration_ = value;
    instanceAccessControlAttributeConfigurationIsSet_ = true;
}

bool DescribeInstanceAccessControlAttributeConfigurationResponse::instanceAccessControlAttributeConfigurationIsSet() const
{
    return instanceAccessControlAttributeConfigurationIsSet_;
}

void DescribeInstanceAccessControlAttributeConfigurationResponse::unsetinstanceAccessControlAttributeConfiguration()
{
    instanceAccessControlAttributeConfigurationIsSet_ = false;
}

std::string DescribeInstanceAccessControlAttributeConfigurationResponse::getStatus() const
{
    return status_;
}

void DescribeInstanceAccessControlAttributeConfigurationResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DescribeInstanceAccessControlAttributeConfigurationResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DescribeInstanceAccessControlAttributeConfigurationResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DescribeInstanceAccessControlAttributeConfigurationResponse::getStatusReason() const
{
    return statusReason_;
}

void DescribeInstanceAccessControlAttributeConfigurationResponse::setStatusReason(const std::string& value)
{
    statusReason_ = value;
    statusReasonIsSet_ = true;
}

bool DescribeInstanceAccessControlAttributeConfigurationResponse::statusReasonIsSet() const
{
    return statusReasonIsSet_;
}

void DescribeInstanceAccessControlAttributeConfigurationResponse::unsetstatusReason()
{
    statusReasonIsSet_ = false;
}

}
}
}
}
}


