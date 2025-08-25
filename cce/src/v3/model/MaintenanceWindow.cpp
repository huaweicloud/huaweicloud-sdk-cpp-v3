

#include "huaweicloud/cce/v3/model/MaintenanceWindow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MaintenanceWindow::MaintenanceWindow()
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

MaintenanceWindow::~MaintenanceWindow() = default;

void MaintenanceWindow::validate()
{
}

web::json::value MaintenanceWindow::toJson() const
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
bool MaintenanceWindow::fromJson(const web::json::value& val)
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


std::string MaintenanceWindow::getWeeklyPeriod() const
{
    return weeklyPeriod_;
}

void MaintenanceWindow::setWeeklyPeriod(const std::string& value)
{
    weeklyPeriod_ = value;
    weeklyPeriodIsSet_ = true;
}

bool MaintenanceWindow::weeklyPeriodIsSet() const
{
    return weeklyPeriodIsSet_;
}

void MaintenanceWindow::unsetweeklyPeriod()
{
    weeklyPeriodIsSet_ = false;
}

std::string MaintenanceWindow::getStartTime() const
{
    return startTime_;
}

void MaintenanceWindow::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool MaintenanceWindow::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void MaintenanceWindow::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t MaintenanceWindow::getDurationHours() const
{
    return durationHours_;
}

void MaintenanceWindow::setDurationHours(int32_t value)
{
    durationHours_ = value;
    durationHoursIsSet_ = true;
}

bool MaintenanceWindow::durationHoursIsSet() const
{
    return durationHoursIsSet_;
}

void MaintenanceWindow::unsetdurationHours()
{
    durationHoursIsSet_ = false;
}

std::string MaintenanceWindow::getUpgradeScope() const
{
    return upgradeScope_;
}

void MaintenanceWindow::setUpgradeScope(const std::string& value)
{
    upgradeScope_ = value;
    upgradeScopeIsSet_ = true;
}

bool MaintenanceWindow::upgradeScopeIsSet() const
{
    return upgradeScopeIsSet_;
}

void MaintenanceWindow::unsetupgradeScope()
{
    upgradeScopeIsSet_ = false;
}

}
}
}
}
}


