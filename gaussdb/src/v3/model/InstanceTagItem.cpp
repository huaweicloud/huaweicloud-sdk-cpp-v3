

#include "huaweicloud/gaussdb/v3/model/InstanceTagItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InstanceTagItem::InstanceTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

InstanceTagItem::~InstanceTagItem() = default;

void InstanceTagItem::validate()
{
}

web::json::value InstanceTagItem::toJson() const
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

bool InstanceTagItem::fromJson(const web::json::value& val)
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

std::string InstanceTagItem::getKey() const
{
    return key_;
}

void InstanceTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool InstanceTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void InstanceTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string InstanceTagItem::getValue() const
{
    return value_;
}

void InstanceTagItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool InstanceTagItem::valueIsSet() const
{
    return valueIsSet_;
}

void InstanceTagItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


