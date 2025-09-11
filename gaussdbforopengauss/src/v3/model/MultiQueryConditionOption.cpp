

#include "huaweicloud/gaussdbforopengauss/v3/model/MultiQueryConditionOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




MultiQueryConditionOption::MultiQueryConditionOption()
{
    name_ = "";
    nameIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    isFuzzy_ = false;
    isFuzzyIsSet_ = false;
    valuesIsSet_ = false;
}

MultiQueryConditionOption::~MultiQueryConditionOption() = default;

void MultiQueryConditionOption::validate()
{
}

web::json::value MultiQueryConditionOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(isFuzzyIsSet_) {
        val[utility::conversions::to_string_t("is_fuzzy")] = ModelBase::toJson(isFuzzy_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool MultiQueryConditionOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_fuzzy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_fuzzy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFuzzy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string MultiQueryConditionOption::getName() const
{
    return name_;
}

void MultiQueryConditionOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MultiQueryConditionOption::nameIsSet() const
{
    return nameIsSet_;
}

void MultiQueryConditionOption::unsetname()
{
    nameIsSet_ = false;
}

std::string MultiQueryConditionOption::getCondition() const
{
    return condition_;
}

void MultiQueryConditionOption::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool MultiQueryConditionOption::conditionIsSet() const
{
    return conditionIsSet_;
}

void MultiQueryConditionOption::unsetcondition()
{
    conditionIsSet_ = false;
}

bool MultiQueryConditionOption::isIsFuzzy() const
{
    return isFuzzy_;
}

void MultiQueryConditionOption::setIsFuzzy(bool value)
{
    isFuzzy_ = value;
    isFuzzyIsSet_ = true;
}

bool MultiQueryConditionOption::isFuzzyIsSet() const
{
    return isFuzzyIsSet_;
}

void MultiQueryConditionOption::unsetisFuzzy()
{
    isFuzzyIsSet_ = false;
}

std::vector<std::string>& MultiQueryConditionOption::getValues()
{
    return values_;
}

void MultiQueryConditionOption::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool MultiQueryConditionOption::valuesIsSet() const
{
    return valuesIsSet_;
}

void MultiQueryConditionOption::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


