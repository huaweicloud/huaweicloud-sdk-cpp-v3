

#include "huaweicloud/iotda/v5/model/EffectiveTimeRange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




EffectiveTimeRange::EffectiveTimeRange()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

EffectiveTimeRange::~EffectiveTimeRange() = default;

void EffectiveTimeRange::validate()
{
}

web::json::value EffectiveTimeRange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool EffectiveTimeRange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string EffectiveTimeRange::getStartTime() const
{
    return startTime_;
}

void EffectiveTimeRange::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EffectiveTimeRange::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EffectiveTimeRange::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EffectiveTimeRange::getEndTime() const
{
    return endTime_;
}

void EffectiveTimeRange::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EffectiveTimeRange::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EffectiveTimeRange::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


