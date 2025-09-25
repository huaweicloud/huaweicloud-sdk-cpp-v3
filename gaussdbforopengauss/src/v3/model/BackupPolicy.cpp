

#include "huaweicloud/gaussdbforopengauss/v3/model/BackupPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BackupPolicy::BackupPolicy()
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
    filesplitSize_ = 0;
    filesplitSizeIsSet_ = false;
    enableStandbyBackup_ = false;
    enableStandbyBackupIsSet_ = false;
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
    if(filesplitSizeIsSet_) {
        val[utility::conversions::to_string_t("filesplit_size")] = ModelBase::toJson(filesplitSize_);
    }
    if(enableStandbyBackupIsSet_) {
        val[utility::conversions::to_string_t("enable_standby_backup")] = ModelBase::toJson(enableStandbyBackup_);
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
    if(val.has_field(utility::conversions::to_string_t("filesplit_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filesplit_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesplitSize(refVal);
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


int32_t BackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void BackupPolicy::setKeepDays(int32_t value)
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

std::string BackupPolicy::getDifferentialPeriod() const
{
    return differentialPeriod_;
}

void BackupPolicy::setDifferentialPeriod(const std::string& value)
{
    differentialPeriod_ = value;
    differentialPeriodIsSet_ = true;
}

bool BackupPolicy::differentialPeriodIsSet() const
{
    return differentialPeriodIsSet_;
}

void BackupPolicy::unsetdifferentialPeriod()
{
    differentialPeriodIsSet_ = false;
}

int32_t BackupPolicy::getRateLimit() const
{
    return rateLimit_;
}

void BackupPolicy::setRateLimit(int32_t value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool BackupPolicy::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void BackupPolicy::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t BackupPolicy::getPrefetchBlock() const
{
    return prefetchBlock_;
}

void BackupPolicy::setPrefetchBlock(int32_t value)
{
    prefetchBlock_ = value;
    prefetchBlockIsSet_ = true;
}

bool BackupPolicy::prefetchBlockIsSet() const
{
    return prefetchBlockIsSet_;
}

void BackupPolicy::unsetprefetchBlock()
{
    prefetchBlockIsSet_ = false;
}

int32_t BackupPolicy::getFileSplitSize() const
{
    return fileSplitSize_;
}

void BackupPolicy::setFileSplitSize(int32_t value)
{
    fileSplitSize_ = value;
    fileSplitSizeIsSet_ = true;
}

bool BackupPolicy::fileSplitSizeIsSet() const
{
    return fileSplitSizeIsSet_;
}

void BackupPolicy::unsetfileSplitSize()
{
    fileSplitSizeIsSet_ = false;
}

int32_t BackupPolicy::getFilesplitSize() const
{
    return filesplitSize_;
}

void BackupPolicy::setFilesplitSize(int32_t value)
{
    filesplitSize_ = value;
    filesplitSizeIsSet_ = true;
}

bool BackupPolicy::filesplitSizeIsSet() const
{
    return filesplitSizeIsSet_;
}

void BackupPolicy::unsetfilesplitSize()
{
    filesplitSizeIsSet_ = false;
}

bool BackupPolicy::isEnableStandbyBackup() const
{
    return enableStandbyBackup_;
}

void BackupPolicy::setEnableStandbyBackup(bool value)
{
    enableStandbyBackup_ = value;
    enableStandbyBackupIsSet_ = true;
}

bool BackupPolicy::enableStandbyBackupIsSet() const
{
    return enableStandbyBackupIsSet_;
}

void BackupPolicy::unsetenableStandbyBackup()
{
    enableStandbyBackupIsSet_ = false;
}

}
}
}
}
}


