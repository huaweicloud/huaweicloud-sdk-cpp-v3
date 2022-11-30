

#include "huaweicloud/ims/v2/model/TagKeyValue.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




TagKeyValue::TagKeyValue()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagKeyValue::~TagKeyValue() = default;

void TagKeyValue::validate()
{
}

web::json::value TagKeyValue::toJson() const
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

bool TagKeyValue::fromJson(const web::json::value& val)
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


std::string TagKeyValue::getKey() const
{
    return key_;
}

void TagKeyValue::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagKeyValue::keyIsSet() const
{
    return keyIsSet_;
}

void TagKeyValue::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagKeyValue::getValue() const
{
    return value_;
}

void TagKeyValue::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagKeyValue::valueIsSet() const
{
    return valueIsSet_;
}

void TagKeyValue::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


