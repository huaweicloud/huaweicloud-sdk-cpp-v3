

#include "huaweicloud/cdn/v2/model/EpResourceTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




EpResourceTag::EpResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

EpResourceTag::~EpResourceTag() = default;

void EpResourceTag::validate()
{
}

web::json::value EpResourceTag::toJson() const
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

bool EpResourceTag::fromJson(const web::json::value& val)
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

std::string EpResourceTag::getKey() const
{
    return key_;
}

void EpResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool EpResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void EpResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string EpResourceTag::getValue() const
{
    return value_;
}

void EpResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool EpResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void EpResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


