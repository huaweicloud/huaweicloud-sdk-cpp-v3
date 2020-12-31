

#include "huaweicloud/eip/model/ResourceTagOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ResourceTagOption::ResourceTagOption()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagOption::~ResourceTagOption() = default;

void ResourceTagOption::validate()
{
}

web::json::value ResourceTagOption::toJson() const
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

bool ResourceTagOption::fromJson(const web::json::value& val)
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


std::string ResourceTagOption::getKey() const
{
    return key_;
}

void ResourceTagOption::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagOption::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagOption::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagOption::getValue() const
{
    return value_;
}

void ResourceTagOption::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagOption::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagOption::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


