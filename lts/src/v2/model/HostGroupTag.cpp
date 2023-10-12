

#include "huaweicloud/lts/v2/model/HostGroupTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




HostGroupTag::HostGroupTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

HostGroupTag::~HostGroupTag() = default;

void HostGroupTag::validate()
{
}

web::json::value HostGroupTag::toJson() const
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
bool HostGroupTag::fromJson(const web::json::value& val)
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


std::string HostGroupTag::getKey() const
{
    return key_;
}

void HostGroupTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool HostGroupTag::keyIsSet() const
{
    return keyIsSet_;
}

void HostGroupTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string HostGroupTag::getValue() const
{
    return value_;
}

void HostGroupTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool HostGroupTag::valueIsSet() const
{
    return valueIsSet_;
}

void HostGroupTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


