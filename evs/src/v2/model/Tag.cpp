

#include "huaweicloud/evs/v2/model/Tag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Tag::Tag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

Tag::~Tag() = default;

void Tag::validate()
{
}

web::json::value Tag::toJson() const
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

bool Tag::fromJson(const web::json::value& val)
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


std::string Tag::getKey() const
{
    return key_;
}

void Tag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Tag::keyIsSet() const
{
    return keyIsSet_;
}

void Tag::unsetkey()
{
    keyIsSet_ = false;
}

std::string Tag::getValue() const
{
    return value_;
}

void Tag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Tag::valueIsSet() const
{
    return valueIsSet_;
}

void Tag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


