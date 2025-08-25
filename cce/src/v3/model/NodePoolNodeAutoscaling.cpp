

#include "huaweicloud/cce/v3/model/NodePoolNodeAutoscaling.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolNodeAutoscaling::NodePoolNodeAutoscaling()
{
    enable_ = false;
    enableIsSet_ = false;
    minNodeCount_ = 0;
    minNodeCountIsSet_ = false;
    maxNodeCount_ = 0;
    maxNodeCountIsSet_ = false;
    scaleDownCooldownTime_ = 0;
    scaleDownCooldownTimeIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    scaleDownUnneededTime_ = 0;
    scaleDownUnneededTimeIsSet_ = false;
    scaleDownUtilizationThreshold_ = 0.0f;
    scaleDownUtilizationThresholdIsSet_ = false;
}

NodePoolNodeAutoscaling::~NodePoolNodeAutoscaling() = default;

void NodePoolNodeAutoscaling::validate()
{
}

web::json::value NodePoolNodeAutoscaling::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(minNodeCountIsSet_) {
        val[utility::conversions::to_string_t("minNodeCount")] = ModelBase::toJson(minNodeCount_);
    }
    if(maxNodeCountIsSet_) {
        val[utility::conversions::to_string_t("maxNodeCount")] = ModelBase::toJson(maxNodeCount_);
    }
    if(scaleDownCooldownTimeIsSet_) {
        val[utility::conversions::to_string_t("scaleDownCooldownTime")] = ModelBase::toJson(scaleDownCooldownTime_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(scaleDownUnneededTimeIsSet_) {
        val[utility::conversions::to_string_t("scaleDownUnneededTime")] = ModelBase::toJson(scaleDownUnneededTime_);
    }
    if(scaleDownUtilizationThresholdIsSet_) {
        val[utility::conversions::to_string_t("scaleDownUtilizationThreshold")] = ModelBase::toJson(scaleDownUtilizationThreshold_);
    }

    return val;
}
bool NodePoolNodeAutoscaling::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaleDownCooldownTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaleDownCooldownTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleDownCooldownTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaleDownUnneededTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaleDownUnneededTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleDownUnneededTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaleDownUtilizationThreshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaleDownUtilizationThreshold"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleDownUtilizationThreshold(refVal);
        }
    }
    return ok;
}


bool NodePoolNodeAutoscaling::isEnable() const
{
    return enable_;
}

void NodePoolNodeAutoscaling::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool NodePoolNodeAutoscaling::enableIsSet() const
{
    return enableIsSet_;
}

void NodePoolNodeAutoscaling::unsetenable()
{
    enableIsSet_ = false;
}

int32_t NodePoolNodeAutoscaling::getMinNodeCount() const
{
    return minNodeCount_;
}

void NodePoolNodeAutoscaling::setMinNodeCount(int32_t value)
{
    minNodeCount_ = value;
    minNodeCountIsSet_ = true;
}

bool NodePoolNodeAutoscaling::minNodeCountIsSet() const
{
    return minNodeCountIsSet_;
}

void NodePoolNodeAutoscaling::unsetminNodeCount()
{
    minNodeCountIsSet_ = false;
}

int32_t NodePoolNodeAutoscaling::getMaxNodeCount() const
{
    return maxNodeCount_;
}

void NodePoolNodeAutoscaling::setMaxNodeCount(int32_t value)
{
    maxNodeCount_ = value;
    maxNodeCountIsSet_ = true;
}

bool NodePoolNodeAutoscaling::maxNodeCountIsSet() const
{
    return maxNodeCountIsSet_;
}

void NodePoolNodeAutoscaling::unsetmaxNodeCount()
{
    maxNodeCountIsSet_ = false;
}

int32_t NodePoolNodeAutoscaling::getScaleDownCooldownTime() const
{
    return scaleDownCooldownTime_;
}

void NodePoolNodeAutoscaling::setScaleDownCooldownTime(int32_t value)
{
    scaleDownCooldownTime_ = value;
    scaleDownCooldownTimeIsSet_ = true;
}

bool NodePoolNodeAutoscaling::scaleDownCooldownTimeIsSet() const
{
    return scaleDownCooldownTimeIsSet_;
}

void NodePoolNodeAutoscaling::unsetscaleDownCooldownTime()
{
    scaleDownCooldownTimeIsSet_ = false;
}

int32_t NodePoolNodeAutoscaling::getPriority() const
{
    return priority_;
}

void NodePoolNodeAutoscaling::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool NodePoolNodeAutoscaling::priorityIsSet() const
{
    return priorityIsSet_;
}

void NodePoolNodeAutoscaling::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t NodePoolNodeAutoscaling::getScaleDownUnneededTime() const
{
    return scaleDownUnneededTime_;
}

void NodePoolNodeAutoscaling::setScaleDownUnneededTime(int32_t value)
{
    scaleDownUnneededTime_ = value;
    scaleDownUnneededTimeIsSet_ = true;
}

bool NodePoolNodeAutoscaling::scaleDownUnneededTimeIsSet() const
{
    return scaleDownUnneededTimeIsSet_;
}

void NodePoolNodeAutoscaling::unsetscaleDownUnneededTime()
{
    scaleDownUnneededTimeIsSet_ = false;
}

float NodePoolNodeAutoscaling::getScaleDownUtilizationThreshold() const
{
    return scaleDownUtilizationThreshold_;
}

void NodePoolNodeAutoscaling::setScaleDownUtilizationThreshold(float value)
{
    scaleDownUtilizationThreshold_ = value;
    scaleDownUtilizationThresholdIsSet_ = true;
}

bool NodePoolNodeAutoscaling::scaleDownUtilizationThresholdIsSet() const
{
    return scaleDownUtilizationThresholdIsSet_;
}

void NodePoolNodeAutoscaling::unsetscaleDownUtilizationThreshold()
{
    scaleDownUtilizationThresholdIsSet_ = false;
}

}
}
}
}
}


