

#include "huaweicloud/live/v2/model/V2UserData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




V2UserData::V2UserData()
{
    value_ = 0L;
    valueIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

V2UserData::~V2UserData() = default;

void V2UserData::validate()
{
}

web::json::value V2UserData::toJson() const
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

bool V2UserData::fromJson(const web::json::value& val)
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

int64_t V2UserData::getValue() const
{
    return value_;
}

void V2UserData::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool V2UserData::valueIsSet() const
{
    return valueIsSet_;
}

void V2UserData::unsetvalue()
{
    valueIsSet_ = false;
}

std::string V2UserData::getTime() const
{
    return time_;
}

void V2UserData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool V2UserData::timeIsSet() const
{
    return timeIsSet_;
}

void V2UserData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


