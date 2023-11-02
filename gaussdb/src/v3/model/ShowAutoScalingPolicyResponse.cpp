

#include "huaweicloud/gaussdb/v3/model/ShowAutoScalingPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoScalingPolicyResponse::ShowAutoScalingPolicyResponse()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
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
    minFlavor_ = "";
    minFlavorIsSet_ = false;
    silenceStartAt_ = "";
    silenceStartAtIsSet_ = false;
    scalingStrategyIsSet_ = false;
    maxReadOnlyCount_ = 0;
    maxReadOnlyCountIsSet_ = false;
    minReadOnlyCount_ = 0;
    minReadOnlyCountIsSet_ = false;
    readOnlyWeight_ = 0;
    readOnlyWeightIsSet_ = false;
}

ShowAutoScalingPolicyResponse::~ShowAutoScalingPolicyResponse() = default;

void ShowAutoScalingPolicyResponse::validate()
{
}

web::json::value ShowAutoScalingPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
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
    if(minFlavorIsSet_) {
        val[utility::conversions::to_string_t("min_flavor")] = ModelBase::toJson(minFlavor_);
    }
    if(silenceStartAtIsSet_) {
        val[utility::conversions::to_string_t("silence_start_at")] = ModelBase::toJson(silenceStartAt_);
    }
    if(scalingStrategyIsSet_) {
        val[utility::conversions::to_string_t("scaling_strategy")] = ModelBase::toJson(scalingStrategy_);
    }
    if(maxReadOnlyCountIsSet_) {
        val[utility::conversions::to_string_t("max_read_only_count")] = ModelBase::toJson(maxReadOnlyCount_);
    }
    if(minReadOnlyCountIsSet_) {
        val[utility::conversions::to_string_t("min_read_only_count")] = ModelBase::toJson(minReadOnlyCount_);
    }
    if(readOnlyWeightIsSet_) {
        val[utility::conversions::to_string_t("read_only_weight")] = ModelBase::toJson(readOnlyWeight_);
    }

    return val;
}
bool ShowAutoScalingPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("silence_start_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("silence_start_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSilenceStartAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaling_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaling_strategy"));
        if(!fieldValue.is_null())
        {
            ScalingStrategyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalingStrategy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_read_only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_read_only_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinReadOnlyCount(refVal);
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
    return ok;
}


std::string ShowAutoScalingPolicyResponse::getId() const
{
    return id_;
}

void ShowAutoScalingPolicyResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAutoScalingPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoScalingPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoScalingPolicyResponse::getInstanceName() const
{
    return instanceName_;
}

void ShowAutoScalingPolicyResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowAutoScalingPolicyResponse::getStatus() const
{
    return status_;
}

void ShowAutoScalingPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowAutoScalingPolicyResponse::getMonitorCycle() const
{
    return monitorCycle_;
}

void ShowAutoScalingPolicyResponse::setMonitorCycle(int32_t value)
{
    monitorCycle_ = value;
    monitorCycleIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::monitorCycleIsSet() const
{
    return monitorCycleIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetmonitorCycle()
{
    monitorCycleIsSet_ = false;
}

int32_t ShowAutoScalingPolicyResponse::getSilenceCycle() const
{
    return silenceCycle_;
}

void ShowAutoScalingPolicyResponse::setSilenceCycle(int32_t value)
{
    silenceCycle_ = value;
    silenceCycleIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::silenceCycleIsSet() const
{
    return silenceCycleIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetsilenceCycle()
{
    silenceCycleIsSet_ = false;
}

int32_t ShowAutoScalingPolicyResponse::getEnlargeThreshold() const
{
    return enlargeThreshold_;
}

void ShowAutoScalingPolicyResponse::setEnlargeThreshold(int32_t value)
{
    enlargeThreshold_ = value;
    enlargeThresholdIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::enlargeThresholdIsSet() const
{
    return enlargeThresholdIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetenlargeThreshold()
{
    enlargeThresholdIsSet_ = false;
}

std::string ShowAutoScalingPolicyResponse::getMaxFlavor() const
{
    return maxFlavor_;
}

void ShowAutoScalingPolicyResponse::setMaxFlavor(const std::string& value)
{
    maxFlavor_ = value;
    maxFlavorIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::maxFlavorIsSet() const
{
    return maxFlavorIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetmaxFlavor()
{
    maxFlavorIsSet_ = false;
}

bool ShowAutoScalingPolicyResponse::isReduceEnabled() const
{
    return reduceEnabled_;
}

void ShowAutoScalingPolicyResponse::setReduceEnabled(bool value)
{
    reduceEnabled_ = value;
    reduceEnabledIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::reduceEnabledIsSet() const
{
    return reduceEnabledIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetreduceEnabled()
{
    reduceEnabledIsSet_ = false;
}

std::string ShowAutoScalingPolicyResponse::getMinFlavor() const
{
    return minFlavor_;
}

void ShowAutoScalingPolicyResponse::setMinFlavor(const std::string& value)
{
    minFlavor_ = value;
    minFlavorIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::minFlavorIsSet() const
{
    return minFlavorIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetminFlavor()
{
    minFlavorIsSet_ = false;
}

std::string ShowAutoScalingPolicyResponse::getSilenceStartAt() const
{
    return silenceStartAt_;
}

void ShowAutoScalingPolicyResponse::setSilenceStartAt(const std::string& value)
{
    silenceStartAt_ = value;
    silenceStartAtIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::silenceStartAtIsSet() const
{
    return silenceStartAtIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetsilenceStartAt()
{
    silenceStartAtIsSet_ = false;
}

ScalingStrategyInfo ShowAutoScalingPolicyResponse::getScalingStrategy() const
{
    return scalingStrategy_;
}

void ShowAutoScalingPolicyResponse::setScalingStrategy(const ScalingStrategyInfo& value)
{
    scalingStrategy_ = value;
    scalingStrategyIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::scalingStrategyIsSet() const
{
    return scalingStrategyIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetscalingStrategy()
{
    scalingStrategyIsSet_ = false;
}

int32_t ShowAutoScalingPolicyResponse::getMaxReadOnlyCount() const
{
    return maxReadOnlyCount_;
}

void ShowAutoScalingPolicyResponse::setMaxReadOnlyCount(int32_t value)
{
    maxReadOnlyCount_ = value;
    maxReadOnlyCountIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::maxReadOnlyCountIsSet() const
{
    return maxReadOnlyCountIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetmaxReadOnlyCount()
{
    maxReadOnlyCountIsSet_ = false;
}

int32_t ShowAutoScalingPolicyResponse::getMinReadOnlyCount() const
{
    return minReadOnlyCount_;
}

void ShowAutoScalingPolicyResponse::setMinReadOnlyCount(int32_t value)
{
    minReadOnlyCount_ = value;
    minReadOnlyCountIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::minReadOnlyCountIsSet() const
{
    return minReadOnlyCountIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetminReadOnlyCount()
{
    minReadOnlyCountIsSet_ = false;
}

int32_t ShowAutoScalingPolicyResponse::getReadOnlyWeight() const
{
    return readOnlyWeight_;
}

void ShowAutoScalingPolicyResponse::setReadOnlyWeight(int32_t value)
{
    readOnlyWeight_ = value;
    readOnlyWeightIsSet_ = true;
}

bool ShowAutoScalingPolicyResponse::readOnlyWeightIsSet() const
{
    return readOnlyWeightIsSet_;
}

void ShowAutoScalingPolicyResponse::unsetreadOnlyWeight()
{
    readOnlyWeightIsSet_ = false;
}

}
}
}
}
}


