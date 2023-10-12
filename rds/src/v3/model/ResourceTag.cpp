

#include "huaweicloud/rds/v3/model/ResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResourceTag::ResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    tagType_ = "";
    tagTypeIsSet_ = false;
}

ResourceTag::~ResourceTag() = default;

void ResourceTag::validate()
{
}

web::json::value ResourceTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(tagTypeIsSet_) {
        val[utility::conversions::to_string_t("tag_type")] = ModelBase::toJson(tagType_);
    }

    return val;
}
bool ResourceTag::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagType(refVal);
        }
    }
    return ok;
}


std::string ResourceTag::getKey() const
{
    return key_;
}

void ResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTag::getValue() const
{
    return value_;
}

void ResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResourceTag::getTagType() const
{
    return tagType_;
}

void ResourceTag::setTagType(const std::string& value)
{
    tagType_ = value;
    tagTypeIsSet_ = true;
}

bool ResourceTag::tagTypeIsSet() const
{
    return tagTypeIsSet_;
}

void ResourceTag::unsettagType()
{
    tagTypeIsSet_ = false;
}

}
}
}
}
}


