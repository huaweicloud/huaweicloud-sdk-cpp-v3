

#include "huaweicloud/gaussdbfornosql/v3/model/SetSwitchoverRatioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetSwitchoverRatioInfo::SetSwitchoverRatioInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    switchoverRatio_ = 0;
    switchoverRatioIsSet_ = false;
    syncDelay_ = 0L;
    syncDelayIsSet_ = false;
}

SetSwitchoverRatioInfo::~SetSwitchoverRatioInfo() = default;

void SetSwitchoverRatioInfo::validate()
{
}

web::json::value SetSwitchoverRatioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(switchoverRatioIsSet_) {
        val[utility::conversions::to_string_t("switchover_ratio")] = ModelBase::toJson(switchoverRatio_);
    }
    if(syncDelayIsSet_) {
        val[utility::conversions::to_string_t("sync_delay")] = ModelBase::toJson(syncDelay_);
    }

    return val;
}
bool SetSwitchoverRatioInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("switchover_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchover_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchoverRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncDelay(refVal);
        }
    }
    return ok;
}


std::string SetSwitchoverRatioInfo::getInstanceId() const
{
    return instanceId_;
}

void SetSwitchoverRatioInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSwitchoverRatioInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSwitchoverRatioInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t SetSwitchoverRatioInfo::getSwitchoverRatio() const
{
    return switchoverRatio_;
}

void SetSwitchoverRatioInfo::setSwitchoverRatio(int32_t value)
{
    switchoverRatio_ = value;
    switchoverRatioIsSet_ = true;
}

bool SetSwitchoverRatioInfo::switchoverRatioIsSet() const
{
    return switchoverRatioIsSet_;
}

void SetSwitchoverRatioInfo::unsetswitchoverRatio()
{
    switchoverRatioIsSet_ = false;
}

int64_t SetSwitchoverRatioInfo::getSyncDelay() const
{
    return syncDelay_;
}

void SetSwitchoverRatioInfo::setSyncDelay(int64_t value)
{
    syncDelay_ = value;
    syncDelayIsSet_ = true;
}

bool SetSwitchoverRatioInfo::syncDelayIsSet() const
{
    return syncDelayIsSet_;
}

void SetSwitchoverRatioInfo::unsetsyncDelay()
{
    syncDelayIsSet_ = false;
}

}
}
}
}
}


