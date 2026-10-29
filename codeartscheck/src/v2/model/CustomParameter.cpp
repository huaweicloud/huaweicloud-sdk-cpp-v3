

#include "huaweicloud/codeartscheck/v2/model/CustomParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CustomParameter::CustomParameter()
{
    isPrivate_ = false;
    isPrivateIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CustomParameter::~CustomParameter() = default;

void CustomParameter::validate()
{
}

web::json::value CustomParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isPrivateIsSet_) {
        val[utility::conversions::to_string_t("isPrivate")] = ModelBase::toJson(isPrivate_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CustomParameter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isPrivate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isPrivate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrivate(refVal);
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


bool CustomParameter::isIsPrivate() const
{
    return isPrivate_;
}

void CustomParameter::setIsPrivate(bool value)
{
    isPrivate_ = value;
    isPrivateIsSet_ = true;
}

bool CustomParameter::isPrivateIsSet() const
{
    return isPrivateIsSet_;
}

void CustomParameter::unsetisPrivate()
{
    isPrivateIsSet_ = false;
}

std::string CustomParameter::getKey() const
{
    return key_;
}

void CustomParameter::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CustomParameter::keyIsSet() const
{
    return keyIsSet_;
}

void CustomParameter::unsetkey()
{
    keyIsSet_ = false;
}

std::string CustomParameter::getValue() const
{
    return value_;
}

void CustomParameter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomParameter::valueIsSet() const
{
    return valueIsSet_;
}

void CustomParameter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


