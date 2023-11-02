

#include "huaweicloud/dbss/v1/model/KeyValueBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




KeyValueBean::KeyValueBean()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

KeyValueBean::~KeyValueBean() = default;

void KeyValueBean::validate()
{
}

web::json::value KeyValueBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool KeyValueBean::fromJson(const web::json::value& val)
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
    return ok;
}


std::string KeyValueBean::getKey() const
{
    return key_;
}

void KeyValueBean::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool KeyValueBean::keyIsSet() const
{
    return keyIsSet_;
}

void KeyValueBean::unsetkey()
{
    keyIsSet_ = false;
}

std::string KeyValueBean::getValue() const
{
    return value_;
}

void KeyValueBean::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool KeyValueBean::valueIsSet() const
{
    return valueIsSet_;
}

void KeyValueBean::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


