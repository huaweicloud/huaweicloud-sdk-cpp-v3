

#include "huaweicloud/live/v2/model/StreamCountData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




StreamCountData::StreamCountData()
{
    value_ = 0;
    valueIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

StreamCountData::~StreamCountData() = default;

void StreamCountData::validate()
{
}

web::json::value StreamCountData::toJson() const
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

bool StreamCountData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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

int32_t StreamCountData::getValue() const
{
    return value_;
}

void StreamCountData::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool StreamCountData::valueIsSet() const
{
    return valueIsSet_;
}

void StreamCountData::unsetvalue()
{
    valueIsSet_ = false;
}

std::string StreamCountData::getTime() const
{
    return time_;
}

void StreamCountData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool StreamCountData::timeIsSet() const
{
    return timeIsSet_;
}

void StreamCountData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


