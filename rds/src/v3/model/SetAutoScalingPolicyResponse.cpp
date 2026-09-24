

#include "huaweicloud/rds/v3/model/SetAutoScalingPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoScalingPolicyResponse::SetAutoScalingPolicyResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SetAutoScalingPolicyResponse::~SetAutoScalingPolicyResponse() = default;

void SetAutoScalingPolicyResponse::validate()
{
}

web::json::value SetAutoScalingPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAutoScalingPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetAutoScalingPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void SetAutoScalingPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAutoScalingPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAutoScalingPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetAutoScalingPolicyResponse::getStatus() const
{
    return status_;
}

void SetAutoScalingPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAutoScalingPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAutoScalingPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


