

#include "huaweicloud/csms/v1/model/SysTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




SysTag::SysTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

SysTag::~SysTag() = default;

void SysTag::validate()
{
}

web::json::value SysTag::toJson() const
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
bool SysTag::fromJson(const web::json::value& val)
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


std::string SysTag::getKey() const
{
    return key_;
}

void SysTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SysTag::keyIsSet() const
{
    return keyIsSet_;
}

void SysTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string SysTag::getValue() const
{
    return value_;
}

void SysTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SysTag::valueIsSet() const
{
    return valueIsSet_;
}

void SysTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


