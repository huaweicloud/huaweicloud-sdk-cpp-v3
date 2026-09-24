

#include "huaweicloud/rds/v3/model/SetAutoScalingPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoScalingPolicyRequestBody::SetAutoScalingPolicyRequestBody()
{
    status_ = "";
    statusIsSet_ = false;
    monitorCycle_ = 0;
    monitorCycleIsSet_ = false;
    silenceCycle_ = 0;
    silenceCycleIsSet_ = false;
    enlargeThreshold_ = 0;
    enlargeThresholdIsSet_ = false;
    maxFlavor_ = "";
    maxFlavorIsSet_ = false;
    reduceEnabled_ = "";
    reduceEnabledIsSet_ = false;
    reduceThreshold_ = 0;
    reduceThresholdIsSet_ = false;
    minFlavor_ = "";
    minFlavorIsSet_ = false;
    readOnlyScalingStrategyIsSet_ = false;
}

SetAutoScalingPolicyRequestBody::~SetAutoScalingPolicyRequestBody() = default;

void SetAutoScalingPolicyRequestBody::validate()
{
}

web::json::value SetAutoScalingPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(monitorCycleIsSet_) {
        val[utility::conversions::to_string_t("monitor_cycle")] = ModelBase::toJson(monitorCycle_);
    }
    if(silenceCycleIsSet_) {
        val[utility::conversions::to_string_t("silence_cycle")] = ModelBase::toJson(silenceCycle_);
    }
    if(enlargeThresholdIsSet_) {
        val[utility::conversions::to_string_t("enlarge_threshold")] = ModelBase::toJson(enlargeThreshold_);
    }
    if(maxFlavorIsSet_) {
        val[utility::conversions::to_string_t("max_flavor")] = ModelBase::toJson(maxFlavor_);
    }
    if(reduceEnabledIsSet_) {
        val[utility::conversions::to_string_t("reduce_enabled")] = ModelBase::toJson(reduceEnabled_);
    }
    if(reduceThresholdIsSet_) {
        val[utility::conversions::to_string_t("reduce_threshold")] = ModelBase::toJson(reduceThreshold_);
    }
    if(minFlavorIsSet_) {
        val[utility::conversions::to_string_t("min_flavor")] = ModelBase::toJson(minFlavor_);
    }
    if(readOnlyScalingStrategyIsSet_) {
        val[utility::conversions::to_string_t("read_only_scaling_strategy")] = ModelBase::toJson(readOnlyScalingStrategy_);
    }

    return val;
}
bool SetAutoScalingPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("monitor_cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("monitor_cycle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMonitorCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("silence_cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("silence_cycle"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSilenceCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enlarge_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enlarge_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnlargeThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reduce_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reduce_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReduceEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reduce_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reduce_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReduceThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_scaling_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_scaling_strategy"));
        if(!fieldValue.is_null())
        {
            ReadOnlyScalingStrategy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyScalingStrategy(refVal);
        }
    }
    return ok;
}


std::string SetAutoScalingPolicyRequestBody::getStatus() const
{
    return status_;
}

void SetAutoScalingPolicyRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t SetAutoScalingPolicyRequestBody::getMonitorCycle() const
{
    return monitorCycle_;
}

void SetAutoScalingPolicyRequestBody::setMonitorCycle(int32_t value)
{
    monitorCycle_ = value;
    monitorCycleIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::monitorCycleIsSet() const
{
    return monitorCycleIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetmonitorCycle()
{
    monitorCycleIsSet_ = false;
}

int32_t SetAutoScalingPolicyRequestBody::getSilenceCycle() const
{
    return silenceCycle_;
}

void SetAutoScalingPolicyRequestBody::setSilenceCycle(int32_t value)
{
    silenceCycle_ = value;
    silenceCycleIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::silenceCycleIsSet() const
{
    return silenceCycleIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetsilenceCycle()
{
    silenceCycleIsSet_ = false;
}

int32_t SetAutoScalingPolicyRequestBody::getEnlargeThreshold() const
{
    return enlargeThreshold_;
}

void SetAutoScalingPolicyRequestBody::setEnlargeThreshold(int32_t value)
{
    enlargeThreshold_ = value;
    enlargeThresholdIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::enlargeThresholdIsSet() const
{
    return enlargeThresholdIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetenlargeThreshold()
{
    enlargeThresholdIsSet_ = false;
}

std::string SetAutoScalingPolicyRequestBody::getMaxFlavor() const
{
    return maxFlavor_;
}

void SetAutoScalingPolicyRequestBody::setMaxFlavor(const std::string& value)
{
    maxFlavor_ = value;
    maxFlavorIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::maxFlavorIsSet() const
{
    return maxFlavorIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetmaxFlavor()
{
    maxFlavorIsSet_ = false;
}

std::string SetAutoScalingPolicyRequestBody::getReduceEnabled() const
{
    return reduceEnabled_;
}

void SetAutoScalingPolicyRequestBody::setReduceEnabled(const std::string& value)
{
    reduceEnabled_ = value;
    reduceEnabledIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::reduceEnabledIsSet() const
{
    return reduceEnabledIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetreduceEnabled()
{
    reduceEnabledIsSet_ = false;
}

int32_t SetAutoScalingPolicyRequestBody::getReduceThreshold() const
{
    return reduceThreshold_;
}

void SetAutoScalingPolicyRequestBody::setReduceThreshold(int32_t value)
{
    reduceThreshold_ = value;
    reduceThresholdIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::reduceThresholdIsSet() const
{
    return reduceThresholdIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetreduceThreshold()
{
    reduceThresholdIsSet_ = false;
}

std::string SetAutoScalingPolicyRequestBody::getMinFlavor() const
{
    return minFlavor_;
}

void SetAutoScalingPolicyRequestBody::setMinFlavor(const std::string& value)
{
    minFlavor_ = value;
    minFlavorIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::minFlavorIsSet() const
{
    return minFlavorIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetminFlavor()
{
    minFlavorIsSet_ = false;
}

ReadOnlyScalingStrategy SetAutoScalingPolicyRequestBody::getReadOnlyScalingStrategy() const
{
    return readOnlyScalingStrategy_;
}

void SetAutoScalingPolicyRequestBody::setReadOnlyScalingStrategy(const ReadOnlyScalingStrategy& value)
{
    readOnlyScalingStrategy_ = value;
    readOnlyScalingStrategyIsSet_ = true;
}

bool SetAutoScalingPolicyRequestBody::readOnlyScalingStrategyIsSet() const
{
    return readOnlyScalingStrategyIsSet_;
}

void SetAutoScalingPolicyRequestBody::unsetreadOnlyScalingStrategy()
{
    readOnlyScalingStrategyIsSet_ = false;
}

}
}
}
}
}


