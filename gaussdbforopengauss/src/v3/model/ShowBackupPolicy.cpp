

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicy.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowBackupPolicy::ShowBackupPolicy()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    differentialPriod_ = "";
    differentialPriodIsSet_ = false;
    differentialPeriod_ = "";
    differentialPeriodIsSet_ = false;
    rateLimit_ = 0;
    rateLimitIsSet_ = false;
    prefetchBlock_ = 0;
    prefetchBlockIsSet_ = false;
    filesplitSize_ = 0;
    filesplitSizeIsSet_ = false;
    fileSplitSize_ = 0;
    fileSplitSizeIsSet_ = false;
    enableStandbyBackup_ = false;
    enableStandbyBackupIsSet_ = false;
}

ShowBackupPolicy::~ShowBackupPolicy() = default;

void ShowBackupPolicy::validate()
{
}

web::json::value ShowBackupPolicy::toJson() const
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
    if(differentialPriodIsSet_) {
        val[utility::conversions::to_string_t("differential_priod")] = ModelBase::toJson(differentialPriod_);
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
    if(filesplitSizeIsSet_) {
        val[utility::conversions::to_string_t("filesplit_size")] = ModelBase::toJson(filesplitSize_);
    }
    if(fileSplitSizeIsSet_) {
        val[utility::conversions::to_string_t("file_split_size")] = ModelBase::toJson(fileSplitSize_);
    }
    if(enableStandbyBackupIsSet_) {
        val[utility::conversions::to_string_t("enable_standby_backup")] = ModelBase::toJson(enableStandbyBackup_);
    }

    return val;
}

bool ShowBackupPolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("differential_priod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("differential_priod"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferentialPriod(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("filesplit_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filesplit_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilesplitSize(refVal);
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

int32_t ShowBackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void ShowBackupPolicy::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ShowBackupPolicy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ShowBackupPolicy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string ShowBackupPolicy::getStartTime() const
{
    return startTime_;
}

void ShowBackupPolicy::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowBackupPolicy::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowBackupPolicy::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowBackupPolicy::getPeriod() const
{
    return period_;
}

void ShowBackupPolicy::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowBackupPolicy::periodIsSet() const
{
    return periodIsSet_;
}

void ShowBackupPolicy::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowBackupPolicy::getDifferentialPriod() const
{
    return differentialPriod_;
}

void ShowBackupPolicy::setDifferentialPriod(const std::string& value)
{
    differentialPriod_ = value;
    differentialPriodIsSet_ = true;
}

bool ShowBackupPolicy::differentialPriodIsSet() const
{
    return differentialPriodIsSet_;
}

void ShowBackupPolicy::unsetdifferentialPriod()
{
    differentialPriodIsSet_ = false;
}

std::string ShowBackupPolicy::getDifferentialPeriod() const
{
    return differentialPeriod_;
}

void ShowBackupPolicy::setDifferentialPeriod(const std::string& value)
{
    differentialPeriod_ = value;
    differentialPeriodIsSet_ = true;
}

bool ShowBackupPolicy::differentialPeriodIsSet() const
{
    return differentialPeriodIsSet_;
}

void ShowBackupPolicy::unsetdifferentialPeriod()
{
    differentialPeriodIsSet_ = false;
}

int32_t ShowBackupPolicy::getRateLimit() const
{
    return rateLimit_;
}

void ShowBackupPolicy::setRateLimit(int32_t value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool ShowBackupPolicy::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void ShowBackupPolicy::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t ShowBackupPolicy::getPrefetchBlock() const
{
    return prefetchBlock_;
}

void ShowBackupPolicy::setPrefetchBlock(int32_t value)
{
    prefetchBlock_ = value;
    prefetchBlockIsSet_ = true;
}

bool ShowBackupPolicy::prefetchBlockIsSet() const
{
    return prefetchBlockIsSet_;
}

void ShowBackupPolicy::unsetprefetchBlock()
{
    prefetchBlockIsSet_ = false;
}

int32_t ShowBackupPolicy::getFilesplitSize() const
{
    return filesplitSize_;
}

void ShowBackupPolicy::setFilesplitSize(int32_t value)
{
    filesplitSize_ = value;
    filesplitSizeIsSet_ = true;
}

bool ShowBackupPolicy::filesplitSizeIsSet() const
{
    return filesplitSizeIsSet_;
}

void ShowBackupPolicy::unsetfilesplitSize()
{
    filesplitSizeIsSet_ = false;
}

int32_t ShowBackupPolicy::getFileSplitSize() const
{
    return fileSplitSize_;
}

void ShowBackupPolicy::setFileSplitSize(int32_t value)
{
    fileSplitSize_ = value;
    fileSplitSizeIsSet_ = true;
}

bool ShowBackupPolicy::fileSplitSizeIsSet() const
{
    return fileSplitSizeIsSet_;
}

void ShowBackupPolicy::unsetfileSplitSize()
{
    fileSplitSizeIsSet_ = false;
}

bool ShowBackupPolicy::isEnableStandbyBackup() const
{
    return enableStandbyBackup_;
}

void ShowBackupPolicy::setEnableStandbyBackup(bool value)
{
    enableStandbyBackup_ = value;
    enableStandbyBackupIsSet_ = true;
}

bool ShowBackupPolicy::enableStandbyBackupIsSet() const
{
    return enableStandbyBackupIsSet_;
}

void ShowBackupPolicy::unsetenableStandbyBackup()
{
    enableStandbyBackupIsSet_ = false;
}

}
}
}
}
}


