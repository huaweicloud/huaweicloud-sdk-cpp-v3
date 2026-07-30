

#include "huaweicloud/modelarts/v1/model/ScheduleConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ScheduleConfig::ScheduleConfig()
{
    duration_ = 0;
    durationIsSet_ = false;
    timeUnit_ = "";
    timeUnitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ScheduleConfig::~ScheduleConfig() = default;

void ScheduleConfig::validate()
{
}

web::json::value ScheduleConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(timeUnitIsSet_) {
        val[utility::conversions::to_string_t("time_unit")] = ModelBase::toJson(timeUnit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ScheduleConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t ScheduleConfig::getDuration() const
{
    return duration_;
}

void ScheduleConfig::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ScheduleConfig::durationIsSet() const
{
    return durationIsSet_;
}

void ScheduleConfig::unsetduration()
{
    durationIsSet_ = false;
}

std::string ScheduleConfig::getTimeUnit() const
{
    return timeUnit_;
}

void ScheduleConfig::setTimeUnit(const std::string& value)
{
    timeUnit_ = value;
    timeUnitIsSet_ = true;
}

bool ScheduleConfig::timeUnitIsSet() const
{
    return timeUnitIsSet_;
}

void ScheduleConfig::unsettimeUnit()
{
    timeUnitIsSet_ = false;
}

std::string ScheduleConfig::getType() const
{
    return type_;
}

void ScheduleConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ScheduleConfig::typeIsSet() const
{
    return typeIsSet_;
}

void ScheduleConfig::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


