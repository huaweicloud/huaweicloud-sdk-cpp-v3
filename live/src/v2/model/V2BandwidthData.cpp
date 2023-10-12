

#include "huaweicloud/live/v2/model/V2BandwidthData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




V2BandwidthData::V2BandwidthData()
{
    value_ = 0L;
    valueIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

V2BandwidthData::~V2BandwidthData() = default;

void V2BandwidthData::validate()
{
}

web::json::value V2BandwidthData::toJson() const
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
bool V2BandwidthData::fromJson(const web::json::value& val)
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


int64_t V2BandwidthData::getValue() const
{
    return value_;
}

void V2BandwidthData::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool V2BandwidthData::valueIsSet() const
{
    return valueIsSet_;
}

void V2BandwidthData::unsetvalue()
{
    valueIsSet_ = false;
}

std::string V2BandwidthData::getTime() const
{
    return time_;
}

void V2BandwidthData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool V2BandwidthData::timeIsSet() const
{
    return timeIsSet_;
}

void V2BandwidthData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


