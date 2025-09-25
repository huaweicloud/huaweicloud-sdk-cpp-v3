

#include "huaweicloud/gaussdbforopengauss/v3/model/TopEventInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TopEventInfoResult::TopEventInfoResult()
{
    eventName_ = "";
    eventNameIsSet_ = false;
    eventTime_ = 0L;
    eventTimeIsSet_ = false;
}

TopEventInfoResult::~TopEventInfoResult() = default;

void TopEventInfoResult::validate()
{
}

web::json::value TopEventInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventNameIsSet_) {
        val[utility::conversions::to_string_t("event_name")] = ModelBase::toJson(eventName_);
    }
    if(eventTimeIsSet_) {
        val[utility::conversions::to_string_t("event_time")] = ModelBase::toJson(eventTime_);
    }

    return val;
}
bool TopEventInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventTime(refVal);
        }
    }
    return ok;
}


std::string TopEventInfoResult::getEventName() const
{
    return eventName_;
}

void TopEventInfoResult::setEventName(const std::string& value)
{
    eventName_ = value;
    eventNameIsSet_ = true;
}

bool TopEventInfoResult::eventNameIsSet() const
{
    return eventNameIsSet_;
}

void TopEventInfoResult::unseteventName()
{
    eventNameIsSet_ = false;
}

int64_t TopEventInfoResult::getEventTime() const
{
    return eventTime_;
}

void TopEventInfoResult::setEventTime(int64_t value)
{
    eventTime_ = value;
    eventTimeIsSet_ = true;
}

bool TopEventInfoResult::eventTimeIsSet() const
{
    return eventTimeIsSet_;
}

void TopEventInfoResult::unseteventTime()
{
    eventTimeIsSet_ = false;
}

}
}
}
}
}


