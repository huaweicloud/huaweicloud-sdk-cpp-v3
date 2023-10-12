

#include "huaweicloud/rds/v3/model/TagDelWithKeyValue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TagDelWithKeyValue::TagDelWithKeyValue()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagDelWithKeyValue::~TagDelWithKeyValue() = default;

void TagDelWithKeyValue::validate()
{
}

web::json::value TagDelWithKeyValue::toJson() const
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
bool TagDelWithKeyValue::fromJson(const web::json::value& val)
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


std::string TagDelWithKeyValue::getKey() const
{
    return key_;
}

void TagDelWithKeyValue::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagDelWithKeyValue::keyIsSet() const
{
    return keyIsSet_;
}

void TagDelWithKeyValue::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagDelWithKeyValue::getValue() const
{
    return value_;
}

void TagDelWithKeyValue::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagDelWithKeyValue::valueIsSet() const
{
    return valueIsSet_;
}

void TagDelWithKeyValue::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


