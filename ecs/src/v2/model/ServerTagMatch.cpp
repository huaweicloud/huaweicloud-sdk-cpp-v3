

#include "huaweicloud/ecs/v2/model/ServerTagMatch.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerTagMatch::ServerTagMatch()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ServerTagMatch::~ServerTagMatch() = default;

void ServerTagMatch::validate()
{
}

web::json::value ServerTagMatch::toJson() const
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
bool ServerTagMatch::fromJson(const web::json::value& val)
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


std::string ServerTagMatch::getKey() const
{
    return key_;
}

void ServerTagMatch::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ServerTagMatch::keyIsSet() const
{
    return keyIsSet_;
}

void ServerTagMatch::unsetkey()
{
    keyIsSet_ = false;
}

std::string ServerTagMatch::getValue() const
{
    return value_;
}

void ServerTagMatch::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ServerTagMatch::valueIsSet() const
{
    return valueIsSet_;
}

void ServerTagMatch::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


