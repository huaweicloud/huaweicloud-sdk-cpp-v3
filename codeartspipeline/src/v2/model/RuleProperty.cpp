

#include "huaweicloud/codeartspipeline/v2/model/RuleProperty.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RuleProperty::RuleProperty()
{
    key_ = "";
    keyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    valueType_ = "";
    valueTypeIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
}

RuleProperty::~RuleProperty() = default;

void RuleProperty::validate()
{
}

web::json::value RuleProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(valueTypeIsSet_) {
        val[utility::conversions::to_string_t("value_type")] = ModelBase::toJson(valueType_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }

    return val;
}
bool RuleProperty::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    return ok;
}


std::string RuleProperty::getKey() const
{
    return key_;
}

void RuleProperty::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool RuleProperty::keyIsSet() const
{
    return keyIsSet_;
}

void RuleProperty::unsetkey()
{
    keyIsSet_ = false;
}

std::string RuleProperty::getType() const
{
    return type_;
}

void RuleProperty::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleProperty::typeIsSet() const
{
    return typeIsSet_;
}

void RuleProperty::unsettype()
{
    typeIsSet_ = false;
}

std::string RuleProperty::getName() const
{
    return name_;
}

void RuleProperty::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleProperty::nameIsSet() const
{
    return nameIsSet_;
}

void RuleProperty::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleProperty::getOperator() const
{
    return operator_;
}

void RuleProperty::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool RuleProperty::operatorIsSet() const
{
    return operatorIsSet_;
}

void RuleProperty::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string RuleProperty::getValue() const
{
    return value_;
}

void RuleProperty::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool RuleProperty::valueIsSet() const
{
    return valueIsSet_;
}

void RuleProperty::unsetvalue()
{
    valueIsSet_ = false;
}

std::string RuleProperty::getValueType() const
{
    return valueType_;
}

void RuleProperty::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool RuleProperty::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void RuleProperty::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

bool RuleProperty::isIsValid() const
{
    return isValid_;
}

void RuleProperty::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool RuleProperty::isValidIsSet() const
{
    return isValidIsSet_;
}

void RuleProperty::unsetisValid()
{
    isValidIsSet_ = false;
}

}
}
}
}
}


