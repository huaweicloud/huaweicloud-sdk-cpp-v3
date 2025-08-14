

#include "huaweicloud/iotda/v5/model/PropertyFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




PropertyFilter::PropertyFilter()
{
    path_ = "";
    pathIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    inValuesIsSet_ = false;
    strategyIsSet_ = false;
}

PropertyFilter::~PropertyFilter() = default;

void PropertyFilter::validate()
{
}

web::json::value PropertyFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(inValuesIsSet_) {
        val[utility::conversions::to_string_t("in_values")] = ModelBase::toJson(inValues_);
    }
    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }

    return val;
}
bool PropertyFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            Strategy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    return ok;
}


std::string PropertyFilter::getPath() const
{
    return path_;
}

void PropertyFilter::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool PropertyFilter::pathIsSet() const
{
    return pathIsSet_;
}

void PropertyFilter::unsetpath()
{
    pathIsSet_ = false;
}

std::string PropertyFilter::getOperator() const
{
    return operator_;
}

void PropertyFilter::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool PropertyFilter::operatorIsSet() const
{
    return operatorIsSet_;
}

void PropertyFilter::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string PropertyFilter::getValue() const
{
    return value_;
}

void PropertyFilter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PropertyFilter::valueIsSet() const
{
    return valueIsSet_;
}

void PropertyFilter::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<std::string>& PropertyFilter::getInValues()
{
    return inValues_;
}

void PropertyFilter::setInValues(const std::vector<std::string>& value)
{
    inValues_ = value;
    inValuesIsSet_ = true;
}

bool PropertyFilter::inValuesIsSet() const
{
    return inValuesIsSet_;
}

void PropertyFilter::unsetinValues()
{
    inValuesIsSet_ = false;
}

Strategy PropertyFilter::getStrategy() const
{
    return strategy_;
}

void PropertyFilter::setStrategy(const Strategy& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool PropertyFilter::strategyIsSet() const
{
    return strategyIsSet_;
}

void PropertyFilter::unsetstrategy()
{
    strategyIsSet_ = false;
}

}
}
}
}
}


