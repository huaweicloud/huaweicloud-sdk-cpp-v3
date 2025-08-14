

#include "huaweicloud/identitycenterstore/v1/model/DescribeUserResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeUserResp::DescribeUserResp()
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

DescribeUserResp::~DescribeUserResp() = default;

void DescribeUserResp::validate()
{
}

web::json::value DescribeUserResp::toJson() const
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
bool DescribeUserResp::fromJson(const web::json::value& val)
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


std::vector<AddressDto>& DescribeUserResp::getAddresses()
{
    return addresses_;
}

void DescribeUserResp::setAddresses(const std::vector<AddressDto>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool DescribeUserResp::addressesIsSet() const
{
    return addressesIsSet_;
}

void DescribeUserResp::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string DescribeUserResp::getDisplayName() const
{
    return displayName_;
}

void DescribeUserResp::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool DescribeUserResp::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void DescribeUserResp::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<EmailDto>& DescribeUserResp::getEmails()
{
    return emails_;
}

void DescribeUserResp::setEmails(const std::vector<EmailDto>& value)
{
    emails_ = value;
    emailsIsSet_ = true;
}

bool DescribeUserResp::emailsIsSet() const
{
    return emailsIsSet_;
}

void DescribeUserResp::unsetemails()
{
    emailsIsSet_ = false;
}

std::string DescribeUserResp::getExternalId() const
{
    return externalId_;
}

void DescribeUserResp::setExternalId(const std::string& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool DescribeUserResp::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void DescribeUserResp::unsetexternalId()
{
    externalIdIsSet_ = false;
}

std::vector<ExternalIdDto>& DescribeUserResp::getExternalIds()
{
    return externalIds_;
}

void DescribeUserResp::setExternalIds(const std::vector<ExternalIdDto>& value)
{
    externalIds_ = value;
    externalIdsIsSet_ = true;
}

bool DescribeUserResp::externalIdsIsSet() const
{
    return externalIdsIsSet_;
}

void DescribeUserResp::unsetexternalIds()
{
    externalIdsIsSet_ = false;
}

std::string DescribeUserResp::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeUserResp::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeUserResp::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeUserResp::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DescribeUserResp::getLocale() const
{
    return locale_;
}

void DescribeUserResp::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool DescribeUserResp::localeIsSet() const
{
    return localeIsSet_;
}

void DescribeUserResp::unsetlocale()
{
    localeIsSet_ = false;
}

NameDto DescribeUserResp::getName() const
{
    return name_;
}

void DescribeUserResp::setName(const NameDto& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DescribeUserResp::nameIsSet() const
{
    return nameIsSet_;
}

void DescribeUserResp::unsetname()
{
    nameIsSet_ = false;
}

std::string DescribeUserResp::getNickname() const
{
    return nickname_;
}

void DescribeUserResp::setNickname(const std::string& value)
{
    nickname_ = value;
    nicknameIsSet_ = true;
}

bool DescribeUserResp::nicknameIsSet() const
{
    return nicknameIsSet_;
}

void DescribeUserResp::unsetnickname()
{
    nicknameIsSet_ = false;
}

std::vector<PhoneNumberDto>& DescribeUserResp::getPhoneNumbers()
{
    return phoneNumbers_;
}

void DescribeUserResp::setPhoneNumbers(const std::vector<PhoneNumberDto>& value)
{
    phoneNumbers_ = value;
    phoneNumbersIsSet_ = true;
}

bool DescribeUserResp::phoneNumbersIsSet() const
{
    return phoneNumbersIsSet_;
}

void DescribeUserResp::unsetphoneNumbers()
{
    phoneNumbersIsSet_ = false;
}

std::string DescribeUserResp::getPreferredLanguage() const
{
    return preferredLanguage_;
}

void DescribeUserResp::setPreferredLanguage(const std::string& value)
{
    preferredLanguage_ = value;
    preferredLanguageIsSet_ = true;
}

bool DescribeUserResp::preferredLanguageIsSet() const
{
    return preferredLanguageIsSet_;
}

void DescribeUserResp::unsetpreferredLanguage()
{
    preferredLanguageIsSet_ = false;
}

std::string DescribeUserResp::getProfileUrl() const
{
    return profileUrl_;
}

void DescribeUserResp::setProfileUrl(const std::string& value)
{
    profileUrl_ = value;
    profileUrlIsSet_ = true;
}

bool DescribeUserResp::profileUrlIsSet() const
{
    return profileUrlIsSet_;
}

void DescribeUserResp::unsetprofileUrl()
{
    profileUrlIsSet_ = false;
}

std::string DescribeUserResp::getTimezone() const
{
    return timezone_;
}

void DescribeUserResp::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool DescribeUserResp::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void DescribeUserResp::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string DescribeUserResp::getTitle() const
{
    return title_;
}

void DescribeUserResp::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DescribeUserResp::titleIsSet() const
{
    return titleIsSet_;
}

void DescribeUserResp::unsettitle()
{
    titleIsSet_ = false;
}

std::string DescribeUserResp::getUserId() const
{
    return userId_;
}

void DescribeUserResp::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DescribeUserResp::userIdIsSet() const
{
    return userIdIsSet_;
}

void DescribeUserResp::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string DescribeUserResp::getUserName() const
{
    return userName_;
}

void DescribeUserResp::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DescribeUserResp::userNameIsSet() const
{
    return userNameIsSet_;
}

void DescribeUserResp::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DescribeUserResp::getUserType() const
{
    return userType_;
}

void DescribeUserResp::setUserType(const std::string& value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool DescribeUserResp::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void DescribeUserResp::unsetuserType()
{
    userTypeIsSet_ = false;
}

int64_t DescribeUserResp::getCreatedAt() const
{
    return createdAt_;
}

void DescribeUserResp::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DescribeUserResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DescribeUserResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string DescribeUserResp::getCreatedBy() const
{
    return createdBy_;
}

void DescribeUserResp::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool DescribeUserResp::createdByIsSet() const
{
    return createdByIsSet_;
}

void DescribeUserResp::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t DescribeUserResp::getUpdatedAt() const
{
    return updatedAt_;
}

void DescribeUserResp::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DescribeUserResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DescribeUserResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string DescribeUserResp::getUpdatedBy() const
{
    return updatedBy_;
}

void DescribeUserResp::setUpdatedBy(const std::string& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool DescribeUserResp::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void DescribeUserResp::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

bool DescribeUserResp::isEmailVerified() const
{
    return emailVerified_;
}

void DescribeUserResp::setEmailVerified(bool value)
{
    emailVerified_ = value;
    emailVerifiedIsSet_ = true;
}

bool DescribeUserResp::emailVerifiedIsSet() const
{
    return emailVerifiedIsSet_;
}

void DescribeUserResp::unsetemailVerified()
{
    emailVerifiedIsSet_ = false;
}

bool DescribeUserResp::isEnabled() const
{
    return enabled_;
}

void DescribeUserResp::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool DescribeUserResp::enabledIsSet() const
{
    return enabledIsSet_;
}

void DescribeUserResp::unsetenabled()
{
    enabledIsSet_ = false;
}

EnterpriseDto DescribeUserResp::getEnterprise() const
{
    return enterprise_;
}

void DescribeUserResp::setEnterprise(const EnterpriseDto& value)
{
    enterprise_ = value;
    enterpriseIsSet_ = true;
}

bool DescribeUserResp::enterpriseIsSet() const
{
    return enterpriseIsSet_;
}

void DescribeUserResp::unsetenterprise()
{
    enterpriseIsSet_ = false;
}

}
}
}
}
}


