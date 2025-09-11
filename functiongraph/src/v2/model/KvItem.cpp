

#include "huaweicloud/functiongraph/v2/model/KvItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




KvItem::KvItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

KvItem::~KvItem() = default;

void KvItem::validate()
{
}

web::json::value KvItem::toJson() const
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
bool KvItem::fromJson(const web::json::value& val)
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


std::string KvItem::getKey() const
{
    return key_;
}

void KvItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool KvItem::keyIsSet() const
{
    return keyIsSet_;
}

void KvItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string KvItem::getValue() const
{
    return value_;
}

void KvItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool KvItem::valueIsSet() const
{
    return valueIsSet_;
}

void KvItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


