

#include "huaweicloud/functiongraph/v2/model/MonthUsed.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




MonthUsed::MonthUsed()
{
    date_ = "";
    dateIsSet_ = false;
    value_ = 0.0;
    valueIsSet_ = false;
}

MonthUsed::~MonthUsed() = default;

void MonthUsed::validate()
{
}

web::json::value MonthUsed::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool MonthUsed::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
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


std::string MonthUsed::getDate() const
{
    return date_;
}

void MonthUsed::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool MonthUsed::dateIsSet() const
{
    return dateIsSet_;
}

void MonthUsed::unsetdate()
{
    dateIsSet_ = false;
}

double MonthUsed::getValue() const
{
    return value_;
}

void MonthUsed::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool MonthUsed::valueIsSet() const
{
    return valueIsSet_;
}

void MonthUsed::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


