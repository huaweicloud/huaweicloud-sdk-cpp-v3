

#include "huaweicloud/iotda/v5/model/EffectiveTimeRangeResponseDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




EffectiveTimeRangeResponseDTO::EffectiveTimeRangeResponseDTO()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

EffectiveTimeRangeResponseDTO::~EffectiveTimeRangeResponseDTO() = default;

void EffectiveTimeRangeResponseDTO::validate()
{
}

web::json::value EffectiveTimeRangeResponseDTO::toJson() const
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
bool EffectiveTimeRangeResponseDTO::fromJson(const web::json::value& val)
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


std::string EffectiveTimeRangeResponseDTO::getStartTime() const
{
    return startTime_;
}

void EffectiveTimeRangeResponseDTO::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EffectiveTimeRangeResponseDTO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EffectiveTimeRangeResponseDTO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EffectiveTimeRangeResponseDTO::getEndTime() const
{
    return endTime_;
}

void EffectiveTimeRangeResponseDTO::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EffectiveTimeRangeResponseDTO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EffectiveTimeRangeResponseDTO::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


