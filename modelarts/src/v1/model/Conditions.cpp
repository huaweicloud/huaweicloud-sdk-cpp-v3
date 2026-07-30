

#include "huaweicloud/modelarts/v1/model/Conditions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Conditions::Conditions()
{
    key_ = "";
    keyIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    valueIsSet_ = false;
}

Conditions::~Conditions() = default;

void Conditions::validate()
{
}

web::json::value Conditions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool Conditions::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string Conditions::getKey() const
{
    return key_;
}

void Conditions::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Conditions::keyIsSet() const
{
    return keyIsSet_;
}

void Conditions::unsetkey()
{
    keyIsSet_ = false;
}

std::string Conditions::getOperator() const
{
    return operator_;
}

void Conditions::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool Conditions::operatorIsSet() const
{
    return operatorIsSet_;
}

void Conditions::unsetoperator()
{
    operatorIsSet_ = false;
}

std::vector<std::string>& Conditions::getValue()
{
    return value_;
}

void Conditions::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Conditions::valueIsSet() const
{
    return valueIsSet_;
}

void Conditions::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


