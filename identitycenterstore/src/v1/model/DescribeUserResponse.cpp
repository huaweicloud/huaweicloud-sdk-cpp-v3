

#include "huaweicloud/identitycenterstore/v1/model/DescribeUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeUserResponse::DescribeUserResponse()
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
    emailVerified_ = false;
    emailVerifiedIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    enterpriseIsSet_ = false;
}

DescribeUserResponse::~DescribeUserResponse() = default;

void DescribeUserResponse::validate()
{
}

web::json::value DescribeUserResponse::toJson() const
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
    if(emailVerifiedIsSet_) {
        val[utility::conversions::to_string_t("email_verified")] = ModelBase::toJson(emailVerified_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(enterpriseIsSet_) {
        val[utility::conversions::to_string_t("enterprise")] = ModelBase::toJson(enterprise_);
    }

    return val;
}
bool DescribeUserResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("email_verified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email_verified"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailVerified(refVal);
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


std::vector<AddressDto>& DescribeUserResponse::getAddresses()
{
    return addresses_;
}

void DescribeUserResponse::setAddresses(const std::vector<AddressDto>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool DescribeUserResponse::addressesIsSet() const
{
    return addressesIsSet_;
}

void DescribeUserResponse::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string DescribeUserResponse::getDisplayName() const
{
    return displayName_;
}

void DescribeUserResponse::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool DescribeUserResponse::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void DescribeUserResponse::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<EmailDto>& DescribeUserResponse::getEmails()
{
    return emails_;
}

void DescribeUserResponse::setEmails(const std::vector<EmailDto>& value)
{
    emails_ = value;
    emailsIsSet_ = true;
}

bool DescribeUserResponse::emailsIsSet() const
{
    return emailsIsSet_;
}

void DescribeUserResponse::unsetemails()
{
    emailsIsSet_ = false;
}

std::string DescribeUserResponse::getExternalId() const
{
    return externalId_;
}

void DescribeUserResponse::setExternalId(const std::string& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool DescribeUserResponse::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void DescribeUserResponse::unsetexternalId()
{
    externalIdIsSet_ = false;
}

std::vector<ExternalIdDto>& DescribeUserResponse::getExternalIds()
{
    return externalIds_;
}

void DescribeUserResponse::setExternalIds(const std::vector<ExternalIdDto>& value)
{
    externalIds_ = value;
    externalIdsIsSet_ = true;
}

bool DescribeUserResponse::externalIdsIsSet() const
{
    return externalIdsIsSet_;
}

void DescribeUserResponse::unsetexternalIds()
{
    externalIdsIsSet_ = false;
}

std::string DescribeUserResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeUserResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeUserResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeUserResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DescribeUserResponse::getLocale() const
{
    return locale_;
}

void DescribeUserResponse::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool DescribeUserResponse::localeIsSet() const
{
    return localeIsSet_;
}

void DescribeUserResponse::unsetlocale()
{
    localeIsSet_ = false;
}

NameDto DescribeUserResponse::getName() const
{
    return name_;
}

void DescribeUserResponse::setName(const NameDto& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DescribeUserResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DescribeUserResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DescribeUserResponse::getNickname() const
{
    return nickname_;
}

void DescribeUserResponse::setNickname(const std::string& value)
{
    nickname_ = value;
    nicknameIsSet_ = true;
}

bool DescribeUserResponse::nicknameIsSet() const
{
    return nicknameIsSet_;
}

void DescribeUserResponse::unsetnickname()
{
    nicknameIsSet_ = false;
}

std::vector<PhoneNumberDto>& DescribeUserResponse::getPhoneNumbers()
{
    return phoneNumbers_;
}

void DescribeUserResponse::setPhoneNumbers(const std::vector<PhoneNumberDto>& value)
{
    phoneNumbers_ = value;
    phoneNumbersIsSet_ = true;
}

bool DescribeUserResponse::phoneNumbersIsSet() const
{
    return phoneNumbersIsSet_;
}

void DescribeUserResponse::unsetphoneNumbers()
{
    phoneNumbersIsSet_ = false;
}

std::string DescribeUserResponse::getPreferredLanguage() const
{
    return preferredLanguage_;
}

void DescribeUserResponse::setPreferredLanguage(const std::string& value)
{
    preferredLanguage_ = value;
    preferredLanguageIsSet_ = true;
}

bool DescribeUserResponse::preferredLanguageIsSet() const
{
    return preferredLanguageIsSet_;
}

void DescribeUserResponse::unsetpreferredLanguage()
{
    preferredLanguageIsSet_ = false;
}

std::string DescribeUserResponse::getProfileUrl() const
{
    return profileUrl_;
}

void DescribeUserResponse::setProfileUrl(const std::string& value)
{
    profileUrl_ = value;
    profileUrlIsSet_ = true;
}

bool DescribeUserResponse::profileUrlIsSet() const
{
    return profileUrlIsSet_;
}

void DescribeUserResponse::unsetprofileUrl()
{
    profileUrlIsSet_ = false;
}

std::string DescribeUserResponse::getTimezone() const
{
    return timezone_;
}

void DescribeUserResponse::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool DescribeUserResponse::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void DescribeUserResponse::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string DescribeUserResponse::getTitle() const
{
    return title_;
}

void DescribeUserResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DescribeUserResponse::titleIsSet() const
{
    return titleIsSet_;
}

void DescribeUserResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string DescribeUserResponse::getUserId() const
{
    return userId_;
}

void DescribeUserResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DescribeUserResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void DescribeUserResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string DescribeUserResponse::getUserName() const
{
    return userName_;
}

void DescribeUserResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DescribeUserResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void DescribeUserResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DescribeUserResponse::getUserType() const
{
    return userType_;
}

void DescribeUserResponse::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool DescribeUserResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void DescribeUserResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

int64_t DescribeUserResponse::getCreatedAt() const
{
    return createdAt_;
}

void DescribeUserResponse::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DescribeUserResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DescribeUserResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string DescribeUserResponse::getCreatedBy() const
{
    return createdBy_;
}

void DescribeUserResponse::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool DescribeUserResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void DescribeUserResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t DescribeUserResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void DescribeUserResponse::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DescribeUserResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DescribeUserResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string DescribeUserResponse::getUpdatedBy() const
{
    return updatedBy_;
}

void DescribeUserResponse::setUpdatedBy(const std::string& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool DescribeUserResponse::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void DescribeUserResponse::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

bool DescribeUserResponse::isEmailVerified() const
{
    return emailVerified_;
}

void DescribeUserResponse::setEmailVerified(bool value)
{
    emailVerified_ = value;
    emailVerifiedIsSet_ = true;
}

bool DescribeUserResponse::emailVerifiedIsSet() const
{
    return emailVerifiedIsSet_;
}

void DescribeUserResponse::unsetemailVerified()
{
    emailVerifiedIsSet_ = false;
}

bool DescribeUserResponse::isEnabled() const
{
    return enabled_;
}

void DescribeUserResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool DescribeUserResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void DescribeUserResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

EnterpriseDto DescribeUserResponse::getEnterprise() const
{
    return enterprise_;
}

void DescribeUserResponse::setEnterprise(const EnterpriseDto& value)
{
    enterprise_ = value;
    enterpriseIsSet_ = true;
}

bool DescribeUserResponse::enterpriseIsSet() const
{
    return enterpriseIsSet_;
}

void DescribeUserResponse::unsetenterprise()
{
    enterpriseIsSet_ = false;
}

}
}
}
}
}


