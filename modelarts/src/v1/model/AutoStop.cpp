

#include "huaweicloud/modelarts/v1/model/AutoStop.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AutoStop::AutoStop()
{
    timeUnit_ = "";
    timeUnitIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
}

AutoStop::~AutoStop() = default;

void AutoStop::validate()
{
}

web::json::value AutoStop::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeUnitIsSet_) {
        val[utility::conversions::to_string_t("time_unit")] = ModelBase::toJson(timeUnit_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool AutoStop::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


std::string AutoStop::getTimeUnit() const
{
    return timeUnit_;
}

void AutoStop::setTimeUnit(const std::string& value)
{
    timeUnit_ = value;
    timeUnitIsSet_ = true;
}

bool AutoStop::timeUnitIsSet() const
{
    return timeUnitIsSet_;
}

void AutoStop::unsettimeUnit()
{
    timeUnitIsSet_ = false;
}

int32_t AutoStop::getDuration() const
{
    return duration_;
}

void AutoStop::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool AutoStop::durationIsSet() const
{
    return durationIsSet_;
}

void AutoStop::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


