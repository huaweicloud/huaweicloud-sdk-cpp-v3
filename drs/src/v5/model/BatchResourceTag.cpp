

#include "huaweicloud/drs/v5/model/BatchResourceTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchResourceTag::BatchResourceTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BatchResourceTag::~BatchResourceTag() = default;

void BatchResourceTag::validate()
{
}

web::json::value BatchResourceTag::toJson() const
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
bool BatchResourceTag::fromJson(const web::json::value& val)
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


std::string BatchResourceTag::getKey() const
{
    return key_;
}

void BatchResourceTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BatchResourceTag::keyIsSet() const
{
    return keyIsSet_;
}

void BatchResourceTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string BatchResourceTag::getValue() const
{
    return value_;
}

void BatchResourceTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BatchResourceTag::valueIsSet() const
{
    return valueIsSet_;
}

void BatchResourceTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


