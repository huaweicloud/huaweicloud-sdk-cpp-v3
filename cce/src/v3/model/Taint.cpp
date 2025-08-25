

#include "huaweicloud/cce/v3/model/Taint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Taint::Taint()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    effect_ = "";
    effectIsSet_ = false;
}

Taint::~Taint() = default;

void Taint::validate()
{
}

web::json::value Taint::toJson() const
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
bool Taint::fromJson(const web::json::value& val)
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


std::string Taint::getKey() const
{
    return key_;
}

void Taint::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Taint::keyIsSet() const
{
    return keyIsSet_;
}

void Taint::unsetkey()
{
    keyIsSet_ = false;
}

std::string Taint::getValue() const
{
    return value_;
}

void Taint::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Taint::valueIsSet() const
{
    return valueIsSet_;
}

void Taint::unsetvalue()
{
    valueIsSet_ = false;
}

std::string Taint::getEffect() const
{
    return effect_;
}

void Taint::setEffect(const std::string& value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool Taint::effectIsSet() const
{
    return effectIsSet_;
}

void Taint::unseteffect()
{
    effectIsSet_ = false;
}

}
}
}
}
}


