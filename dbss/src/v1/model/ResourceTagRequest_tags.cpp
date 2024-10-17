

#include "huaweicloud/dbss/v1/model/ResourceTagRequest_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceTagRequest_tags::ResourceTagRequest_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagRequest_tags::~ResourceTagRequest_tags() = default;

void ResourceTagRequest_tags::validate()
{
}

web::json::value ResourceTagRequest_tags::toJson() const
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
bool ResourceTagRequest_tags::fromJson(const web::json::value& val)
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


std::string ResourceTagRequest_tags::getKey() const
{
    return key_;
}

void ResourceTagRequest_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagRequest_tags::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagRequest_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagRequest_tags::getValue() const
{
    return value_;
}

void ResourceTagRequest_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagRequest_tags::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagRequest_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


