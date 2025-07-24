

#include "huaweicloud/cloudtest/v1/model/AwParamBasicValue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AwParamBasicValue::AwParamBasicValue()
{
    value_ = "";
    valueIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
}

AwParamBasicValue::~AwParamBasicValue() = default;

void AwParamBasicValue::validate()
{
}

web::json::value AwParamBasicValue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }

    return val;
}
bool AwParamBasicValue::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
        }
    }
    return ok;
}


std::string AwParamBasicValue::getValue() const
{
    return value_;
}

void AwParamBasicValue::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AwParamBasicValue::valueIsSet() const
{
    return valueIsSet_;
}

void AwParamBasicValue::unsetvalue()
{
    valueIsSet_ = false;
}

std::string AwParamBasicValue::getValueRange() const
{
    return valueRange_;
}

void AwParamBasicValue::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool AwParamBasicValue::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void AwParamBasicValue::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

}
}
}
}
}


