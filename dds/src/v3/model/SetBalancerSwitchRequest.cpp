

#include "huaweicloud/dds/v3/model/SetBalancerSwitchRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetBalancerSwitchRequest::SetBalancerSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

SetBalancerSwitchRequest::~SetBalancerSwitchRequest() = default;

void SetBalancerSwitchRequest::validate()
{
}

web::json::value SetBalancerSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool SetBalancerSwitchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}

std::string SetBalancerSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetBalancerSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetBalancerSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetBalancerSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetBalancerSwitchRequest::getAction() const
{
    return action_;
}

void SetBalancerSwitchRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool SetBalancerSwitchRequest::actionIsSet() const
{
    return actionIsSet_;
}

void SetBalancerSwitchRequest::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


