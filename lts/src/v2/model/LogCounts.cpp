

#include "huaweicloud/lts/v2/model/LogCounts.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogCounts::LogCounts()
{
    num_ = 0;
    numIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

LogCounts::~LogCounts() = default;

void LogCounts::validate()
{
}

web::json::value LogCounts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool LogCounts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


int32_t LogCounts::getNum() const
{
    return num_;
}

void LogCounts::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool LogCounts::numIsSet() const
{
    return numIsSet_;
}

void LogCounts::unsetnum()
{
    numIsSet_ = false;
}

int64_t LogCounts::getStartTime() const
{
    return startTime_;
}

void LogCounts::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LogCounts::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LogCounts::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t LogCounts::getEndTime() const
{
    return endTime_;
}

void LogCounts::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LogCounts::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LogCounts::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


