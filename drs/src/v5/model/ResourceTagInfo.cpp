

#include "huaweicloud/drs/v5/model/ResourceTagInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ResourceTagInfo::ResourceTagInfo()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagInfo::~ResourceTagInfo() = default;

void ResourceTagInfo::validate()
{
}

web::json::value ResourceTagInfo::toJson() const
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
bool ResourceTagInfo::fromJson(const web::json::value& val)
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


std::string ResourceTagInfo::getKey() const
{
    return key_;
}

void ResourceTagInfo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagInfo::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagInfo::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagInfo::getValue() const
{
    return value_;
}

void ResourceTagInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagInfo::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


