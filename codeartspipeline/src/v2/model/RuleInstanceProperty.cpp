

#include "huaweicloud/codeartspipeline/v2/model/RuleInstanceProperty.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RuleInstanceProperty::RuleInstanceProperty()
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
}

RuleInstanceProperty::~RuleInstanceProperty() = default;

void RuleInstanceProperty::validate()
{
}

web::json::value RuleInstanceProperty::toJson() const
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

    return val;
}
bool RuleInstanceProperty::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RuleInstanceProperty::getKey() const
{
    return key_;
}

void RuleInstanceProperty::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool RuleInstanceProperty::keyIsSet() const
{
    return keyIsSet_;
}

void RuleInstanceProperty::unsetkey()
{
    keyIsSet_ = false;
}

std::string RuleInstanceProperty::getType() const
{
    return type_;
}

void RuleInstanceProperty::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleInstanceProperty::typeIsSet() const
{
    return typeIsSet_;
}

void RuleInstanceProperty::unsettype()
{
    typeIsSet_ = false;
}

std::string RuleInstanceProperty::getName() const
{
    return name_;
}

void RuleInstanceProperty::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleInstanceProperty::nameIsSet() const
{
    return nameIsSet_;
}

void RuleInstanceProperty::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleInstanceProperty::getOperator() const
{
    return operator_;
}

void RuleInstanceProperty::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool RuleInstanceProperty::operatorIsSet() const
{
    return operatorIsSet_;
}

void RuleInstanceProperty::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string RuleInstanceProperty::getValue() const
{
    return value_;
}

void RuleInstanceProperty::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool RuleInstanceProperty::valueIsSet() const
{
    return valueIsSet_;
}

void RuleInstanceProperty::unsetvalue()
{
    valueIsSet_ = false;
}

std::string RuleInstanceProperty::getValueType() const
{
    return valueType_;
}

void RuleInstanceProperty::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool RuleInstanceProperty::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void RuleInstanceProperty::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

}
}
}
}
}


