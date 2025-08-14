

#include "huaweicloud/identitycenterstore/v1/model/PasswordPolicyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




PasswordPolicyDto::PasswordPolicyDto()
{
    minimumPasswordLength_ = 0;
    minimumPasswordLengthIsSet_ = false;
    requireLowercaseCharacters_ = false;
    requireLowercaseCharactersIsSet_ = false;
    requireNumbers_ = false;
    requireNumbersIsSet_ = false;
    requireSymbols_ = false;
    requireSymbolsIsSet_ = false;
    requireUppercaseCharacters_ = false;
    requireUppercaseCharactersIsSet_ = false;
    maxPasswordAge_ = 0;
    maxPasswordAgeIsSet_ = false;
    passwordReusePrevention_ = 0;
    passwordReusePreventionIsSet_ = false;
}

PasswordPolicyDto::~PasswordPolicyDto() = default;

void PasswordPolicyDto::validate()
{
}

web::json::value PasswordPolicyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(minimumPasswordLengthIsSet_) {
        val[utility::conversions::to_string_t("minimum_password_length")] = ModelBase::toJson(minimumPasswordLength_);
    }
    if(requireLowercaseCharactersIsSet_) {
        val[utility::conversions::to_string_t("require_lowercase_characters")] = ModelBase::toJson(requireLowercaseCharacters_);
    }
    if(requireNumbersIsSet_) {
        val[utility::conversions::to_string_t("require_numbers")] = ModelBase::toJson(requireNumbers_);
    }
    if(requireSymbolsIsSet_) {
        val[utility::conversions::to_string_t("require_symbols")] = ModelBase::toJson(requireSymbols_);
    }
    if(requireUppercaseCharactersIsSet_) {
        val[utility::conversions::to_string_t("require_uppercase_characters")] = ModelBase::toJson(requireUppercaseCharacters_);
    }
    if(maxPasswordAgeIsSet_) {
        val[utility::conversions::to_string_t("max_password_age")] = ModelBase::toJson(maxPasswordAge_);
    }
    if(passwordReusePreventionIsSet_) {
        val[utility::conversions::to_string_t("password_reuse_prevention")] = ModelBase::toJson(passwordReusePrevention_);
    }

    return val;
}
bool PasswordPolicyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("minimum_password_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minimum_password_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinimumPasswordLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require_lowercase_characters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require_lowercase_characters"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequireLowercaseCharacters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require_numbers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require_numbers"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequireNumbers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require_symbols"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require_symbols"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequireSymbols(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require_uppercase_characters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require_uppercase_characters"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequireUppercaseCharacters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_password_age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_password_age"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPasswordAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password_reuse_prevention"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password_reuse_prevention"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPasswordReusePrevention(refVal);
        }
    }
    return ok;
}


int32_t PasswordPolicyDto::getMinimumPasswordLength() const
{
    return minimumPasswordLength_;
}

void PasswordPolicyDto::setMinimumPasswordLength(int32_t value)
{
    minimumPasswordLength_ = value;
    minimumPasswordLengthIsSet_ = true;
}

bool PasswordPolicyDto::minimumPasswordLengthIsSet() const
{
    return minimumPasswordLengthIsSet_;
}

void PasswordPolicyDto::unsetminimumPasswordLength()
{
    minimumPasswordLengthIsSet_ = false;
}

bool PasswordPolicyDto::isRequireLowercaseCharacters() const
{
    return requireLowercaseCharacters_;
}

void PasswordPolicyDto::setRequireLowercaseCharacters(bool value)
{
    requireLowercaseCharacters_ = value;
    requireLowercaseCharactersIsSet_ = true;
}

bool PasswordPolicyDto::requireLowercaseCharactersIsSet() const
{
    return requireLowercaseCharactersIsSet_;
}

void PasswordPolicyDto::unsetrequireLowercaseCharacters()
{
    requireLowercaseCharactersIsSet_ = false;
}

bool PasswordPolicyDto::isRequireNumbers() const
{
    return requireNumbers_;
}

void PasswordPolicyDto::setRequireNumbers(bool value)
{
    requireNumbers_ = value;
    requireNumbersIsSet_ = true;
}

bool PasswordPolicyDto::requireNumbersIsSet() const
{
    return requireNumbersIsSet_;
}

void PasswordPolicyDto::unsetrequireNumbers()
{
    requireNumbersIsSet_ = false;
}

bool PasswordPolicyDto::isRequireSymbols() const
{
    return requireSymbols_;
}

void PasswordPolicyDto::setRequireSymbols(bool value)
{
    requireSymbols_ = value;
    requireSymbolsIsSet_ = true;
}

bool PasswordPolicyDto::requireSymbolsIsSet() const
{
    return requireSymbolsIsSet_;
}

void PasswordPolicyDto::unsetrequireSymbols()
{
    requireSymbolsIsSet_ = false;
}

bool PasswordPolicyDto::isRequireUppercaseCharacters() const
{
    return requireUppercaseCharacters_;
}

void PasswordPolicyDto::setRequireUppercaseCharacters(bool value)
{
    requireUppercaseCharacters_ = value;
    requireUppercaseCharactersIsSet_ = true;
}

bool PasswordPolicyDto::requireUppercaseCharactersIsSet() const
{
    return requireUppercaseCharactersIsSet_;
}

void PasswordPolicyDto::unsetrequireUppercaseCharacters()
{
    requireUppercaseCharactersIsSet_ = false;
}

int32_t PasswordPolicyDto::getMaxPasswordAge() const
{
    return maxPasswordAge_;
}

void PasswordPolicyDto::setMaxPasswordAge(int32_t value)
{
    maxPasswordAge_ = value;
    maxPasswordAgeIsSet_ = true;
}

bool PasswordPolicyDto::maxPasswordAgeIsSet() const
{
    return maxPasswordAgeIsSet_;
}

void PasswordPolicyDto::unsetmaxPasswordAge()
{
    maxPasswordAgeIsSet_ = false;
}

int32_t PasswordPolicyDto::getPasswordReusePrevention() const
{
    return passwordReusePrevention_;
}

void PasswordPolicyDto::setPasswordReusePrevention(int32_t value)
{
    passwordReusePrevention_ = value;
    passwordReusePreventionIsSet_ = true;
}

bool PasswordPolicyDto::passwordReusePreventionIsSet() const
{
    return passwordReusePreventionIsSet_;
}

void PasswordPolicyDto::unsetpasswordReusePrevention()
{
    passwordReusePreventionIsSet_ = false;
}

}
}
}
}
}


