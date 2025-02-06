

#include "huaweicloud/identitycenterstore/v1/model/EmailDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




EmailDto::EmailDto()
{
    primary_ = false;
    primaryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    verificationStatus_ = "";
    verificationStatusIsSet_ = false;
}

EmailDto::~EmailDto() = default;

void EmailDto::validate()
{
}

web::json::value EmailDto::toJson() const
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
    if(verificationStatusIsSet_) {
        val[utility::conversions::to_string_t("verification_status")] = ModelBase::toJson(verificationStatus_);
    }

    return val;
}
bool EmailDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("verification_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationStatus(refVal);
        }
    }
    return ok;
}


bool EmailDto::isPrimary() const
{
    return primary_;
}

void EmailDto::setPrimary(bool value)
{
    primary_ = value;
    primaryIsSet_ = true;
}

bool EmailDto::primaryIsSet() const
{
    return primaryIsSet_;
}

void EmailDto::unsetprimary()
{
    primaryIsSet_ = false;
}

std::string EmailDto::getType() const
{
    return type_;
}

void EmailDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EmailDto::typeIsSet() const
{
    return typeIsSet_;
}

void EmailDto::unsettype()
{
    typeIsSet_ = false;
}

std::string EmailDto::getValue() const
{
    return value_;
}

void EmailDto::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool EmailDto::valueIsSet() const
{
    return valueIsSet_;
}

void EmailDto::unsetvalue()
{
    valueIsSet_ = false;
}

std::string EmailDto::getVerificationStatus() const
{
    return verificationStatus_;
}

void EmailDto::setVerificationStatus(const std::string& value)
{
    verificationStatus_ = value;
    verificationStatusIsSet_ = true;
}

bool EmailDto::verificationStatusIsSet() const
{
    return verificationStatusIsSet_;
}

void EmailDto::unsetverificationStatus()
{
    verificationStatusIsSet_ = false;
}

}
}
}
}
}


