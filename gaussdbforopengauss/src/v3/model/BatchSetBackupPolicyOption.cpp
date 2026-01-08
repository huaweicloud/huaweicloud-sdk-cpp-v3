

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchSetBackupPolicyOption::BatchSetBackupPolicyOption()
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

BatchSetBackupPolicyOption::~BatchSetBackupPolicyOption() = default;

void BatchSetBackupPolicyOption::validate()
{
}

web::json::value BatchSetBackupPolicyOption::toJson() const
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
bool BatchSetBackupPolicyOption::fromJson(const web::json::value& val)
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


int32_t BatchSetBackupPolicyOption::getKeepDays() const
{
    return keepDays_;
}

void BatchSetBackupPolicyOption::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool BatchSetBackupPolicyOption::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void BatchSetBackupPolicyOption::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string BatchSetBackupPolicyOption::getStartTime() const
{
    return startTime_;
}

void BatchSetBackupPolicyOption::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BatchSetBackupPolicyOption::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BatchSetBackupPolicyOption::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BatchSetBackupPolicyOption::getPeriod() const
{
    return period_;
}

void BatchSetBackupPolicyOption::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool BatchSetBackupPolicyOption::periodIsSet() const
{
    return periodIsSet_;
}

void BatchSetBackupPolicyOption::unsetperiod()
{
    periodIsSet_ = false;
}

std::string BatchSetBackupPolicyOption::getDifferentialPeriod() const
{
    return differentialPeriod_;
}

void BatchSetBackupPolicyOption::setDifferentialPeriod(const std::string& value)
{
    differentialPeriod_ = value;
    differentialPeriodIsSet_ = true;
}

bool BatchSetBackupPolicyOption::differentialPeriodIsSet() const
{
    return differentialPeriodIsSet_;
}

void BatchSetBackupPolicyOption::unsetdifferentialPeriod()
{
    differentialPeriodIsSet_ = false;
}

int32_t BatchSetBackupPolicyOption::getRateLimit() const
{
    return rateLimit_;
}

void BatchSetBackupPolicyOption::setRateLimit(int32_t value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool BatchSetBackupPolicyOption::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void BatchSetBackupPolicyOption::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t BatchSetBackupPolicyOption::getPrefetchBlock() const
{
    return prefetchBlock_;
}

void BatchSetBackupPolicyOption::setPrefetchBlock(int32_t value)
{
    prefetchBlock_ = value;
    prefetchBlockIsSet_ = true;
}

bool BatchSetBackupPolicyOption::prefetchBlockIsSet() const
{
    return prefetchBlockIsSet_;
}

void BatchSetBackupPolicyOption::unsetprefetchBlock()
{
    prefetchBlockIsSet_ = false;
}

int32_t BatchSetBackupPolicyOption::getFileSplitSize() const
{
    return fileSplitSize_;
}

void BatchSetBackupPolicyOption::setFileSplitSize(int32_t value)
{
    fileSplitSize_ = value;
    fileSplitSizeIsSet_ = true;
}

bool BatchSetBackupPolicyOption::fileSplitSizeIsSet() const
{
    return fileSplitSizeIsSet_;
}

void BatchSetBackupPolicyOption::unsetfileSplitSize()
{
    fileSplitSizeIsSet_ = false;
}

bool BatchSetBackupPolicyOption::isEnableStandbyBackup() const
{
    return enableStandbyBackup_;
}

void BatchSetBackupPolicyOption::setEnableStandbyBackup(bool value)
{
    enableStandbyBackup_ = value;
    enableStandbyBackupIsSet_ = true;
}

bool BatchSetBackupPolicyOption::enableStandbyBackupIsSet() const
{
    return enableStandbyBackupIsSet_;
}

void BatchSetBackupPolicyOption::unsetenableStandbyBackup()
{
    enableStandbyBackupIsSet_ = false;
}

}
}
}
}
}


