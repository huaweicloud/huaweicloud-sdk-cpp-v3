

#include "huaweicloud/rds/v3/model/ReadOnlyScalingStrategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReadOnlyScalingStrategy::ReadOnlyScalingStrategy()
{
    readOnlyEnlargeEnabled_ = "";
    readOnlyEnlargeEnabledIsSet_ = false;
    readOnlyReduceEnabled_ = "";
    readOnlyReduceEnabledIsSet_ = false;
    readOnlyMonitorCycle_ = "";
    readOnlyMonitorCycleIsSet_ = false;
    readOnlySilenceCycle_ = "";
    readOnlySilenceCycleIsSet_ = false;
    maxReadOnlyCount_ = "";
    maxReadOnlyCountIsSet_ = false;
    readOnlyEnlargeThreshold_ = "";
    readOnlyEnlargeThresholdIsSet_ = false;
    readOnlyFlavor_ = "";
    readOnlyFlavorIsSet_ = false;
    minReadOnlyCount_ = "";
    minReadOnlyCountIsSet_ = false;
    readOnlyReduceThreshold_ = "";
    readOnlyReduceThresholdIsSet_ = false;
}

ReadOnlyScalingStrategy::~ReadOnlyScalingStrategy() = default;

void ReadOnlyScalingStrategy::validate()
{
}

web::json::value ReadOnlyScalingStrategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(readOnlyEnlargeEnabledIsSet_) {
        val[utility::conversions::to_string_t("read_only_enlarge_enabled")] = ModelBase::toJson(readOnlyEnlargeEnabled_);
    }
    if(readOnlyReduceEnabledIsSet_) {
        val[utility::conversions::to_string_t("read_only_reduce_enabled")] = ModelBase::toJson(readOnlyReduceEnabled_);
    }
    if(readOnlyMonitorCycleIsSet_) {
        val[utility::conversions::to_string_t("read_only_monitor_cycle")] = ModelBase::toJson(readOnlyMonitorCycle_);
    }
    if(readOnlySilenceCycleIsSet_) {
        val[utility::conversions::to_string_t("read_only_silence_cycle")] = ModelBase::toJson(readOnlySilenceCycle_);
    }
    if(maxReadOnlyCountIsSet_) {
        val[utility::conversions::to_string_t("max_read_only_count")] = ModelBase::toJson(maxReadOnlyCount_);
    }
    if(readOnlyEnlargeThresholdIsSet_) {
        val[utility::conversions::to_string_t("read_only_enlarge_threshold")] = ModelBase::toJson(readOnlyEnlargeThreshold_);
    }
    if(readOnlyFlavorIsSet_) {
        val[utility::conversions::to_string_t("read_only_flavor")] = ModelBase::toJson(readOnlyFlavor_);
    }
    if(minReadOnlyCountIsSet_) {
        val[utility::conversions::to_string_t("min_read_only_count")] = ModelBase::toJson(minReadOnlyCount_);
    }
    if(readOnlyReduceThresholdIsSet_) {
        val[utility::conversions::to_string_t("read_only_reduce_threshold")] = ModelBase::toJson(readOnlyReduceThreshold_);
    }

    return val;
}
bool ReadOnlyScalingStrategy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("read_only_enlarge_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_enlarge_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyEnlargeEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_reduce_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_reduce_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyReduceEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_monitor_cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_monitor_cycle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyMonitorCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_silence_cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_silence_cycle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlySilenceCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_read_only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_read_only_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReadOnlyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_enlarge_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_enlarge_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyEnlargeThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_read_only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_read_only_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinReadOnlyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_reduce_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_reduce_threshold"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyReduceThreshold(refVal);
        }
    }
    return ok;
}


std::string ReadOnlyScalingStrategy::getReadOnlyEnlargeEnabled() const
{
    return readOnlyEnlargeEnabled_;
}

void ReadOnlyScalingStrategy::setReadOnlyEnlargeEnabled(const std::string& value)
{
    readOnlyEnlargeEnabled_ = value;
    readOnlyEnlargeEnabledIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlyEnlargeEnabledIsSet() const
{
    return readOnlyEnlargeEnabledIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlyEnlargeEnabled()
{
    readOnlyEnlargeEnabledIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getReadOnlyReduceEnabled() const
{
    return readOnlyReduceEnabled_;
}

void ReadOnlyScalingStrategy::setReadOnlyReduceEnabled(const std::string& value)
{
    readOnlyReduceEnabled_ = value;
    readOnlyReduceEnabledIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlyReduceEnabledIsSet() const
{
    return readOnlyReduceEnabledIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlyReduceEnabled()
{
    readOnlyReduceEnabledIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getReadOnlyMonitorCycle() const
{
    return readOnlyMonitorCycle_;
}

void ReadOnlyScalingStrategy::setReadOnlyMonitorCycle(const std::string& value)
{
    readOnlyMonitorCycle_ = value;
    readOnlyMonitorCycleIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlyMonitorCycleIsSet() const
{
    return readOnlyMonitorCycleIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlyMonitorCycle()
{
    readOnlyMonitorCycleIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getReadOnlySilenceCycle() const
{
    return readOnlySilenceCycle_;
}

void ReadOnlyScalingStrategy::setReadOnlySilenceCycle(const std::string& value)
{
    readOnlySilenceCycle_ = value;
    readOnlySilenceCycleIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlySilenceCycleIsSet() const
{
    return readOnlySilenceCycleIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlySilenceCycle()
{
    readOnlySilenceCycleIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getMaxReadOnlyCount() const
{
    return maxReadOnlyCount_;
}

void ReadOnlyScalingStrategy::setMaxReadOnlyCount(const std::string& value)
{
    maxReadOnlyCount_ = value;
    maxReadOnlyCountIsSet_ = true;
}

bool ReadOnlyScalingStrategy::maxReadOnlyCountIsSet() const
{
    return maxReadOnlyCountIsSet_;
}

void ReadOnlyScalingStrategy::unsetmaxReadOnlyCount()
{
    maxReadOnlyCountIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getReadOnlyEnlargeThreshold() const
{
    return readOnlyEnlargeThreshold_;
}

void ReadOnlyScalingStrategy::setReadOnlyEnlargeThreshold(const std::string& value)
{
    readOnlyEnlargeThreshold_ = value;
    readOnlyEnlargeThresholdIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlyEnlargeThresholdIsSet() const
{
    return readOnlyEnlargeThresholdIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlyEnlargeThreshold()
{
    readOnlyEnlargeThresholdIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getReadOnlyFlavor() const
{
    return readOnlyFlavor_;
}

void ReadOnlyScalingStrategy::setReadOnlyFlavor(const std::string& value)
{
    readOnlyFlavor_ = value;
    readOnlyFlavorIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlyFlavorIsSet() const
{
    return readOnlyFlavorIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlyFlavor()
{
    readOnlyFlavorIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getMinReadOnlyCount() const
{
    return minReadOnlyCount_;
}

void ReadOnlyScalingStrategy::setMinReadOnlyCount(const std::string& value)
{
    minReadOnlyCount_ = value;
    minReadOnlyCountIsSet_ = true;
}

bool ReadOnlyScalingStrategy::minReadOnlyCountIsSet() const
{
    return minReadOnlyCountIsSet_;
}

void ReadOnlyScalingStrategy::unsetminReadOnlyCount()
{
    minReadOnlyCountIsSet_ = false;
}

std::string ReadOnlyScalingStrategy::getReadOnlyReduceThreshold() const
{
    return readOnlyReduceThreshold_;
}

void ReadOnlyScalingStrategy::setReadOnlyReduceThreshold(const std::string& value)
{
    readOnlyReduceThreshold_ = value;
    readOnlyReduceThresholdIsSet_ = true;
}

bool ReadOnlyScalingStrategy::readOnlyReduceThresholdIsSet() const
{
    return readOnlyReduceThresholdIsSet_;
}

void ReadOnlyScalingStrategy::unsetreadOnlyReduceThreshold()
{
    readOnlyReduceThresholdIsSet_ = false;
}

}
}
}
}
}


