

#include "huaweicloud/cloudtest/v1/model/AlarmStatisticsQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlarmStatisticsQuery::AlarmStatisticsQuery()
{
    endTime_ = 0L;
    endTimeIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
}

AlarmStatisticsQuery::~AlarmStatisticsQuery() = default;

void AlarmStatisticsQuery::validate()
{
}

web::json::value AlarmStatisticsQuery::toJson() const
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
bool AlarmStatisticsQuery::fromJson(const web::json::value& val)
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


int64_t AlarmStatisticsQuery::getEndTime() const
{
    return endTime_;
}

void AlarmStatisticsQuery::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AlarmStatisticsQuery::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AlarmStatisticsQuery::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t AlarmStatisticsQuery::getStartTime() const
{
    return startTime_;
}

void AlarmStatisticsQuery::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AlarmStatisticsQuery::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AlarmStatisticsQuery::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


