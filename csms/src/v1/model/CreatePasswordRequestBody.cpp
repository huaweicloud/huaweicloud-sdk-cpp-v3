

#include "huaweicloud/csms/v1/model/CreatePasswordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreatePasswordRequestBody::CreatePasswordRequestBody()
{
    passwordPolicyName_ = "";
    passwordPolicyNameIsSet_ = false;
    length_ = 0;
    lengthIsSet_ = false;
    excludeCharacters_ = "";
    excludeCharactersIsSet_ = false;
    excludeLowercase_ = false;
    excludeLowercaseIsSet_ = false;
    excludeUppercase_ = false;
    excludeUppercaseIsSet_ = false;
    excludeNumbers_ = false;
    excludeNumbersIsSet_ = false;
    excludePunctuation_ = false;
    excludePunctuationIsSet_ = false;
    includeSpace_ = false;
    includeSpaceIsSet_ = false;
    requireEachIncludedType_ = false;
    requireEachIncludedTypeIsSet_ = false;
}

CreatePasswordRequestBody::~CreatePasswordRequestBody() = default;

void CreatePasswordRequestBody::validate()
{
}

web::json::value CreatePasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordPolicyNameIsSet_) {
        val[utility::conversions::to_string_t("password_policy_name")] = ModelBase::toJson(passwordPolicyName_);
    }
    if(lengthIsSet_) {
        val[utility::conversions::to_string_t("length")] = ModelBase::toJson(length_);
    }
    if(excludeCharactersIsSet_) {
        val[utility::conversions::to_string_t("exclude_characters")] = ModelBase::toJson(excludeCharacters_);
    }
    if(excludeLowercaseIsSet_) {
        val[utility::conversions::to_string_t("exclude_lowercase")] = ModelBase::toJson(excludeLowercase_);
    }
    if(excludeUppercaseIsSet_) {
        val[utility::conversions::to_string_t("exclude_uppercase")] = ModelBase::toJson(excludeUppercase_);
    }
    if(excludeNumbersIsSet_) {
        val[utility::conversions::to_string_t("exclude_numbers")] = ModelBase::toJson(excludeNumbers_);
    }
    if(excludePunctuationIsSet_) {
        val[utility::conversions::to_string_t("exclude_punctuation")] = ModelBase::toJson(excludePunctuation_);
    }
    if(includeSpaceIsSet_) {
        val[utility::conversions::to_string_t("include_space")] = ModelBase::toJson(includeSpace_);
    }
    if(requireEachIncludedTypeIsSet_) {
        val[utility::conversions::to_string_t("require_each_included_type")] = ModelBase::toJson(requireEachIncludedType_);
    }

    return val;
}
bool CreatePasswordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("password_policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password_policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPasswordPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_characters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_characters"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeCharacters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_lowercase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_lowercase"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeLowercase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_uppercase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_uppercase"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeUppercase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_numbers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_numbers"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeNumbers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_punctuation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_punctuation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludePunctuation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_space"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("require_each_included_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("require_each_included_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequireEachIncludedType(refVal);
        }
    }
    return ok;
}


std::string CreatePasswordRequestBody::getPasswordPolicyName() const
{
    return passwordPolicyName_;
}

void CreatePasswordRequestBody::setPasswordPolicyName(const std::string& value)
{
    passwordPolicyName_ = value;
    passwordPolicyNameIsSet_ = true;
}

bool CreatePasswordRequestBody::passwordPolicyNameIsSet() const
{
    return passwordPolicyNameIsSet_;
}

void CreatePasswordRequestBody::unsetpasswordPolicyName()
{
    passwordPolicyNameIsSet_ = false;
}

int32_t CreatePasswordRequestBody::getLength() const
{
    return length_;
}

void CreatePasswordRequestBody::setLength(int32_t value)
{
    length_ = value;
    lengthIsSet_ = true;
}

bool CreatePasswordRequestBody::lengthIsSet() const
{
    return lengthIsSet_;
}

void CreatePasswordRequestBody::unsetlength()
{
    lengthIsSet_ = false;
}

std::string CreatePasswordRequestBody::getExcludeCharacters() const
{
    return excludeCharacters_;
}

void CreatePasswordRequestBody::setExcludeCharacters(const std::string& value)
{
    excludeCharacters_ = value;
    excludeCharactersIsSet_ = true;
}

bool CreatePasswordRequestBody::excludeCharactersIsSet() const
{
    return excludeCharactersIsSet_;
}

void CreatePasswordRequestBody::unsetexcludeCharacters()
{
    excludeCharactersIsSet_ = false;
}

bool CreatePasswordRequestBody::isExcludeLowercase() const
{
    return excludeLowercase_;
}

void CreatePasswordRequestBody::setExcludeLowercase(bool value)
{
    excludeLowercase_ = value;
    excludeLowercaseIsSet_ = true;
}

bool CreatePasswordRequestBody::excludeLowercaseIsSet() const
{
    return excludeLowercaseIsSet_;
}

void CreatePasswordRequestBody::unsetexcludeLowercase()
{
    excludeLowercaseIsSet_ = false;
}

bool CreatePasswordRequestBody::isExcludeUppercase() const
{
    return excludeUppercase_;
}

void CreatePasswordRequestBody::setExcludeUppercase(bool value)
{
    excludeUppercase_ = value;
    excludeUppercaseIsSet_ = true;
}

bool CreatePasswordRequestBody::excludeUppercaseIsSet() const
{
    return excludeUppercaseIsSet_;
}

void CreatePasswordRequestBody::unsetexcludeUppercase()
{
    excludeUppercaseIsSet_ = false;
}

bool CreatePasswordRequestBody::isExcludeNumbers() const
{
    return excludeNumbers_;
}

void CreatePasswordRequestBody::setExcludeNumbers(bool value)
{
    excludeNumbers_ = value;
    excludeNumbersIsSet_ = true;
}

bool CreatePasswordRequestBody::excludeNumbersIsSet() const
{
    return excludeNumbersIsSet_;
}

void CreatePasswordRequestBody::unsetexcludeNumbers()
{
    excludeNumbersIsSet_ = false;
}

bool CreatePasswordRequestBody::isExcludePunctuation() const
{
    return excludePunctuation_;
}

void CreatePasswordRequestBody::setExcludePunctuation(bool value)
{
    excludePunctuation_ = value;
    excludePunctuationIsSet_ = true;
}

bool CreatePasswordRequestBody::excludePunctuationIsSet() const
{
    return excludePunctuationIsSet_;
}

void CreatePasswordRequestBody::unsetexcludePunctuation()
{
    excludePunctuationIsSet_ = false;
}

bool CreatePasswordRequestBody::isIncludeSpace() const
{
    return includeSpace_;
}

void CreatePasswordRequestBody::setIncludeSpace(bool value)
{
    includeSpace_ = value;
    includeSpaceIsSet_ = true;
}

bool CreatePasswordRequestBody::includeSpaceIsSet() const
{
    return includeSpaceIsSet_;
}

void CreatePasswordRequestBody::unsetincludeSpace()
{
    includeSpaceIsSet_ = false;
}

bool CreatePasswordRequestBody::isRequireEachIncludedType() const
{
    return requireEachIncludedType_;
}

void CreatePasswordRequestBody::setRequireEachIncludedType(bool value)
{
    requireEachIncludedType_ = value;
    requireEachIncludedTypeIsSet_ = true;
}

bool CreatePasswordRequestBody::requireEachIncludedTypeIsSet() const
{
    return requireEachIncludedTypeIsSet_;
}

void CreatePasswordRequestBody::unsetrequireEachIncludedType()
{
    requireEachIncludedTypeIsSet_ = false;
}

}
}
}
}
}


