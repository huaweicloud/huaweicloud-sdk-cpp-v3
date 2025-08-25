

#include "huaweicloud/cce/v3/model/UserTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UserTag::UserTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

UserTag::~UserTag() = default;

void UserTag::validate()
{
}

web::json::value UserTag::toJson() const
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
bool UserTag::fromJson(const web::json::value& val)
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


std::string UserTag::getKey() const
{
    return key_;
}

void UserTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool UserTag::keyIsSet() const
{
    return keyIsSet_;
}

void UserTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string UserTag::getValue() const
{
    return value_;
}

void UserTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UserTag::valueIsSet() const
{
    return valueIsSet_;
}

void UserTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


