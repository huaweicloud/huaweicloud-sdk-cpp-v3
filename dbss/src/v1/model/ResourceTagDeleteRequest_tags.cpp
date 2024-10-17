

#include "huaweicloud/dbss/v1/model/ResourceTagDeleteRequest_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceTagDeleteRequest_tags::ResourceTagDeleteRequest_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagDeleteRequest_tags::~ResourceTagDeleteRequest_tags() = default;

void ResourceTagDeleteRequest_tags::validate()
{
}

web::json::value ResourceTagDeleteRequest_tags::toJson() const
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
bool ResourceTagDeleteRequest_tags::fromJson(const web::json::value& val)
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


std::string ResourceTagDeleteRequest_tags::getKey() const
{
    return key_;
}

void ResourceTagDeleteRequest_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagDeleteRequest_tags::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagDeleteRequest_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagDeleteRequest_tags::getValue() const
{
    return value_;
}

void ResourceTagDeleteRequest_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagDeleteRequest_tags::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagDeleteRequest_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


