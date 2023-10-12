

#include "huaweicloud/csms/v1/model/TagItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




TagItem::TagItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagItem::~TagItem() = default;

void TagItem::validate()
{
}

web::json::value TagItem::toJson() const
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
bool TagItem::fromJson(const web::json::value& val)
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


std::string TagItem::getKey() const
{
    return key_;
}

void TagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagItem::keyIsSet() const
{
    return keyIsSet_;
}

void TagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagItem::getValue() const
{
    return value_;
}

void TagItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagItem::valueIsSet() const
{
    return valueIsSet_;
}

void TagItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


