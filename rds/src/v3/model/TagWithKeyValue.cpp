

#include "huaweicloud/rds/v3/model/TagWithKeyValue.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TagWithKeyValue::TagWithKeyValue()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagWithKeyValue::~TagWithKeyValue() = default;

void TagWithKeyValue::validate()
{
}

web::json::value TagWithKeyValue::toJson() const
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

bool TagWithKeyValue::fromJson(const web::json::value& val)
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

std::string TagWithKeyValue::getKey() const
{
    return key_;
}

void TagWithKeyValue::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagWithKeyValue::keyIsSet() const
{
    return keyIsSet_;
}

void TagWithKeyValue::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagWithKeyValue::getValue() const
{
    return value_;
}

void TagWithKeyValue::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagWithKeyValue::valueIsSet() const
{
    return valueIsSet_;
}

void TagWithKeyValue::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


