

#include "huaweicloud/rgc/v1/model/EnableControlParameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnableControlParameters::EnableControlParameters()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

EnableControlParameters::~EnableControlParameters() = default;

void EnableControlParameters::validate()
{
}

web::json::value EnableControlParameters::toJson() const
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
bool EnableControlParameters::fromJson(const web::json::value& val)
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string EnableControlParameters::getKey() const
{
    return key_;
}

void EnableControlParameters::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool EnableControlParameters::keyIsSet() const
{
    return keyIsSet_;
}

void EnableControlParameters::unsetkey()
{
    keyIsSet_ = false;
}

Object EnableControlParameters::getValue() const
{
    return value_;
}

void EnableControlParameters::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool EnableControlParameters::valueIsSet() const
{
    return valueIsSet_;
}

void EnableControlParameters::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


