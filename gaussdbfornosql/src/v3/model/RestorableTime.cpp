

#include "huaweicloud/gaussdbfornosql/v3/model/RestorableTime.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestorableTime::RestorableTime()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

RestorableTime::~RestorableTime() = default;

void RestorableTime::validate()
{
}

web::json::value RestorableTime::toJson() const
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

bool RestorableTime::fromJson(const web::json::value& val)
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

int64_t RestorableTime::getStartTime() const
{
    return startTime_;
}

void RestorableTime::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RestorableTime::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RestorableTime::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t RestorableTime::getEndTime() const
{
    return endTime_;
}

void RestorableTime::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RestorableTime::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RestorableTime::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


