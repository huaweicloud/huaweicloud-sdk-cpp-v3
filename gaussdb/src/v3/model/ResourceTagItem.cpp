

#include "huaweicloud/gaussdb/v3/model/ResourceTagItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResourceTagItem::ResourceTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ResourceTagItem::~ResourceTagItem() = default;

void ResourceTagItem::validate()
{
}

web::json::value ResourceTagItem::toJson() const
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

bool ResourceTagItem::fromJson(const web::json::value& val)
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

std::string ResourceTagItem::getKey() const
{
    return key_;
}

void ResourceTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ResourceTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void ResourceTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string ResourceTagItem::getValue() const
{
    return value_;
}

void ResourceTagItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResourceTagItem::valueIsSet() const
{
    return valueIsSet_;
}

void ResourceTagItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


