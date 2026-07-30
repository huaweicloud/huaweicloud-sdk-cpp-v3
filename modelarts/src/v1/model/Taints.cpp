

#include "huaweicloud/modelarts/v1/model/Taints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Taints::Taints()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    effect_ = "";
    effectIsSet_ = false;
}

Taints::~Taints() = default;

void Taints::validate()
{
}

web::json::value Taints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(effectIsSet_) {
        val[utility::conversions::to_string_t("effect")] = ModelBase::toJson(effect_);
    }

    return val;
}
bool Taints::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffect(refVal);
        }
    }
    return ok;
}


std::string Taints::getKey() const
{
    return key_;
}

void Taints::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Taints::keyIsSet() const
{
    return keyIsSet_;
}

void Taints::unsetkey()
{
    keyIsSet_ = false;
}

std::string Taints::getValue() const
{
    return value_;
}

void Taints::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Taints::valueIsSet() const
{
    return valueIsSet_;
}

void Taints::unsetvalue()
{
    valueIsSet_ = false;
}

std::string Taints::getEffect() const
{
    return effect_;
}

void Taints::setEffect(const std::string& value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool Taints::effectIsSet() const
{
    return effectIsSet_;
}

void Taints::unseteffect()
{
    effectIsSet_ = false;
}

}
}
}
}
}


