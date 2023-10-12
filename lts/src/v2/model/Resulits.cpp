

#include "huaweicloud/lts/v2/model/Resulits.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Resulits::Resulits()
{
    timestamp_ = 0L;
    timestampIsSet_ = false;
    value_ = 0.0;
    valueIsSet_ = false;
}

Resulits::~Resulits() = default;

void Resulits::validate()
{
}

web::json::value Resulits::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool Resulits::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


int64_t Resulits::getTimestamp() const
{
    return timestamp_;
}

void Resulits::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool Resulits::timestampIsSet() const
{
    return timestampIsSet_;
}

void Resulits::unsettimestamp()
{
    timestampIsSet_ = false;
}

double Resulits::getValue() const
{
    return value_;
}

void Resulits::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Resulits::valueIsSet() const
{
    return valueIsSet_;
}

void Resulits::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


