

#include "huaweicloud/gaussdb/v3/model/UpdateAutoScalingPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAutoScalingPolicyRequestBody::UpdateAutoScalingPolicyRequestBody()
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
    reduceEnabled_ = false;
    reduceEnabledIsSet_ = false;
    maxReadOnlyCount_ = 0;
    maxReadOnlyCountIsSet_ = false;
    readOnlyWeight_ = 0;
    readOnlyWeightIsSet_ = false;
    scalingStrategyIsSet_ = false;
}

UpdateAutoScalingPolicyRequestBody::~UpdateAutoScalingPolicyRequestBody() = default;

void UpdateAutoScalingPolicyRequestBody::validate()
{
}

web::json::value UpdateAutoScalingPolicyRequestBody::toJson() const
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
    if(maxReadOnlyCountIsSet_) {
        val[utility::conversions::to_string_t("max_read_only_count")] = ModelBase::toJson(maxReadOnlyCount_);
    }
    if(readOnlyWeightIsSet_) {
        val[utility::conversions::to_string_t("read_only_weight")] = ModelBase::toJson(readOnlyWeight_);
    }
    if(scalingStrategyIsSet_) {
        val[utility::conversions::to_string_t("scaling_strategy")] = ModelBase::toJson(scalingStrategy_);
    }

    return val;
}
bool UpdateAutoScalingPolicyRequestBody::fromJson(const web::json::value& val)
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReduceEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_read_only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_read_only_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReadOnlyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaling_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaling_strategy"));
        if(!fieldValue.is_null())
        {
            ScalingStrategyReqInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalingStrategy(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoScalingPolicyRequestBody::getStatus() const
{
    return status_;
}

void UpdateAutoScalingPolicyRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t UpdateAutoScalingPolicyRequestBody::getMonitorCycle() const
{
    return monitorCycle_;
}

void UpdateAutoScalingPolicyRequestBody::setMonitorCycle(int32_t value)
{
    monitorCycle_ = value;
    monitorCycleIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::monitorCycleIsSet() const
{
    return monitorCycleIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetmonitorCycle()
{
    monitorCycleIsSet_ = false;
}

int32_t UpdateAutoScalingPolicyRequestBody::getSilenceCycle() const
{
    return silenceCycle_;
}

void UpdateAutoScalingPolicyRequestBody::setSilenceCycle(int32_t value)
{
    silenceCycle_ = value;
    silenceCycleIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::silenceCycleIsSet() const
{
    return silenceCycleIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetsilenceCycle()
{
    silenceCycleIsSet_ = false;
}

int32_t UpdateAutoScalingPolicyRequestBody::getEnlargeThreshold() const
{
    return enlargeThreshold_;
}

void UpdateAutoScalingPolicyRequestBody::setEnlargeThreshold(int32_t value)
{
    enlargeThreshold_ = value;
    enlargeThresholdIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::enlargeThresholdIsSet() const
{
    return enlargeThresholdIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetenlargeThreshold()
{
    enlargeThresholdIsSet_ = false;
}

std::string UpdateAutoScalingPolicyRequestBody::getMaxFlavor() const
{
    return maxFlavor_;
}

void UpdateAutoScalingPolicyRequestBody::setMaxFlavor(const std::string& value)
{
    maxFlavor_ = value;
    maxFlavorIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::maxFlavorIsSet() const
{
    return maxFlavorIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetmaxFlavor()
{
    maxFlavorIsSet_ = false;
}

bool UpdateAutoScalingPolicyRequestBody::isReduceEnabled() const
{
    return reduceEnabled_;
}

void UpdateAutoScalingPolicyRequestBody::setReduceEnabled(bool value)
{
    reduceEnabled_ = value;
    reduceEnabledIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::reduceEnabledIsSet() const
{
    return reduceEnabledIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetreduceEnabled()
{
    reduceEnabledIsSet_ = false;
}

int32_t UpdateAutoScalingPolicyRequestBody::getMaxReadOnlyCount() const
{
    return maxReadOnlyCount_;
}

void UpdateAutoScalingPolicyRequestBody::setMaxReadOnlyCount(int32_t value)
{
    maxReadOnlyCount_ = value;
    maxReadOnlyCountIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::maxReadOnlyCountIsSet() const
{
    return maxReadOnlyCountIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetmaxReadOnlyCount()
{
    maxReadOnlyCountIsSet_ = false;
}

int32_t UpdateAutoScalingPolicyRequestBody::getReadOnlyWeight() const
{
    return readOnlyWeight_;
}

void UpdateAutoScalingPolicyRequestBody::setReadOnlyWeight(int32_t value)
{
    readOnlyWeight_ = value;
    readOnlyWeightIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::readOnlyWeightIsSet() const
{
    return readOnlyWeightIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetreadOnlyWeight()
{
    readOnlyWeightIsSet_ = false;
}

ScalingStrategyReqInfo UpdateAutoScalingPolicyRequestBody::getScalingStrategy() const
{
    return scalingStrategy_;
}

void UpdateAutoScalingPolicyRequestBody::setScalingStrategy(const ScalingStrategyReqInfo& value)
{
    scalingStrategy_ = value;
    scalingStrategyIsSet_ = true;
}

bool UpdateAutoScalingPolicyRequestBody::scalingStrategyIsSet() const
{
    return scalingStrategyIsSet_;
}

void UpdateAutoScalingPolicyRequestBody::unsetscalingStrategy()
{
    scalingStrategyIsSet_ = false;
}

}
}
}
}
}


