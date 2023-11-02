

#include "huaweicloud/gaussdb/v3/model/UpdateAutoScalingPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAutoScalingPolicyResponse::UpdateAutoScalingPolicyResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    switchStatusIsSet_ = false;
}

UpdateAutoScalingPolicyResponse::~UpdateAutoScalingPolicyResponse() = default;

void UpdateAutoScalingPolicyResponse::validate()
{
}

web::json::value UpdateAutoScalingPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}
bool UpdateAutoScalingPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            AutoScalingSwitchStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoScalingPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void UpdateAutoScalingPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAutoScalingPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAutoScalingPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateAutoScalingPolicyResponse::getInstanceName() const
{
    return instanceName_;
}

void UpdateAutoScalingPolicyResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool UpdateAutoScalingPolicyResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void UpdateAutoScalingPolicyResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

AutoScalingSwitchStatus UpdateAutoScalingPolicyResponse::getSwitchStatus() const
{
    return switchStatus_;
}

void UpdateAutoScalingPolicyResponse::setSwitchStatus(const AutoScalingSwitchStatus& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool UpdateAutoScalingPolicyResponse::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void UpdateAutoScalingPolicyResponse::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


