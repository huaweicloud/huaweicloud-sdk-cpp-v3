

#include "huaweicloud/cfw/v1/model/ScheduleInfoDTO_absolute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ScheduleInfoDTO_absolute::ScheduleInfoDTO_absolute()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

ScheduleInfoDTO_absolute::~ScheduleInfoDTO_absolute() = default;

void ScheduleInfoDTO_absolute::validate()
{
}

web::json::value ScheduleInfoDTO_absolute::toJson() const
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
bool ScheduleInfoDTO_absolute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


int64_t ScheduleInfoDTO_absolute::getStartTime() const
{
    return startTime_;
}

void ScheduleInfoDTO_absolute::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleInfoDTO_absolute::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleInfoDTO_absolute::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ScheduleInfoDTO_absolute::getEndTime() const
{
    return endTime_;
}

void ScheduleInfoDTO_absolute::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleInfoDTO_absolute::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleInfoDTO_absolute::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


