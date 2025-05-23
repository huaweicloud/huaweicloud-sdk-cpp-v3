

#include "huaweicloud/dds/v3/model/BackupPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BackupPolicy::BackupPolicy()
{
    keepDays_ = "";
    keepDaysIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    enableIncrementalBackup_ = false;
    enableIncrementalBackupIsSet_ = false;
}

BackupPolicy::~BackupPolicy() = default;

void BackupPolicy::validate()
{
}

web::json::value BackupPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(enableIncrementalBackupIsSet_) {
        val[utility::conversions::to_string_t("enable_incremental_backup")] = ModelBase::toJson(enableIncrementalBackup_);
    }

    return val;
}
bool BackupPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_incremental_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_incremental_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableIncrementalBackup(refVal);
        }
    }
    return ok;
}


std::string BackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void BackupPolicy::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupPolicy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupPolicy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string BackupPolicy::getStartTime() const
{
    return startTime_;
}

void BackupPolicy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupPolicy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupPolicy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BackupPolicy::getPeriod() const
{
    return period_;
}

void BackupPolicy::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool BackupPolicy::periodIsSet() const
{
    return periodIsSet_;
}

void BackupPolicy::unsetperiod()
{
    periodIsSet_ = false;
}

bool BackupPolicy::isEnableIncrementalBackup() const
{
    return enableIncrementalBackup_;
}

void BackupPolicy::setEnableIncrementalBackup(bool value)
{
    enableIncrementalBackup_ = value;
    enableIncrementalBackupIsSet_ = true;
}

bool BackupPolicy::enableIncrementalBackupIsSet() const
{
    return enableIncrementalBackupIsSet_;
}

void BackupPolicy::unsetenableIncrementalBackup()
{
    enableIncrementalBackupIsSet_ = false;
}

}
}
}
}
}


