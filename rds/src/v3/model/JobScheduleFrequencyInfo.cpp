

#include "huaweicloud/rds/v3/model/JobScheduleFrequencyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




JobScheduleFrequencyInfo::JobScheduleFrequencyInfo()
{
    freqType_ = "";
    freqTypeIsSet_ = false;
    freqInterval_ = 0;
    freqIntervalIsSet_ = false;
    freqIntervalWeeklyIsSet_ = false;
    freqIntervalDayMonthly_ = 0;
    freqIntervalDayMonthlyIsSet_ = false;
    freqIntervalMonthly_ = "";
    freqIntervalMonthlyIsSet_ = false;
    freqRelativeIntervalMonthly_ = "";
    freqRelativeIntervalMonthlyIsSet_ = false;
}

JobScheduleFrequencyInfo::~JobScheduleFrequencyInfo() = default;

void JobScheduleFrequencyInfo::validate()
{
}

web::json::value JobScheduleFrequencyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(freqTypeIsSet_) {
        val[utility::conversions::to_string_t("freq_type")] = ModelBase::toJson(freqType_);
    }
    if(freqIntervalIsSet_) {
        val[utility::conversions::to_string_t("freq_interval")] = ModelBase::toJson(freqInterval_);
    }
    if(freqIntervalWeeklyIsSet_) {
        val[utility::conversions::to_string_t("freq_interval_weekly")] = ModelBase::toJson(freqIntervalWeekly_);
    }
    if(freqIntervalDayMonthlyIsSet_) {
        val[utility::conversions::to_string_t("freq_interval_day_monthly")] = ModelBase::toJson(freqIntervalDayMonthly_);
    }
    if(freqIntervalMonthlyIsSet_) {
        val[utility::conversions::to_string_t("freq_interval_monthly")] = ModelBase::toJson(freqIntervalMonthly_);
    }
    if(freqRelativeIntervalMonthlyIsSet_) {
        val[utility::conversions::to_string_t("freq_relative_interval_monthly")] = ModelBase::toJson(freqRelativeIntervalMonthly_);
    }

    return val;
}
bool JobScheduleFrequencyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("freq_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_interval_weekly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_interval_weekly"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqIntervalWeekly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_interval_day_monthly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_interval_day_monthly"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqIntervalDayMonthly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_interval_monthly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_interval_monthly"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqIntervalMonthly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_relative_interval_monthly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_relative_interval_monthly"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqRelativeIntervalMonthly(refVal);
        }
    }
    return ok;
}


std::string JobScheduleFrequencyInfo::getFreqType() const
{
    return freqType_;
}

void JobScheduleFrequencyInfo::setFreqType(const std::string& value)
{
    freqType_ = value;
    freqTypeIsSet_ = true;
}

bool JobScheduleFrequencyInfo::freqTypeIsSet() const
{
    return freqTypeIsSet_;
}

void JobScheduleFrequencyInfo::unsetfreqType()
{
    freqTypeIsSet_ = false;
}

int32_t JobScheduleFrequencyInfo::getFreqInterval() const
{
    return freqInterval_;
}

void JobScheduleFrequencyInfo::setFreqInterval(int32_t value)
{
    freqInterval_ = value;
    freqIntervalIsSet_ = true;
}

bool JobScheduleFrequencyInfo::freqIntervalIsSet() const
{
    return freqIntervalIsSet_;
}

void JobScheduleFrequencyInfo::unsetfreqInterval()
{
    freqIntervalIsSet_ = false;
}

std::vector<std::string>& JobScheduleFrequencyInfo::getFreqIntervalWeekly()
{
    return freqIntervalWeekly_;
}

void JobScheduleFrequencyInfo::setFreqIntervalWeekly(const std::vector<std::string>& value)
{
    freqIntervalWeekly_ = value;
    freqIntervalWeeklyIsSet_ = true;
}

bool JobScheduleFrequencyInfo::freqIntervalWeeklyIsSet() const
{
    return freqIntervalWeeklyIsSet_;
}

void JobScheduleFrequencyInfo::unsetfreqIntervalWeekly()
{
    freqIntervalWeeklyIsSet_ = false;
}

int32_t JobScheduleFrequencyInfo::getFreqIntervalDayMonthly() const
{
    return freqIntervalDayMonthly_;
}

void JobScheduleFrequencyInfo::setFreqIntervalDayMonthly(int32_t value)
{
    freqIntervalDayMonthly_ = value;
    freqIntervalDayMonthlyIsSet_ = true;
}

bool JobScheduleFrequencyInfo::freqIntervalDayMonthlyIsSet() const
{
    return freqIntervalDayMonthlyIsSet_;
}

void JobScheduleFrequencyInfo::unsetfreqIntervalDayMonthly()
{
    freqIntervalDayMonthlyIsSet_ = false;
}

std::string JobScheduleFrequencyInfo::getFreqIntervalMonthly() const
{
    return freqIntervalMonthly_;
}

void JobScheduleFrequencyInfo::setFreqIntervalMonthly(const std::string& value)
{
    freqIntervalMonthly_ = value;
    freqIntervalMonthlyIsSet_ = true;
}

bool JobScheduleFrequencyInfo::freqIntervalMonthlyIsSet() const
{
    return freqIntervalMonthlyIsSet_;
}

void JobScheduleFrequencyInfo::unsetfreqIntervalMonthly()
{
    freqIntervalMonthlyIsSet_ = false;
}

std::string JobScheduleFrequencyInfo::getFreqRelativeIntervalMonthly() const
{
    return freqRelativeIntervalMonthly_;
}

void JobScheduleFrequencyInfo::setFreqRelativeIntervalMonthly(const std::string& value)
{
    freqRelativeIntervalMonthly_ = value;
    freqRelativeIntervalMonthlyIsSet_ = true;
}

bool JobScheduleFrequencyInfo::freqRelativeIntervalMonthlyIsSet() const
{
    return freqRelativeIntervalMonthlyIsSet_;
}

void JobScheduleFrequencyInfo::unsetfreqRelativeIntervalMonthly()
{
    freqRelativeIntervalMonthlyIsSet_ = false;
}

}
}
}
}
}


