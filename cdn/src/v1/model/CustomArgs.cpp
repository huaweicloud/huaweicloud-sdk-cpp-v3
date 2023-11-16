

#include "huaweicloud/cdn/v1/model/CustomArgs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CustomArgs::CustomArgs()
{
    type_ = "";
    typeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CustomArgs::~CustomArgs() = default;

void CustomArgs::validate()
{
}

web::json::value CustomArgs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CustomArgs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
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
    return ok;
}


std::string CustomArgs::getType() const
{
    return type_;
}

void CustomArgs::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CustomArgs::typeIsSet() const
{
    return typeIsSet_;
}

void CustomArgs::unsettype()
{
    typeIsSet_ = false;
}

std::string CustomArgs::getKey() const
{
    return key_;
}

void CustomArgs::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CustomArgs::keyIsSet() const
{
    return keyIsSet_;
}

void CustomArgs::unsetkey()
{
    keyIsSet_ = false;
}

std::string CustomArgs::getValue() const
{
    return value_;
}

void CustomArgs::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomArgs::valueIsSet() const
{
    return valueIsSet_;
}

void CustomArgs::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


