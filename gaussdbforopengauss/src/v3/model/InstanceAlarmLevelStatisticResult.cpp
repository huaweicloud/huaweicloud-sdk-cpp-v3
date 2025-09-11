

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceAlarmLevelStatisticResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceAlarmLevelStatisticResult::InstanceAlarmLevelStatisticResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    alarmLevelStatisticsIsSet_ = false;
}

InstanceAlarmLevelStatisticResult::~InstanceAlarmLevelStatisticResult() = default;

void InstanceAlarmLevelStatisticResult::validate()
{
}

web::json::value InstanceAlarmLevelStatisticResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(alarmLevelStatisticsIsSet_) {
        val[utility::conversions::to_string_t("alarm_level_statistics")] = ModelBase::toJson(alarmLevelStatistics_);
    }

    return val;
}
bool InstanceAlarmLevelStatisticResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_level_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_level_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<AlarmLevelStatisticsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLevelStatistics(refVal);
        }
    }
    return ok;
}


std::string InstanceAlarmLevelStatisticResult::getInstanceId() const
{
    return instanceId_;
}

void InstanceAlarmLevelStatisticResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceAlarmLevelStatisticResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceAlarmLevelStatisticResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceAlarmLevelStatisticResult::getInstanceName() const
{
    return instanceName_;
}

void InstanceAlarmLevelStatisticResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstanceAlarmLevelStatisticResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstanceAlarmLevelStatisticResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int32_t InstanceAlarmLevelStatisticResult::getTotalCount() const
{
    return totalCount_;
}

void InstanceAlarmLevelStatisticResult::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool InstanceAlarmLevelStatisticResult::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void InstanceAlarmLevelStatisticResult::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AlarmLevelStatisticsResult>& InstanceAlarmLevelStatisticResult::getAlarmLevelStatistics()
{
    return alarmLevelStatistics_;
}

void InstanceAlarmLevelStatisticResult::setAlarmLevelStatistics(const std::vector<AlarmLevelStatisticsResult>& value)
{
    alarmLevelStatistics_ = value;
    alarmLevelStatisticsIsSet_ = true;
}

bool InstanceAlarmLevelStatisticResult::alarmLevelStatisticsIsSet() const
{
    return alarmLevelStatisticsIsSet_;
}

void InstanceAlarmLevelStatisticResult::unsetalarmLevelStatistics()
{
    alarmLevelStatisticsIsSet_ = false;
}

}
}
}
}
}


