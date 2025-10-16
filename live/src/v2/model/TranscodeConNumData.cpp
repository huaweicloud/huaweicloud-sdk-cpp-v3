

#include "huaweicloud/live/v2/model/TranscodeConNumData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TranscodeConNumData::TranscodeConNumData()
{
    time_ = "";
    timeIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

TranscodeConNumData::~TranscodeConNumData() = default;

void TranscodeConNumData::validate()
{
}

web::json::value TranscodeConNumData::toJson() const
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
bool TranscodeConNumData::fromJson(const web::json::value& val)
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


std::string TranscodeConNumData::getTime() const
{
    return time_;
}

void TranscodeConNumData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TranscodeConNumData::timeIsSet() const
{
    return timeIsSet_;
}

void TranscodeConNumData::unsettime()
{
    timeIsSet_ = false;
}

int64_t TranscodeConNumData::getValue() const
{
    return value_;
}

void TranscodeConNumData::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TranscodeConNumData::valueIsSet() const
{
    return valueIsSet_;
}

void TranscodeConNumData::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


