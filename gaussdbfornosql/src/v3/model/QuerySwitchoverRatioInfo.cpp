

#include "huaweicloud/gaussdbfornosql/v3/model/QuerySwitchoverRatioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QuerySwitchoverRatioInfo::QuerySwitchoverRatioInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    switchoverRatio_ = 0;
    switchoverRatioIsSet_ = false;
    syncDelay_ = 0L;
    syncDelayIsSet_ = false;
}

QuerySwitchoverRatioInfo::~QuerySwitchoverRatioInfo() = default;

void QuerySwitchoverRatioInfo::validate()
{
}

web::json::value QuerySwitchoverRatioInfo::toJson() const
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
bool QuerySwitchoverRatioInfo::fromJson(const web::json::value& val)
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


std::string QuerySwitchoverRatioInfo::getInstanceId() const
{
    return instanceId_;
}

void QuerySwitchoverRatioInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool QuerySwitchoverRatioInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void QuerySwitchoverRatioInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t QuerySwitchoverRatioInfo::getSwitchoverRatio() const
{
    return switchoverRatio_;
}

void QuerySwitchoverRatioInfo::setSwitchoverRatio(int32_t value)
{
    switchoverRatio_ = value;
    switchoverRatioIsSet_ = true;
}

bool QuerySwitchoverRatioInfo::switchoverRatioIsSet() const
{
    return switchoverRatioIsSet_;
}

void QuerySwitchoverRatioInfo::unsetswitchoverRatio()
{
    switchoverRatioIsSet_ = false;
}

int64_t QuerySwitchoverRatioInfo::getSyncDelay() const
{
    return syncDelay_;
}

void QuerySwitchoverRatioInfo::setSyncDelay(int64_t value)
{
    syncDelay_ = value;
    syncDelayIsSet_ = true;
}

bool QuerySwitchoverRatioInfo::syncDelayIsSet() const
{
    return syncDelayIsSet_;
}

void QuerySwitchoverRatioInfo::unsetsyncDelay()
{
    syncDelayIsSet_ = false;
}

}
}
}
}
}


