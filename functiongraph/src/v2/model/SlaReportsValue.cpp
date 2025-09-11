

#include "huaweicloud/functiongraph/v2/model/SlaReportsValue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




SlaReportsValue::SlaReportsValue()
{
    timestamp_ = 0L;
    timestampIsSet_ = false;
    value_ = 0.0;
    valueIsSet_ = false;
}

SlaReportsValue::~SlaReportsValue() = default;

void SlaReportsValue::validate()
{
}

web::json::value SlaReportsValue::toJson() const
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
bool SlaReportsValue::fromJson(const web::json::value& val)
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


int64_t SlaReportsValue::getTimestamp() const
{
    return timestamp_;
}

void SlaReportsValue::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool SlaReportsValue::timestampIsSet() const
{
    return timestampIsSet_;
}

void SlaReportsValue::unsettimestamp()
{
    timestampIsSet_ = false;
}

double SlaReportsValue::getValue() const
{
    return value_;
}

void SlaReportsValue::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SlaReportsValue::valueIsSet() const
{
    return valueIsSet_;
}

void SlaReportsValue::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


