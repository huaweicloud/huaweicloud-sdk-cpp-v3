

#include "huaweicloud/ecs/v2/model/ServerTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerTag::ServerTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ServerTag::~ServerTag() = default;

void ServerTag::validate()
{
}

web::json::value ServerTag::toJson() const
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

bool ServerTag::fromJson(const web::json::value& val)
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

std::string ServerTag::getKey() const
{
    return key_;
}

void ServerTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ServerTag::keyIsSet() const
{
    return keyIsSet_;
}

void ServerTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string ServerTag::getValue() const
{
    return value_;
}

void ServerTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ServerTag::valueIsSet() const
{
    return valueIsSet_;
}

void ServerTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


