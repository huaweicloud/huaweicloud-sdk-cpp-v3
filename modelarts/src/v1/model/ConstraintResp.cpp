

#include "huaweicloud/modelarts/v1/model/ConstraintResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ConstraintResp::ConstraintResp()
{
    attribute_ = "";
    attributeIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    valueIsSet_ = false;
}

ConstraintResp::~ConstraintResp() = default;

void ConstraintResp::validate()
{
}

web::json::value ConstraintResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ConstraintResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ConstraintResp::getAttribute() const
{
    return attribute_;
}

void ConstraintResp::setAttribute(const std::string& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool ConstraintResp::attributeIsSet() const
{
    return attributeIsSet_;
}

void ConstraintResp::unsetattribute()
{
    attributeIsSet_ = false;
}

std::string ConstraintResp::getOperator() const
{
    return operator_;
}

void ConstraintResp::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ConstraintResp::operatorIsSet() const
{
    return operatorIsSet_;
}

void ConstraintResp::unsetoperator()
{
    operatorIsSet_ = false;
}

Object ConstraintResp::getValue() const
{
    return value_;
}

void ConstraintResp::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ConstraintResp::valueIsSet() const
{
    return valueIsSet_;
}

void ConstraintResp::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


