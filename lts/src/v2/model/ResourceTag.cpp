

#include "huaweicloud/lts/v2/model/ResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ResourceTag::ResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    tagsToStreamsEnable_ = "";
    tagsToStreamsEnableIsSet_ = false;
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
    if(tagsToStreamsEnableIsSet_) {
        val[utility::conversions::to_string_t("tags_to_streams_enable")] = ModelBase::toJson(tagsToStreamsEnable_);
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
    if(val.has_field(utility::conversions::to_string_t("tags_to_streams_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_to_streams_enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsToStreamsEnable(refVal);
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

std::string ResourceTag::getTagsToStreamsEnable() const
{
    return tagsToStreamsEnable_;
}

void ResourceTag::setTagsToStreamsEnable(const std::string& value)
{
    tagsToStreamsEnable_ = value;
    tagsToStreamsEnableIsSet_ = true;
}

bool ResourceTag::tagsToStreamsEnableIsSet() const
{
    return tagsToStreamsEnableIsSet_;
}

void ResourceTag::unsettagsToStreamsEnable()
{
    tagsToStreamsEnableIsSet_ = false;
}

}
}
}
}
}


