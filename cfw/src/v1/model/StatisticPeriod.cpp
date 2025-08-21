

#include "huaweicloud/cfw/v1/model/StatisticPeriod.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




StatisticPeriod::StatisticPeriod()
{
    endTime_ = 0L;
    endTimeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
}

StatisticPeriod::~StatisticPeriod() = default;

void StatisticPeriod::validate()
{
}

web::json::value StatisticPeriod::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool StatisticPeriod::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


int64_t StatisticPeriod::getEndTime() const
{
    return endTime_;
}

void StatisticPeriod::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StatisticPeriod::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StatisticPeriod::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t StatisticPeriod::getStartTime() const
{
    return startTime_;
}

void StatisticPeriod::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StatisticPeriod::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StatisticPeriod::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


