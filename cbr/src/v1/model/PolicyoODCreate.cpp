

#include "huaweicloud/cbr/v1/model/PolicyoODCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyoODCreate::PolicyoODCreate()
{
    dayBackups_ = 0;
    dayBackupsIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    enableAcceleration_ = false;
    enableAccelerationIsSet_ = false;
    maxBackups_ = 0;
    maxBackupsIsSet_ = false;
    monthBackups_ = 0;
    monthBackupsIsSet_ = false;
    retentionDurationDays_ = 0;
    retentionDurationDaysIsSet_ = false;
    timezone_ = "";
    timezoneIsSet_ = false;
    weekBackups_ = 0;
    weekBackupsIsSet_ = false;
    yearBackups_ = 0;
    yearBackupsIsSet_ = false;
    fullBackupInterval_ = 0;
    fullBackupIntervalIsSet_ = false;
}

PolicyoODCreate::~PolicyoODCreate() = default;

void PolicyoODCreate::validate()
{
}

web::json::value PolicyoODCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dayBackupsIsSet_) {
        val[utility::conversions::to_string_t("day_backups")] = ModelBase::toJson(dayBackups_);
    }
    if(destinationProjectIdIsSet_) {
        val[utility::conversions::to_string_t("destination_project_id")] = ModelBase::toJson(destinationProjectId_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(enableAccelerationIsSet_) {
        val[utility::conversions::to_string_t("enable_acceleration")] = ModelBase::toJson(enableAcceleration_);
    }
    if(maxBackupsIsSet_) {
        val[utility::conversions::to_string_t("max_backups")] = ModelBase::toJson(maxBackups_);
    }
    if(monthBackupsIsSet_) {
        val[utility::conversions::to_string_t("month_backups")] = ModelBase::toJson(monthBackups_);
    }
    if(retentionDurationDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_duration_days")] = ModelBase::toJson(retentionDurationDays_);
    }
    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }
    if(weekBackupsIsSet_) {
        val[utility::conversions::to_string_t("week_backups")] = ModelBase::toJson(weekBackups_);
    }
    if(yearBackupsIsSet_) {
        val[utility::conversions::to_string_t("year_backups")] = ModelBase::toJson(yearBackups_);
    }
    if(fullBackupIntervalIsSet_) {
        val[utility::conversions::to_string_t("full_backup_interval")] = ModelBase::toJson(fullBackupInterval_);
    }

    return val;
}

bool PolicyoODCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("day_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("day_backups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDayBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_acceleration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_acceleration"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAcceleration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_backups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("month_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("month_backups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMonthBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_duration_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_duration_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDurationDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("week_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("week_backups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeekBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("year_backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("year_backups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYearBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_backup_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_backup_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullBackupInterval(refVal);
        }
    }
    return ok;
}


int32_t PolicyoODCreate::getDayBackups() const
{
    return dayBackups_;
}

void PolicyoODCreate::setDayBackups(int32_t value)
{
    dayBackups_ = value;
    dayBackupsIsSet_ = true;
}

bool PolicyoODCreate::dayBackupsIsSet() const
{
    return dayBackupsIsSet_;
}

void PolicyoODCreate::unsetdayBackups()
{
    dayBackupsIsSet_ = false;
}

std::string PolicyoODCreate::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void PolicyoODCreate::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool PolicyoODCreate::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void PolicyoODCreate::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string PolicyoODCreate::getDestinationRegion() const
{
    return destinationRegion_;
}

void PolicyoODCreate::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool PolicyoODCreate::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void PolicyoODCreate::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

bool PolicyoODCreate::isEnableAcceleration() const
{
    return enableAcceleration_;
}

void PolicyoODCreate::setEnableAcceleration(bool value)
{
    enableAcceleration_ = value;
    enableAccelerationIsSet_ = true;
}

bool PolicyoODCreate::enableAccelerationIsSet() const
{
    return enableAccelerationIsSet_;
}

void PolicyoODCreate::unsetenableAcceleration()
{
    enableAccelerationIsSet_ = false;
}

int32_t PolicyoODCreate::getMaxBackups() const
{
    return maxBackups_;
}

void PolicyoODCreate::setMaxBackups(int32_t value)
{
    maxBackups_ = value;
    maxBackupsIsSet_ = true;
}

bool PolicyoODCreate::maxBackupsIsSet() const
{
    return maxBackupsIsSet_;
}

void PolicyoODCreate::unsetmaxBackups()
{
    maxBackupsIsSet_ = false;
}

int32_t PolicyoODCreate::getMonthBackups() const
{
    return monthBackups_;
}

void PolicyoODCreate::setMonthBackups(int32_t value)
{
    monthBackups_ = value;
    monthBackupsIsSet_ = true;
}

bool PolicyoODCreate::monthBackupsIsSet() const
{
    return monthBackupsIsSet_;
}

void PolicyoODCreate::unsetmonthBackups()
{
    monthBackupsIsSet_ = false;
}

int32_t PolicyoODCreate::getRetentionDurationDays() const
{
    return retentionDurationDays_;
}

void PolicyoODCreate::setRetentionDurationDays(int32_t value)
{
    retentionDurationDays_ = value;
    retentionDurationDaysIsSet_ = true;
}

bool PolicyoODCreate::retentionDurationDaysIsSet() const
{
    return retentionDurationDaysIsSet_;
}

void PolicyoODCreate::unsetretentionDurationDays()
{
    retentionDurationDaysIsSet_ = false;
}

std::string PolicyoODCreate::getTimezone() const
{
    return timezone_;
}

void PolicyoODCreate::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool PolicyoODCreate::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void PolicyoODCreate::unsettimezone()
{
    timezoneIsSet_ = false;
}

int32_t PolicyoODCreate::getWeekBackups() const
{
    return weekBackups_;
}

void PolicyoODCreate::setWeekBackups(int32_t value)
{
    weekBackups_ = value;
    weekBackupsIsSet_ = true;
}

bool PolicyoODCreate::weekBackupsIsSet() const
{
    return weekBackupsIsSet_;
}

void PolicyoODCreate::unsetweekBackups()
{
    weekBackupsIsSet_ = false;
}

int32_t PolicyoODCreate::getYearBackups() const
{
    return yearBackups_;
}

void PolicyoODCreate::setYearBackups(int32_t value)
{
    yearBackups_ = value;
    yearBackupsIsSet_ = true;
}

bool PolicyoODCreate::yearBackupsIsSet() const
{
    return yearBackupsIsSet_;
}

void PolicyoODCreate::unsetyearBackups()
{
    yearBackupsIsSet_ = false;
}

int32_t PolicyoODCreate::getFullBackupInterval() const
{
    return fullBackupInterval_;
}

void PolicyoODCreate::setFullBackupInterval(int32_t value)
{
    fullBackupInterval_ = value;
    fullBackupIntervalIsSet_ = true;
}

bool PolicyoODCreate::fullBackupIntervalIsSet() const
{
    return fullBackupIntervalIsSet_;
}

void PolicyoODCreate::unsetfullBackupInterval()
{
    fullBackupIntervalIsSet_ = false;
}

}
}
}
}
}


