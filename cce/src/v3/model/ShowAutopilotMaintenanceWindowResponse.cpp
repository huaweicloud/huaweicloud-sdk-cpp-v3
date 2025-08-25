

#include "huaweicloud/cce/v3/model/ShowAutopilotMaintenanceWindowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotMaintenanceWindowResponse::ShowAutopilotMaintenanceWindowResponse()
{
    weeklyPeriod_ = "";
    weeklyPeriodIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    durationHours_ = 0;
    durationHoursIsSet_ = false;
    upgradeScope_ = "";
    upgradeScopeIsSet_ = false;
}

ShowAutopilotMaintenanceWindowResponse::~ShowAutopilotMaintenanceWindowResponse() = default;

void ShowAutopilotMaintenanceWindowResponse::validate()
{
}

web::json::value ShowAutopilotMaintenanceWindowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weeklyPeriodIsSet_) {
        val[utility::conversions::to_string_t("weekly_period")] = ModelBase::toJson(weeklyPeriod_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(durationHoursIsSet_) {
        val[utility::conversions::to_string_t("duration_hours")] = ModelBase::toJson(durationHours_);
    }
    if(upgradeScopeIsSet_) {
        val[utility::conversions::to_string_t("upgrade_scope")] = ModelBase::toJson(upgradeScope_);
    }

    return val;
}
bool ShowAutopilotMaintenanceWindowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("weekly_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weekly_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeeklyPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDurationHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeScope(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotMaintenanceWindowResponse::getWeeklyPeriod() const
{
    return weeklyPeriod_;
}

void ShowAutopilotMaintenanceWindowResponse::setWeeklyPeriod(const std::string& value)
{
    weeklyPeriod_ = value;
    weeklyPeriodIsSet_ = true;
}

bool ShowAutopilotMaintenanceWindowResponse::weeklyPeriodIsSet() const
{
    return weeklyPeriodIsSet_;
}

void ShowAutopilotMaintenanceWindowResponse::unsetweeklyPeriod()
{
    weeklyPeriodIsSet_ = false;
}

std::string ShowAutopilotMaintenanceWindowResponse::getStartTime() const
{
    return startTime_;
}

void ShowAutopilotMaintenanceWindowResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAutopilotMaintenanceWindowResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAutopilotMaintenanceWindowResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowAutopilotMaintenanceWindowResponse::getDurationHours() const
{
    return durationHours_;
}

void ShowAutopilotMaintenanceWindowResponse::setDurationHours(int32_t value)
{
    durationHours_ = value;
    durationHoursIsSet_ = true;
}

bool ShowAutopilotMaintenanceWindowResponse::durationHoursIsSet() const
{
    return durationHoursIsSet_;
}

void ShowAutopilotMaintenanceWindowResponse::unsetdurationHours()
{
    durationHoursIsSet_ = false;
}

std::string ShowAutopilotMaintenanceWindowResponse::getUpgradeScope() const
{
    return upgradeScope_;
}

void ShowAutopilotMaintenanceWindowResponse::setUpgradeScope(const std::string& value)
{
    upgradeScope_ = value;
    upgradeScopeIsSet_ = true;
}

bool ShowAutopilotMaintenanceWindowResponse::upgradeScopeIsSet() const
{
    return upgradeScopeIsSet_;
}

void ShowAutopilotMaintenanceWindowResponse::unsetupgradeScope()
{
    upgradeScopeIsSet_ = false;
}

}
}
}
}
}


