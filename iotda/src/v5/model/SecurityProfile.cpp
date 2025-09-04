

#include "huaweicloud/iotda/v5/model/SecurityProfile.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SecurityProfile::SecurityProfile()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

SecurityProfile::~SecurityProfile() = default;

void SecurityProfile::validate()
{
}

web::json::value SecurityProfile::toJson() const
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
bool SecurityProfile::fromJson(const web::json::value& val)
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


std::string SecurityProfile::getKey() const
{
    return key_;
}

void SecurityProfile::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SecurityProfile::keyIsSet() const
{
    return keyIsSet_;
}

void SecurityProfile::unsetkey()
{
    keyIsSet_ = false;
}

Object SecurityProfile::getValue() const
{
    return value_;
}

void SecurityProfile::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SecurityProfile::valueIsSet() const
{
    return valueIsSet_;
}

void SecurityProfile::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


