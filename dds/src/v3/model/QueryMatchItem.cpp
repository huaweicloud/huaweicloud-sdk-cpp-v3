

#include "huaweicloud/dds/v3/model/QueryMatchItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




QueryMatchItem::QueryMatchItem()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

QueryMatchItem::~QueryMatchItem() = default;

void QueryMatchItem::validate()
{
}

web::json::value QueryMatchItem::toJson() const
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
bool QueryMatchItem::fromJson(const web::json::value& val)
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


std::string QueryMatchItem::getKey() const
{
    return key_;
}

void QueryMatchItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool QueryMatchItem::keyIsSet() const
{
    return keyIsSet_;
}

void QueryMatchItem::unsetkey()
{
    keyIsSet_ = false;
}

std::string QueryMatchItem::getValue() const
{
    return value_;
}

void QueryMatchItem::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool QueryMatchItem::valueIsSet() const
{
    return valueIsSet_;
}

void QueryMatchItem::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


