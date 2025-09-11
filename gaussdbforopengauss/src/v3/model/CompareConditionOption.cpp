

#include "huaweicloud/gaussdbforopengauss/v3/model/CompareConditionOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CompareConditionOption::CompareConditionOption()
{
    name_ = "";
    nameIsSet_ = false;
    enableEqual_ = false;
    enableEqualIsSet_ = false;
    min_ = 0L;
    minIsSet_ = false;
    max_ = 0L;
    maxIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
}

CompareConditionOption::~CompareConditionOption() = default;

void CompareConditionOption::validate()
{
}

web::json::value CompareConditionOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableEqualIsSet_) {
        val[utility::conversions::to_string_t("enable_equal")] = ModelBase::toJson(enableEqual_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CompareConditionOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_equal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_equal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableEqual(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
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


std::string CompareConditionOption::getName() const
{
    return name_;
}

void CompareConditionOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CompareConditionOption::nameIsSet() const
{
    return nameIsSet_;
}

void CompareConditionOption::unsetname()
{
    nameIsSet_ = false;
}

bool CompareConditionOption::isEnableEqual() const
{
    return enableEqual_;
}

void CompareConditionOption::setEnableEqual(bool value)
{
    enableEqual_ = value;
    enableEqualIsSet_ = true;
}

bool CompareConditionOption::enableEqualIsSet() const
{
    return enableEqualIsSet_;
}

void CompareConditionOption::unsetenableEqual()
{
    enableEqualIsSet_ = false;
}

int64_t CompareConditionOption::getMin() const
{
    return min_;
}

void CompareConditionOption::setMin(int64_t value)
{
    min_ = value;
    minIsSet_ = true;
}

bool CompareConditionOption::minIsSet() const
{
    return minIsSet_;
}

void CompareConditionOption::unsetmin()
{
    minIsSet_ = false;
}

int64_t CompareConditionOption::getMax() const
{
    return max_;
}

void CompareConditionOption::setMax(int64_t value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool CompareConditionOption::maxIsSet() const
{
    return maxIsSet_;
}

void CompareConditionOption::unsetmax()
{
    maxIsSet_ = false;
}

int64_t CompareConditionOption::getValue() const
{
    return value_;
}

void CompareConditionOption::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CompareConditionOption::valueIsSet() const
{
    return valueIsSet_;
}

void CompareConditionOption::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


