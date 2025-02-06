

#include "huaweicloud/identitycenterstore/v1/model/UserDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UserDto::UserDto()
{
    addressesIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    emailsIsSet_ = false;
    externalId_ = "";
    externalIdIsSet_ = false;
    externalIdsIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
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
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    userType_ = "";
    userTypeIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
    updatedBy_ = "";
    updatedByIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    enterpriseIsSet_ = false;
}

UserDto::~UserDto() = default;

void UserDto::validate()
{
}

web::json::value UserDto::toJson() const
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
    if(externalIdIsSet_) {
        val[utility::conversions::to_string_t("external_id")] = ModelBase::toJson(externalId_);
    }
    if(externalIdsIsSet_) {
        val[utility::conversions::to_string_t("external_ids")] = ModelBase::toJson(externalIds_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
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
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("user_type")] = ModelBase::toJson(userType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(updatedByIsSet_) {
        val[utility::conversions::to_string_t("updated_by")] = ModelBase::toJson(updatedBy_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(enterpriseIsSet_) {
        val[utility::conversions::to_string_t("enterprise")] = ModelBase::toJson(enterprise_);
    }

    return val;
}
bool UserDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("external_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalIdDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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


std::vector<AddressDto>& UserDto::getAddresses()
{
    return addresses_;
}

void UserDto::setAddresses(const std::vector<AddressDto>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool UserDto::addressesIsSet() const
{
    return addressesIsSet_;
}

void UserDto::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string UserDto::getDisplayName() const
{
    return displayName_;
}

void UserDto::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool UserDto::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void UserDto::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<EmailDto>& UserDto::getEmails()
{
    return emails_;
}

void UserDto::setEmails(const std::vector<EmailDto>& value)
{
    emails_ = value;
    emailsIsSet_ = true;
}

bool UserDto::emailsIsSet() const
{
    return emailsIsSet_;
}

void UserDto::unsetemails()
{
    emailsIsSet_ = false;
}

std::string UserDto::getExternalId() const
{
    return externalId_;
}

void UserDto::setExternalId(const std::string& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool UserDto::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void UserDto::unsetexternalId()
{
    externalIdIsSet_ = false;
}

std::vector<ExternalIdDto>& UserDto::getExternalIds()
{
    return externalIds_;
}

void UserDto::setExternalIds(const std::vector<ExternalIdDto>& value)
{
    externalIds_ = value;
    externalIdsIsSet_ = true;
}

bool UserDto::externalIdsIsSet() const
{
    return externalIdsIsSet_;
}

void UserDto::unsetexternalIds()
{
    externalIdsIsSet_ = false;
}

std::string UserDto::getIdentityStoreId() const
{
    return identityStoreId_;
}

void UserDto::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool UserDto::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void UserDto::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string UserDto::getLocale() const
{
    return locale_;
}

void UserDto::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool UserDto::localeIsSet() const
{
    return localeIsSet_;
}

void UserDto::unsetlocale()
{
    localeIsSet_ = false;
}

NameDto UserDto::getName() const
{
    return name_;
}

void UserDto::setName(const NameDto& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserDto::nameIsSet() const
{
    return nameIsSet_;
}

void UserDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UserDto::getNickname() const
{
    return nickname_;
}

void UserDto::setNickname(const std::string& value)
{
    nickname_ = value;
    nicknameIsSet_ = true;
}

bool UserDto::nicknameIsSet() const
{
    return nicknameIsSet_;
}

void UserDto::unsetnickname()
{
    nicknameIsSet_ = false;
}

std::vector<PhoneNumberDto>& UserDto::getPhoneNumbers()
{
    return phoneNumbers_;
}

void UserDto::setPhoneNumbers(const std::vector<PhoneNumberDto>& value)
{
    phoneNumbers_ = value;
    phoneNumbersIsSet_ = true;
}

bool UserDto::phoneNumbersIsSet() const
{
    return phoneNumbersIsSet_;
}

void UserDto::unsetphoneNumbers()
{
    phoneNumbersIsSet_ = false;
}

std::string UserDto::getPreferredLanguage() const
{
    return preferredLanguage_;
}

void UserDto::setPreferredLanguage(const std::string& value)
{
    preferredLanguage_ = value;
    preferredLanguageIsSet_ = true;
}

bool UserDto::preferredLanguageIsSet() const
{
    return preferredLanguageIsSet_;
}

void UserDto::unsetpreferredLanguage()
{
    preferredLanguageIsSet_ = false;
}

std::string UserDto::getProfileUrl() const
{
    return profileUrl_;
}

void UserDto::setProfileUrl(const std::string& value)
{
    profileUrl_ = value;
    profileUrlIsSet_ = true;
}

bool UserDto::profileUrlIsSet() const
{
    return profileUrlIsSet_;
}

void UserDto::unsetprofileUrl()
{
    profileUrlIsSet_ = false;
}

std::string UserDto::getTimezone() const
{
    return timezone_;
}

void UserDto::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool UserDto::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void UserDto::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string UserDto::getTitle() const
{
    return title_;
}

void UserDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UserDto::titleIsSet() const
{
    return titleIsSet_;
}

void UserDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string UserDto::getUserId() const
{
    return userId_;
}

void UserDto::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserDto::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UserDto::getUserName() const
{
    return userName_;
}

void UserDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UserDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void UserDto::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string UserDto::getUserType() const
{
    return userType_;
}

void UserDto::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool UserDto::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void UserDto::unsetuserType()
{
    userTypeIsSet_ = false;
}

int64_t UserDto::getCreatedAt() const
{
    return createdAt_;
}

void UserDto::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UserDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UserDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UserDto::getCreatedBy() const
{
    return createdBy_;
}

void UserDto::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool UserDto::createdByIsSet() const
{
    return createdByIsSet_;
}

void UserDto::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t UserDto::getUpdatedAt() const
{
    return updatedAt_;
}

void UserDto::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UserDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UserDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UserDto::getUpdatedBy() const
{
    return updatedBy_;
}

void UserDto::setUpdatedBy(const std::string& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool UserDto::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void UserDto::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

bool UserDto::isEnabled() const
{
    return enabled_;
}

void UserDto::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UserDto::enabledIsSet() const
{
    return enabledIsSet_;
}

void UserDto::unsetenabled()
{
    enabledIsSet_ = false;
}

EnterpriseDto UserDto::getEnterprise() const
{
    return enterprise_;
}

void UserDto::setEnterprise(const EnterpriseDto& value)
{
    enterprise_ = value;
    enterpriseIsSet_ = true;
}

bool UserDto::enterpriseIsSet() const
{
    return enterpriseIsSet_;
}

void UserDto::unsetenterprise()
{
    enterpriseIsSet_ = false;
}

}
}
}
}
}


