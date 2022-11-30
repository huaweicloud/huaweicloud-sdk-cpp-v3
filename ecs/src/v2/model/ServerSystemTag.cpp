

#include "huaweicloud/ecs/v2/model/ServerSystemTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerSystemTag::ServerSystemTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ServerSystemTag::~ServerSystemTag() = default;

void ServerSystemTag::validate()
{
}

web::json::value ServerSystemTag::toJson() const
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

bool ServerSystemTag::fromJson(const web::json::value& val)
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


std::string ServerSystemTag::getKey() const
{
    return key_;
}

void ServerSystemTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ServerSystemTag::keyIsSet() const
{
    return keyIsSet_;
}

void ServerSystemTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string ServerSystemTag::getValue() const
{
    return value_;
}

void ServerSystemTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ServerSystemTag::valueIsSet() const
{
    return valueIsSet_;
}

void ServerSystemTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


