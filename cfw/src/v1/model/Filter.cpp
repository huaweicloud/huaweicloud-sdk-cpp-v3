

#include "huaweicloud/cfw/v1/model/Filter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Filter::Filter()
{
    field_ = "";
    fieldIsSet_ = false;
    valuesIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
}

Filter::~Filter() = default;

void Filter::validate()
{
}

web::json::value Filter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldIsSet_) {
        val[utility::conversions::to_string_t("field")] = ModelBase::toJson(field_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }

    return val;
}
bool Filter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setField(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    return ok;
}


std::string Filter::getField() const
{
    return field_;
}

void Filter::setField(const std::string& value)
{
    field_ = value;
    fieldIsSet_ = true;
}

bool Filter::fieldIsSet() const
{
    return fieldIsSet_;
}

void Filter::unsetfield()
{
    fieldIsSet_ = false;
}

std::vector<std::string>& Filter::getValues()
{
    return values_;
}

void Filter::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool Filter::valuesIsSet() const
{
    return valuesIsSet_;
}

void Filter::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string Filter::getOperator() const
{
    return operator_;
}

void Filter::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool Filter::operatorIsSet() const
{
    return operatorIsSet_;
}

void Filter::unsetoperator()
{
    operatorIsSet_ = false;
}

}
}
}
}
}


