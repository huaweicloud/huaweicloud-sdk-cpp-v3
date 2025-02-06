

#include "huaweicloud/identitycenterstore/v1/model/PhoneNumberDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




PhoneNumberDto::PhoneNumberDto()
{
    primary_ = false;
    primaryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

PhoneNumberDto::~PhoneNumberDto() = default;

void PhoneNumberDto::validate()
{
}

web::json::value PhoneNumberDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(primaryIsSet_) {
        val[utility::conversions::to_string_t("primary")] = ModelBase::toJson(primary_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool PhoneNumberDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("primary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


bool PhoneNumberDto::isPrimary() const
{
    return primary_;
}

void PhoneNumberDto::setPrimary(bool value)
{
    primary_ = value;
    primaryIsSet_ = true;
}

bool PhoneNumberDto::primaryIsSet() const
{
    return primaryIsSet_;
}

void PhoneNumberDto::unsetprimary()
{
    primaryIsSet_ = false;
}

std::string PhoneNumberDto::getType() const
{
    return type_;
}

void PhoneNumberDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PhoneNumberDto::typeIsSet() const
{
    return typeIsSet_;
}

void PhoneNumberDto::unsettype()
{
    typeIsSet_ = false;
}

std::string PhoneNumberDto::getValue() const
{
    return value_;
}

void PhoneNumberDto::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PhoneNumberDto::valueIsSet() const
{
    return valueIsSet_;
}

void PhoneNumberDto::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


