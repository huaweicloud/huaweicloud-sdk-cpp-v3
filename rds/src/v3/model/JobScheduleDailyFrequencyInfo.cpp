

#include "huaweicloud/rds/v3/model/JobScheduleDailyFrequencyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




JobScheduleDailyFrequencyInfo::JobScheduleDailyFrequencyInfo()
{
    freqSubdayType_ = "";
    freqSubdayTypeIsSet_ = false;
    activeStartTime_ = "";
    activeStartTimeIsSet_ = false;
    activeEndTime_ = "";
    activeEndTimeIsSet_ = false;
    freqSubdayInterval_ = 0;
    freqSubdayIntervalIsSet_ = false;
    freqIntervalUnit_ = "";
    freqIntervalUnitIsSet_ = false;
}

JobScheduleDailyFrequencyInfo::~JobScheduleDailyFrequencyInfo() = default;

void JobScheduleDailyFrequencyInfo::validate()
{
}

web::json::value JobScheduleDailyFrequencyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(freqSubdayTypeIsSet_) {
        val[utility::conversions::to_string_t("freq_subday_type")] = ModelBase::toJson(freqSubdayType_);
    }
    if(activeStartTimeIsSet_) {
        val[utility::conversions::to_string_t("active_start_time")] = ModelBase::toJson(activeStartTime_);
    }
    if(activeEndTimeIsSet_) {
        val[utility::conversions::to_string_t("active_end_time")] = ModelBase::toJson(activeEndTime_);
    }
    if(freqSubdayIntervalIsSet_) {
        val[utility::conversions::to_string_t("freq_subday_interval")] = ModelBase::toJson(freqSubdayInterval_);
    }
    if(freqIntervalUnitIsSet_) {
        val[utility::conversions::to_string_t("freq_interval_unit")] = ModelBase::toJson(freqIntervalUnit_);
    }

    return val;
}
bool JobScheduleDailyFrequencyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("freq_subday_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_subday_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqSubdayType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_subday_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_subday_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqSubdayInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freq_interval_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freq_interval_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreqIntervalUnit(refVal);
        }
    }
    return ok;
}


std::string JobScheduleDailyFrequencyInfo::getFreqSubdayType() const
{
    return freqSubdayType_;
}

void JobScheduleDailyFrequencyInfo::setFreqSubdayType(const std::string& value)
{
    freqSubdayType_ = value;
    freqSubdayTypeIsSet_ = true;
}

bool JobScheduleDailyFrequencyInfo::freqSubdayTypeIsSet() const
{
    return freqSubdayTypeIsSet_;
}

void JobScheduleDailyFrequencyInfo::unsetfreqSubdayType()
{
    freqSubdayTypeIsSet_ = false;
}

std::string JobScheduleDailyFrequencyInfo::getActiveStartTime() const
{
    return activeStartTime_;
}

void JobScheduleDailyFrequencyInfo::setActiveStartTime(const std::string& value)
{
    activeStartTime_ = value;
    activeStartTimeIsSet_ = true;
}

bool JobScheduleDailyFrequencyInfo::activeStartTimeIsSet() const
{
    return activeStartTimeIsSet_;
}

void JobScheduleDailyFrequencyInfo::unsetactiveStartTime()
{
    activeStartTimeIsSet_ = false;
}

std::string JobScheduleDailyFrequencyInfo::getActiveEndTime() const
{
    return activeEndTime_;
}

void JobScheduleDailyFrequencyInfo::setActiveEndTime(const std::string& value)
{
    activeEndTime_ = value;
    activeEndTimeIsSet_ = true;
}

bool JobScheduleDailyFrequencyInfo::activeEndTimeIsSet() const
{
    return activeEndTimeIsSet_;
}

void JobScheduleDailyFrequencyInfo::unsetactiveEndTime()
{
    activeEndTimeIsSet_ = false;
}

int32_t JobScheduleDailyFrequencyInfo::getFreqSubdayInterval() const
{
    return freqSubdayInterval_;
}

void JobScheduleDailyFrequencyInfo::setFreqSubdayInterval(int32_t value)
{
    freqSubdayInterval_ = value;
    freqSubdayIntervalIsSet_ = true;
}

bool JobScheduleDailyFrequencyInfo::freqSubdayIntervalIsSet() const
{
    return freqSubdayIntervalIsSet_;
}

void JobScheduleDailyFrequencyInfo::unsetfreqSubdayInterval()
{
    freqSubdayIntervalIsSet_ = false;
}

std::string JobScheduleDailyFrequencyInfo::getFreqIntervalUnit() const
{
    return freqIntervalUnit_;
}

void JobScheduleDailyFrequencyInfo::setFreqIntervalUnit(const std::string& value)
{
    freqIntervalUnit_ = value;
    freqIntervalUnitIsSet_ = true;
}

bool JobScheduleDailyFrequencyInfo::freqIntervalUnitIsSet() const
{
    return freqIntervalUnitIsSet_;
}

void JobScheduleDailyFrequencyInfo::unsetfreqIntervalUnit()
{
    freqIntervalUnitIsSet_ = false;
}

}
}
}
}
}


