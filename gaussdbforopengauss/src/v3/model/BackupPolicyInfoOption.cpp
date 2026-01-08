

#include "huaweicloud/gaussdbforopengauss/v3/model/BackupPolicyInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BackupPolicyInfoOption::BackupPolicyInfoOption()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    differentialPeriod_ = "";
    differentialPeriodIsSet_ = false;
    rateLimit_ = 0;
    rateLimitIsSet_ = false;
    prefetchBlock_ = 0;
    prefetchBlockIsSet_ = false;
    fileSplitSize_ = 0;
    fileSplitSizeIsSet_ = false;
    enableStandbyBackup_ = false;
    enableStandbyBackupIsSet_ = false;
}

BackupPolicyInfoOption::~BackupPolicyInfoOption() = default;

void BackupPolicyInfoOption::validate()
{
}

web::json::value BackupPolicyInfoOption::toJson() const
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
    if(differentialPeriodIsSet_) {
        val[utility::conversions::to_string_t("differential_period")] = ModelBase::toJson(differentialPeriod_);
    }
    if(rateLimitIsSet_) {
        val[utility::conversions::to_string_t("rate_limit")] = ModelBase::toJson(rateLimit_);
    }
    if(prefetchBlockIsSet_) {
        val[utility::conversions::to_string_t("prefetch_block")] = ModelBase::toJson(prefetchBlock_);
    }
    if(fileSplitSizeIsSet_) {
        val[utility::conversions::to_string_t("file_split_size")] = ModelBase::toJson(fileSplitSize_);
    }
    if(enableStandbyBackupIsSet_) {
        val[utility::conversions::to_string_t("enable_standby_backup")] = ModelBase::toJson(enableStandbyBackup_);
    }

    return val;
}
bool BackupPolicyInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("differential_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("differential_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferentialPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rate_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rate_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRateLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefetch_block"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefetch_block"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefetchBlock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_split_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_split_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSplitSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_standby_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_standby_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableStandbyBackup(refVal);
        }
    }
    return ok;
}


int32_t BackupPolicyInfoOption::getKeepDays() const
{
    return keepDays_;
}

void BackupPolicyInfoOption::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BackupPolicyInfoOption::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BackupPolicyInfoOption::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string BackupPolicyInfoOption::getStartTime() const
{
    return startTime_;
}

void BackupPolicyInfoOption::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupPolicyInfoOption::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupPolicyInfoOption::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BackupPolicyInfoOption::getPeriod() const
{
    return period_;
}

void BackupPolicyInfoOption::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool BackupPolicyInfoOption::periodIsSet() const
{
    return periodIsSet_;
}

void BackupPolicyInfoOption::unsetperiod()
{
    periodIsSet_ = false;
}

std::string BackupPolicyInfoOption::getDifferentialPeriod() const
{
    return differentialPeriod_;
}

void BackupPolicyInfoOption::setDifferentialPeriod(const std::string& value)
{
    differentialPeriod_ = value;
    differentialPeriodIsSet_ = true;
}

bool BackupPolicyInfoOption::differentialPeriodIsSet() const
{
    return differentialPeriodIsSet_;
}

void BackupPolicyInfoOption::unsetdifferentialPeriod()
{
    differentialPeriodIsSet_ = false;
}

int32_t BackupPolicyInfoOption::getRateLimit() const
{
    return rateLimit_;
}

void BackupPolicyInfoOption::setRateLimit(int32_t value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool BackupPolicyInfoOption::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void BackupPolicyInfoOption::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t BackupPolicyInfoOption::getPrefetchBlock() const
{
    return prefetchBlock_;
}

void BackupPolicyInfoOption::setPrefetchBlock(int32_t value)
{
    prefetchBlock_ = value;
    prefetchBlockIsSet_ = true;
}

bool BackupPolicyInfoOption::prefetchBlockIsSet() const
{
    return prefetchBlockIsSet_;
}

void BackupPolicyInfoOption::unsetprefetchBlock()
{
    prefetchBlockIsSet_ = false;
}

int32_t BackupPolicyInfoOption::getFileSplitSize() const
{
    return fileSplitSize_;
}

void BackupPolicyInfoOption::setFileSplitSize(int32_t value)
{
    fileSplitSize_ = value;
    fileSplitSizeIsSet_ = true;
}

bool BackupPolicyInfoOption::fileSplitSizeIsSet() const
{
    return fileSplitSizeIsSet_;
}

void BackupPolicyInfoOption::unsetfileSplitSize()
{
    fileSplitSizeIsSet_ = false;
}

bool BackupPolicyInfoOption::isEnableStandbyBackup() const
{
    return enableStandbyBackup_;
}

void BackupPolicyInfoOption::setEnableStandbyBackup(bool value)
{
    enableStandbyBackup_ = value;
    enableStandbyBackupIsSet_ = true;
}

bool BackupPolicyInfoOption::enableStandbyBackupIsSet() const
{
    return enableStandbyBackupIsSet_;
}

void BackupPolicyInfoOption::unsetenableStandbyBackup()
{
    enableStandbyBackupIsSet_ = false;
}

}
}
}
}
}


