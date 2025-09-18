

#include "huaweicloud/projectman/v4/model/CustomFeildRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CustomFeildRecord::CustomFeildRecord()
{
    key_ = "";
    keyIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CustomFeildRecord::~CustomFeildRecord() = default;

void CustomFeildRecord::validate()
{
}

web::json::value CustomFeildRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CustomFeildRecord::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string CustomFeildRecord::getKey() const
{
    return key_;
}

void CustomFeildRecord::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CustomFeildRecord::keyIsSet() const
{
    return keyIsSet_;
}

void CustomFeildRecord::unsetkey()
{
    keyIsSet_ = false;
}

std::string CustomFeildRecord::getName() const
{
    return name_;
}

void CustomFeildRecord::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomFeildRecord::nameIsSet() const
{
    return nameIsSet_;
}

void CustomFeildRecord::unsetname()
{
    nameIsSet_ = false;
}

std::string CustomFeildRecord::getValue() const
{
    return value_;
}

void CustomFeildRecord::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomFeildRecord::valueIsSet() const
{
    return valueIsSet_;
}

void CustomFeildRecord::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


