

#include "huaweicloud/rds/v3/model/ListAutoScalingPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAutoScalingPolicyResponse::ListAutoScalingPolicyResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
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
}

ListAutoScalingPolicyResponse::~ListAutoScalingPolicyResponse() = default;

void ListAutoScalingPolicyResponse::validate()
{
}

web::json::value ListAutoScalingPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
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
    if(reduceThresholdIsSet_) {
        val[utility::conversions::to_string_t("reduce_threshold")] = ModelBase::toJson(reduceThreshold_);
    }
    if(minFlavorIsSet_) {
        val[utility::conversions::to_string_t("min_flavor")] = ModelBase::toJson(minFlavor_);
    }

    return val;
}
bool ListAutoScalingPolicyResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListAutoScalingPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void ListAutoScalingPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAutoScalingPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAutoScalingPolicyResponse::getStatus() const
{
    return status_;
}

void ListAutoScalingPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAutoScalingPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListAutoScalingPolicyResponse::getMonitorCycle() const
{
    return monitorCycle_;
}

void ListAutoScalingPolicyResponse::setMonitorCycle(int32_t value)
{
    monitorCycle_ = value;
    monitorCycleIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::monitorCycleIsSet() const
{
    return monitorCycleIsSet_;
}

void ListAutoScalingPolicyResponse::unsetmonitorCycle()
{
    monitorCycleIsSet_ = false;
}

int32_t ListAutoScalingPolicyResponse::getSilenceCycle() const
{
    return silenceCycle_;
}

void ListAutoScalingPolicyResponse::setSilenceCycle(int32_t value)
{
    silenceCycle_ = value;
    silenceCycleIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::silenceCycleIsSet() const
{
    return silenceCycleIsSet_;
}

void ListAutoScalingPolicyResponse::unsetsilenceCycle()
{
    silenceCycleIsSet_ = false;
}

int32_t ListAutoScalingPolicyResponse::getEnlargeThreshold() const
{
    return enlargeThreshold_;
}

void ListAutoScalingPolicyResponse::setEnlargeThreshold(int32_t value)
{
    enlargeThreshold_ = value;
    enlargeThresholdIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::enlargeThresholdIsSet() const
{
    return enlargeThresholdIsSet_;
}

void ListAutoScalingPolicyResponse::unsetenlargeThreshold()
{
    enlargeThresholdIsSet_ = false;
}

std::string ListAutoScalingPolicyResponse::getMaxFlavor() const
{
    return maxFlavor_;
}

void ListAutoScalingPolicyResponse::setMaxFlavor(const std::string& value)
{
    maxFlavor_ = value;
    maxFlavorIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::maxFlavorIsSet() const
{
    return maxFlavorIsSet_;
}

void ListAutoScalingPolicyResponse::unsetmaxFlavor()
{
    maxFlavorIsSet_ = false;
}

std::string ListAutoScalingPolicyResponse::getReduceEnabled() const
{
    return reduceEnabled_;
}

void ListAutoScalingPolicyResponse::setReduceEnabled(const std::string& value)
{
    reduceEnabled_ = value;
    reduceEnabledIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::reduceEnabledIsSet() const
{
    return reduceEnabledIsSet_;
}

void ListAutoScalingPolicyResponse::unsetreduceEnabled()
{
    reduceEnabledIsSet_ = false;
}

int32_t ListAutoScalingPolicyResponse::getReduceThreshold() const
{
    return reduceThreshold_;
}

void ListAutoScalingPolicyResponse::setReduceThreshold(int32_t value)
{
    reduceThreshold_ = value;
    reduceThresholdIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::reduceThresholdIsSet() const
{
    return reduceThresholdIsSet_;
}

void ListAutoScalingPolicyResponse::unsetreduceThreshold()
{
    reduceThresholdIsSet_ = false;
}

std::string ListAutoScalingPolicyResponse::getMinFlavor() const
{
    return minFlavor_;
}

void ListAutoScalingPolicyResponse::setMinFlavor(const std::string& value)
{
    minFlavor_ = value;
    minFlavorIsSet_ = true;
}

bool ListAutoScalingPolicyResponse::minFlavorIsSet() const
{
    return minFlavorIsSet_;
}

void ListAutoScalingPolicyResponse::unsetminFlavor()
{
    minFlavorIsSet_ = false;
}

}
}
}
}
}


