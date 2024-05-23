

#include "huaweicloud/ram/v1/model/Untag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




Untag::Untag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

Untag::~Untag() = default;

void Untag::validate()
{
}

web::json::value Untag::toJson() const
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
bool Untag::fromJson(const web::json::value& val)
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


std::string Untag::getKey() const
{
    return key_;
}

void Untag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Untag::keyIsSet() const
{
    return keyIsSet_;
}

void Untag::unsetkey()
{
    keyIsSet_ = false;
}

std::string Untag::getValue() const
{
    return value_;
}

void Untag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Untag::valueIsSet() const
{
    return valueIsSet_;
}

void Untag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


