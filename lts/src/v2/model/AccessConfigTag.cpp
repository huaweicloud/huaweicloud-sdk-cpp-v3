

#include "huaweicloud/lts/v2/model/AccessConfigTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigTag::AccessConfigTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

AccessConfigTag::~AccessConfigTag() = default;

void AccessConfigTag::validate()
{
}

web::json::value AccessConfigTag::toJson() const
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

bool AccessConfigTag::fromJson(const web::json::value& val)
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


std::string AccessConfigTag::getKey() const
{
    return key_;
}

void AccessConfigTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AccessConfigTag::keyIsSet() const
{
    return keyIsSet_;
}

void AccessConfigTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string AccessConfigTag::getValue() const
{
    return value_;
}

void AccessConfigTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AccessConfigTag::valueIsSet() const
{
    return valueIsSet_;
}

void AccessConfigTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


