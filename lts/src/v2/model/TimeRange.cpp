

#include "huaweicloud/lts/v2/model/TimeRange.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TimeRange::TimeRange()
{
    sqlTimeZone_ = "";
    sqlTimeZoneIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    startTimeGt_ = false;
    startTimeGtIsSet_ = false;
    endTimeLt_ = false;
    endTimeLtIsSet_ = false;
}

TimeRange::~TimeRange() = default;

void TimeRange::validate()
{
}

web::json::value TimeRange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlTimeZoneIsSet_) {
        val[utility::conversions::to_string_t("sql_time_zone")] = ModelBase::toJson(sqlTimeZone_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(startTimeGtIsSet_) {
        val[utility::conversions::to_string_t("start_time_gt")] = ModelBase::toJson(startTimeGt_);
    }
    if(endTimeLtIsSet_) {
        val[utility::conversions::to_string_t("end_time_lt")] = ModelBase::toJson(endTimeLt_);
    }

    return val;
}

bool TimeRange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTimeZone(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("start_time_gt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time_gt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeGt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_lt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_lt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeLt(refVal);
        }
    }
    return ok;
}

std::string TimeRange::getSqlTimeZone() const
{
    return sqlTimeZone_;
}

void TimeRange::setSqlTimeZone(const std::string& value)
{
    sqlTimeZone_ = value;
    sqlTimeZoneIsSet_ = true;
}

bool TimeRange::sqlTimeZoneIsSet() const
{
    return sqlTimeZoneIsSet_;
}

void TimeRange::unsetsqlTimeZone()
{
    sqlTimeZoneIsSet_ = false;
}

std::string TimeRange::getStartTime() const
{
    return startTime_;
}

void TimeRange::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TimeRange::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TimeRange::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TimeRange::getEndTime() const
{
    return endTime_;
}

void TimeRange::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TimeRange::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TimeRange::unsetendTime()
{
    endTimeIsSet_ = false;
}

bool TimeRange::isStartTimeGt() const
{
    return startTimeGt_;
}

void TimeRange::setStartTimeGt(bool value)
{
    startTimeGt_ = value;
    startTimeGtIsSet_ = true;
}

bool TimeRange::startTimeGtIsSet() const
{
    return startTimeGtIsSet_;
}

void TimeRange::unsetstartTimeGt()
{
    startTimeGtIsSet_ = false;
}

bool TimeRange::isEndTimeLt() const
{
    return endTimeLt_;
}

void TimeRange::setEndTimeLt(bool value)
{
    endTimeLt_ = value;
    endTimeLtIsSet_ = true;
}

bool TimeRange::endTimeLtIsSet() const
{
    return endTimeLtIsSet_;
}

void TimeRange::unsetendTimeLt()
{
    endTimeLtIsSet_ = false;
}

}
}
}
}
}


