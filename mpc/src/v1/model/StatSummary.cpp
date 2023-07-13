

#include "huaweicloud/mpc/v1/model/StatSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




StatSummary::StatSummary()
{
    value_ = 0.0f;
    valueIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
}

StatSummary::~StatSummary() = default;

void StatSummary::validate()
{
}

web::json::value StatSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }

    return val;
}

bool StatSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    return ok;
}

float StatSummary::getValue() const
{
    return value_;
}

void StatSummary::setValue(float value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool StatSummary::valueIsSet() const
{
    return valueIsSet_;
}

void StatSummary::unsetvalue()
{
    valueIsSet_ = false;
}

std::string StatSummary::getDate() const
{
    return date_;
}

void StatSummary::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool StatSummary::dateIsSet() const
{
    return dateIsSet_;
}

void StatSummary::unsetdate()
{
    dateIsSet_ = false;
}

}
}
}
}
}


