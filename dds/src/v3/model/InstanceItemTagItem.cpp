

#include "huaweicloud/dds/v3/model/InstanceItemTagItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




InstanceItemTagItem::InstanceItemTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

InstanceItemTagItem::~InstanceItemTagItem() = default;

void InstanceItemTagItem::validate()
{
}

web::json::value InstanceItemTagItem::toJson() const
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

bool InstanceItemTagItem::fromJson(const web::json::value& val)
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

std::string InstanceItemTagItem::getKey() const
{
    return key_;
}

void InstanceItemTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool InstanceItemTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void InstanceItemTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string InstanceItemTagItem::getValue() const
{
    return value_;
}

void InstanceItemTagItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool InstanceItemTagItem::valueIsSet() const
{
    return valueIsSet_;
}

void InstanceItemTagItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


