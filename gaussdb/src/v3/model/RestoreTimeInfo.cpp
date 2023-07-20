

#include "huaweicloud/gaussdb/v3/model/RestoreTimeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestoreTimeInfo::RestoreTimeInfo()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

RestoreTimeInfo::~RestoreTimeInfo() = default;

void RestoreTimeInfo::validate()
{
}

web::json::value RestoreTimeInfo::toJson() const
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

bool RestoreTimeInfo::fromJson(const web::json::value& val)
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

int64_t RestoreTimeInfo::getStartTime() const
{
    return startTime_;
}

void RestoreTimeInfo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RestoreTimeInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RestoreTimeInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t RestoreTimeInfo::getEndTime() const
{
    return endTime_;
}

void RestoreTimeInfo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RestoreTimeInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RestoreTimeInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


