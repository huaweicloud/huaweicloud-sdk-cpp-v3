

#include "huaweicloud/gaussdbforopengauss/v3/model/LockTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




LockTime::LockTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    lockTimeDetailsIsSet_ = false;
}

LockTime::~LockTime() = default;

void LockTime::validate()
{
}

web::json::value LockTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(lockTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("lock_time_details")] = ModelBase::toJson(lockTimeDetails_);
    }

    return val;
}
bool LockTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time_details"));
        if(!fieldValue.is_null())
        {
            EventTimeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t LockTime::getAllTime() const
{
    return allTime_;
}

void LockTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool LockTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void LockTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

EventTimeInfo LockTime::getLockTimeDetails() const
{
    return lockTimeDetails_;
}

void LockTime::setLockTimeDetails(const EventTimeInfo& value)
{
    lockTimeDetails_ = value;
    lockTimeDetailsIsSet_ = true;
}

bool LockTime::lockTimeDetailsIsSet() const
{
    return lockTimeDetailsIsSet_;
}

void LockTime::unsetlockTimeDetails()
{
    lockTimeDetailsIsSet_ = false;
}

}
}
}
}
}


