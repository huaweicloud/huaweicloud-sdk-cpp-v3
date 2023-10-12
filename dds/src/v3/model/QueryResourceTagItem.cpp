

#include "huaweicloud/dds/v3/model/QueryResourceTagItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




QueryResourceTagItem::QueryResourceTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

QueryResourceTagItem::~QueryResourceTagItem() = default;

void QueryResourceTagItem::validate()
{
}

web::json::value QueryResourceTagItem::toJson() const
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
bool QueryResourceTagItem::fromJson(const web::json::value& val)
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


std::string QueryResourceTagItem::getKey() const
{
    return key_;
}

void QueryResourceTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool QueryResourceTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void QueryResourceTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string QueryResourceTagItem::getValue() const
{
    return value_;
}

void QueryResourceTagItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool QueryResourceTagItem::valueIsSet() const
{
    return valueIsSet_;
}

void QueryResourceTagItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


