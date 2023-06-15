

#include "huaweicloud/live/v2/model/TimeValue.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TimeValue::TimeValue()
{
    time_ = "";
    timeIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

TimeValue::~TimeValue() = default;

void TimeValue::validate()
{
}

web::json::value TimeValue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}

bool TimeValue::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string TimeValue::getTime() const
{
    return time_;
}

void TimeValue::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TimeValue::timeIsSet() const
{
    return timeIsSet_;
}

void TimeValue::unsettime()
{
    timeIsSet_ = false;
}

int64_t TimeValue::getValue() const
{
    return value_;
}

void TimeValue::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TimeValue::valueIsSet() const
{
    return valueIsSet_;
}

void TimeValue::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


