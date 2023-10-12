

#include "huaweicloud/live/v2/model/TrafficData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TrafficData::TrafficData()
{
    value_ = 0L;
    valueIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

TrafficData::~TrafficData() = default;

void TrafficData::validate()
{
}

web::json::value TrafficData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool TrafficData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


int64_t TrafficData::getValue() const
{
    return value_;
}

void TrafficData::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TrafficData::valueIsSet() const
{
    return valueIsSet_;
}

void TrafficData::unsetvalue()
{
    valueIsSet_ = false;
}

std::string TrafficData::getTime() const
{
    return time_;
}

void TrafficData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TrafficData::timeIsSet() const
{
    return timeIsSet_;
}

void TrafficData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


