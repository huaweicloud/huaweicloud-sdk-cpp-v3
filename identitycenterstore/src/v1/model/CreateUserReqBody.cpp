

#include "huaweicloud/identitycenterstore/v1/model/CreateUserReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateUserReqBody::CreateUserReqBody()
{
    addressesIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    emailsIsSet_ = false;
    locale_ = "";
    localeIsSet_ = false;
    nameIsSet_ = false;
    nickname_ = "";
    nicknameIsSet_ = false;
    phoneNumbersIsSet_ = false;
    preferredLanguage_ = "";
    preferredLanguageIsSet_ = false;
    profileUrl_ = "";
    profileUrlIsSet_ = false;
    timezone_ = "";
    timezoneIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
    passwordMode_ = "";
    passwordModeIsSet_ = false;
    enterpriseIsSet_ = false;
}

CreateUserReqBody::~CreateUserReqBody() = default;

void CreateUserReqBody::validate()
{
}

web::json::value CreateUserReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(emailsIsSet_) {
        val[utility::conversions::to_string_t("emails")] = ModelBase::toJson(emails_);
    }
    if(localeIsSet_) {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(locale_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nicknameIsSet_) {
        val[utility::conversions::to_string_t("nickname")] = ModelBase::toJson(nickname_);
    }
    if(phoneNumbersIsSet_) {
        val[utility::conversions::to_string_t("phone_numbers")] = ModelBase::toJson(phoneNumbers_);
    }
    if(preferredLanguageIsSet_) {
        val[utility::conversions::to_string_t("preferred_language")] = ModelBase::toJson(preferredLanguage_);
    }
    if(profileUrlIsSet_) {
        val[utility::conversions::to_string_t("profile_url")] = ModelBase::toJson(profileUrl_);
    }
    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }
    if(passwordModeIsSet_) {
        val[utility::conversions::to_string_t("password_mode")] = ModelBase::toJson(passwordMode_);
    }
    if(enterpriseIsSet_) {
        val[utility::conversions::to_string_t("enterprise")] = ModelBase::toJson(enterprise_);
    }

    return val;
}
bool CreateUserReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::vector<AddressDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emails"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emails"));
        if(!fieldValue.is_null())
        {
            std::vector<EmailDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocale(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            NameDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nickname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nickname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone_numbers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone_numbers"));
        if(!fieldValue.is_null())
        {
            std::vector<PhoneNumberDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneNumbers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preferred_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preferred_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreferredLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPasswordMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise"));
        if(!fieldValue.is_null())
        {
            EnterpriseDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterprise(refVal);
        }
    }
    return ok;
}


std::vector<AddressDto>& CreateUserReqBody::getAddresses()
{
    return addresses_;
}

void CreateUserReqBody::setAddresses(const std::vector<AddressDto>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool CreateUserReqBody::addressesIsSet() const
{
    return addressesIsSet_;
}

void CreateUserReqBody::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string CreateUserReqBody::getDisplayName() const
{
    return displayName_;
}

void CreateUserReqBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool CreateUserReqBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void CreateUserReqBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<EmailDto>& CreateUserReqBody::getEmails()
{
    return emails_;
}

void CreateUserReqBody::setEmails(const std::vector<EmailDto>& value)
{
    emails_ = value;
    emailsIsSet_ = true;
}

bool CreateUserReqBody::emailsIsSet() const
{
    return emailsIsSet_;
}

void CreateUserReqBody::unsetemails()
{
    emailsIsSet_ = false;
}

std::string CreateUserReqBody::getLocale() const
{
    return locale_;
}

void CreateUserReqBody::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool CreateUserReqBody::localeIsSet() const
{
    return localeIsSet_;
}

void CreateUserReqBody::unsetlocale()
{
    localeIsSet_ = false;
}

NameDto CreateUserReqBody::getName() const
{
    return name_;
}

void CreateUserReqBody::setName(const NameDto& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateUserReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateUserReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateUserReqBody::getNickname() const
{
    return nickname_;
}

void CreateUserReqBody::setNickname(const std::string& value)
{
    nickname_ = value;
    nicknameIsSet_ = true;
}

bool CreateUserReqBody::nicknameIsSet() const
{
    return nicknameIsSet_;
}

void CreateUserReqBody::unsetnickname()
{
    nicknameIsSet_ = false;
}

std::vector<PhoneNumberDto>& CreateUserReqBody::getPhoneNumbers()
{
    return phoneNumbers_;
}

void CreateUserReqBody::setPhoneNumbers(const std::vector<PhoneNumberDto>& value)
{
    phoneNumbers_ = value;
    phoneNumbersIsSet_ = true;
}

bool CreateUserReqBody::phoneNumbersIsSet() const
{
    return phoneNumbersIsSet_;
}

void CreateUserReqBody::unsetphoneNumbers()
{
    phoneNumbersIsSet_ = false;
}

std::string CreateUserReqBody::getPreferredLanguage() const
{
    return preferredLanguage_;
}

void CreateUserReqBody::setPreferredLanguage(const std::string& value)
{
    preferredLanguage_ = value;
    preferredLanguageIsSet_ = true;
}

bool CreateUserReqBody::preferredLanguageIsSet() const
{
    return preferredLanguageIsSet_;
}

void CreateUserReqBody::unsetpreferredLanguage()
{
    preferredLanguageIsSet_ = false;
}

std::string CreateUserReqBody::getProfileUrl() const
{
    return profileUrl_;
}

void CreateUserReqBody::setProfileUrl(const std::string& value)
{
    profileUrl_ = value;
    profileUrlIsSet_ = true;
}

bool CreateUserReqBody::profileUrlIsSet() const
{
    return profileUrlIsSet_;
}

void CreateUserReqBody::unsetprofileUrl()
{
    profileUrlIsSet_ = false;
}

std::string CreateUserReqBody::getTimezone() const
{
    return timezone_;
}

void CreateUserReqBody::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool CreateUserReqBody::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void CreateUserReqBody::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string CreateUserReqBody::getTitle() const
{
    return title_;
}

void CreateUserReqBody::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateUserReqBody::titleIsSet() const
{
    return titleIsSet_;
}

void CreateUserReqBody::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateUserReqBody::getUserName() const
{
    return userName_;
}

void CreateUserReqBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateUserReqBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateUserReqBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateUserReqBody::getUserType() const
{
    return userType_;
}

void CreateUserReqBody::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool CreateUserReqBody::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void CreateUserReqBody::unsetuserType()
{
    userTypeIsSet_ = false;
}

std::string CreateUserReqBody::getPasswordMode() const
{
    return passwordMode_;
}

void CreateUserReqBody::setPasswordMode(const std::string& value)
{
    passwordMode_ = value;
    passwordModeIsSet_ = true;
}

bool CreateUserReqBody::passwordModeIsSet() const
{
    return passwordModeIsSet_;
}

void CreateUserReqBody::unsetpasswordMode()
{
    passwordModeIsSet_ = false;
}

EnterpriseDto CreateUserReqBody::getEnterprise() const
{
    return enterprise_;
}

void CreateUserReqBody::setEnterprise(const EnterpriseDto& value)
{
    enterprise_ = value;
    enterpriseIsSet_ = true;
}

bool CreateUserReqBody::enterpriseIsSet() const
{
    return enterpriseIsSet_;
}

void CreateUserReqBody::unsetenterprise()
{
    enterpriseIsSet_ = false;
}

}
}
}
}
}


