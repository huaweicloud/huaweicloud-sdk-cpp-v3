

#include "huaweicloud/gaussdbforopengauss/v3/model/LwlockTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




LwlockTime::LwlockTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    lwlockTimeDetailsIsSet_ = false;
}

LwlockTime::~LwlockTime() = default;

void LwlockTime::validate()
{
}

web::json::value LwlockTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(lwlockTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("lwlock_time_details")] = ModelBase::toJson(lwlockTimeDetails_);
    }

    return val;
}
bool LwlockTime::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("lwlock_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lwlock_time_details"));
        if(!fieldValue.is_null())
        {
            EventTimeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLwlockTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t LwlockTime::getAllTime() const
{
    return allTime_;
}

void LwlockTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool LwlockTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void LwlockTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

EventTimeInfo LwlockTime::getLwlockTimeDetails() const
{
    return lwlockTimeDetails_;
}

void LwlockTime::setLwlockTimeDetails(const EventTimeInfo& value)
{
    lwlockTimeDetails_ = value;
    lwlockTimeDetailsIsSet_ = true;
}

bool LwlockTime::lwlockTimeDetailsIsSet() const
{
    return lwlockTimeDetailsIsSet_;
}

void LwlockTime::unsetlwlockTimeDetails()
{
    lwlockTimeDetailsIsSet_ = false;
}

}
}
}
}
}


