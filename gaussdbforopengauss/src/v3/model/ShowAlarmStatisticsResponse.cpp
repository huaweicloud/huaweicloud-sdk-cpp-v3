

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAlarmStatisticsResponse::ShowAlarmStatisticsResponse()
{
    totalAlarmCount_ = 0;
    totalAlarmCountIsSet_ = false;
    ringPercentage_ = 0.0;
    ringPercentageIsSet_ = false;
    instanceAlarmLevelStatisticsIsSet_ = false;
    totalAlarmLevelStatisticsIsSet_ = false;
}

ShowAlarmStatisticsResponse::~ShowAlarmStatisticsResponse() = default;

void ShowAlarmStatisticsResponse::validate()
{
}

web::json::value ShowAlarmStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalAlarmCountIsSet_) {
        val[utility::conversions::to_string_t("total_alarm_count")] = ModelBase::toJson(totalAlarmCount_);
    }
    if(ringPercentageIsSet_) {
        val[utility::conversions::to_string_t("ring_percentage")] = ModelBase::toJson(ringPercentage_);
    }
    if(instanceAlarmLevelStatisticsIsSet_) {
        val[utility::conversions::to_string_t("instance_alarm_level_statistics")] = ModelBase::toJson(instanceAlarmLevelStatistics_);
    }
    if(totalAlarmLevelStatisticsIsSet_) {
        val[utility::conversions::to_string_t("total_alarm_level_statistics")] = ModelBase::toJson(totalAlarmLevelStatistics_);
    }

    return val;
}
bool ShowAlarmStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_alarm_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_alarm_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAlarmCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ring_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ring_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRingPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_alarm_level_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_alarm_level_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceAlarmLevelStatisticResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceAlarmLevelStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_alarm_level_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_alarm_level_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<AlarmLevelStatisticsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAlarmLevelStatistics(refVal);
        }
    }
    return ok;
}


int32_t ShowAlarmStatisticsResponse::getTotalAlarmCount() const
{
    return totalAlarmCount_;
}

void ShowAlarmStatisticsResponse::setTotalAlarmCount(int32_t value)
{
    totalAlarmCount_ = value;
    totalAlarmCountIsSet_ = true;
}

bool ShowAlarmStatisticsResponse::totalAlarmCountIsSet() const
{
    return totalAlarmCountIsSet_;
}

void ShowAlarmStatisticsResponse::unsettotalAlarmCount()
{
    totalAlarmCountIsSet_ = false;
}

double ShowAlarmStatisticsResponse::getRingPercentage() const
{
    return ringPercentage_;
}

void ShowAlarmStatisticsResponse::setRingPercentage(double value)
{
    ringPercentage_ = value;
    ringPercentageIsSet_ = true;
}

bool ShowAlarmStatisticsResponse::ringPercentageIsSet() const
{
    return ringPercentageIsSet_;
}

void ShowAlarmStatisticsResponse::unsetringPercentage()
{
    ringPercentageIsSet_ = false;
}

std::vector<InstanceAlarmLevelStatisticResult>& ShowAlarmStatisticsResponse::getInstanceAlarmLevelStatistics()
{
    return instanceAlarmLevelStatistics_;
}

void ShowAlarmStatisticsResponse::setInstanceAlarmLevelStatistics(const std::vector<InstanceAlarmLevelStatisticResult>& value)
{
    instanceAlarmLevelStatistics_ = value;
    instanceAlarmLevelStatisticsIsSet_ = true;
}

bool ShowAlarmStatisticsResponse::instanceAlarmLevelStatisticsIsSet() const
{
    return instanceAlarmLevelStatisticsIsSet_;
}

void ShowAlarmStatisticsResponse::unsetinstanceAlarmLevelStatistics()
{
    instanceAlarmLevelStatisticsIsSet_ = false;
}

std::vector<AlarmLevelStatisticsResult>& ShowAlarmStatisticsResponse::getTotalAlarmLevelStatistics()
{
    return totalAlarmLevelStatistics_;
}

void ShowAlarmStatisticsResponse::setTotalAlarmLevelStatistics(const std::vector<AlarmLevelStatisticsResult>& value)
{
    totalAlarmLevelStatistics_ = value;
    totalAlarmLevelStatisticsIsSet_ = true;
}

bool ShowAlarmStatisticsResponse::totalAlarmLevelStatisticsIsSet() const
{
    return totalAlarmLevelStatisticsIsSet_;
}

void ShowAlarmStatisticsResponse::unsettotalAlarmLevelStatistics()
{
    totalAlarmLevelStatisticsIsSet_ = false;
}

}
}
}
}
}


