

#include "huaweicloud/gaussdbforopengauss/v3/model/CodeWaitEventTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CodeWaitEventTime::CodeWaitEventTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    codeWaitEventTimeDetailsIsSet_ = false;
}

CodeWaitEventTime::~CodeWaitEventTime() = default;

void CodeWaitEventTime::validate()
{
}

web::json::value CodeWaitEventTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(codeWaitEventTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("code_wait_event_time_details")] = ModelBase::toJson(codeWaitEventTimeDetails_);
    }

    return val;
}
bool CodeWaitEventTime::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code_wait_event_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_wait_event_time_details"));
        if(!fieldValue.is_null())
        {
            EventTimeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeWaitEventTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t CodeWaitEventTime::getAllTime() const
{
    return allTime_;
}

void CodeWaitEventTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool CodeWaitEventTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void CodeWaitEventTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

EventTimeInfo CodeWaitEventTime::getCodeWaitEventTimeDetails() const
{
    return codeWaitEventTimeDetails_;
}

void CodeWaitEventTime::setCodeWaitEventTimeDetails(const EventTimeInfo& value)
{
    codeWaitEventTimeDetails_ = value;
    codeWaitEventTimeDetailsIsSet_ = true;
}

bool CodeWaitEventTime::codeWaitEventTimeDetailsIsSet() const
{
    return codeWaitEventTimeDetailsIsSet_;
}

void CodeWaitEventTime::unsetcodeWaitEventTimeDetails()
{
    codeWaitEventTimeDetailsIsSet_ = false;
}

}
}
}
}
}


