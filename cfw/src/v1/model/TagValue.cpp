

#include "huaweicloud/cfw/v1/model/TagValue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




TagValue::TagValue()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

TagValue::~TagValue() = default;

void TagValue::validate()
{
}

web::json::value TagValue::toJson() const
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
bool TagValue::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string TagValue::getKey() const
{
    return key_;
}

void TagValue::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagValue::keyIsSet() const
{
    return keyIsSet_;
}

void TagValue::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagValue::getValue()
{
    return value_;
}

void TagValue::setValue(const std::vector<std::string>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagValue::valueIsSet() const
{
    return valueIsSet_;
}

void TagValue::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


