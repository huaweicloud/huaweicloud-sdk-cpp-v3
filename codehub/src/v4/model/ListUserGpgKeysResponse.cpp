

#include "huaweicloud/codehub/v4/model/ListUserGpgKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListUserGpgKeysResponse::ListUserGpgKeysResponse()
{
    id_ = 0;
    idIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    emailsWithVerifiedStatusIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    primaryKeyid_ = "";
    primaryKeyidIsSet_ = false;
    active_ = false;
    activeIsSet_ = false;
    subkeysIsSet_ = false;
}

ListUserGpgKeysResponse::~ListUserGpgKeysResponse() = default;

void ListUserGpgKeysResponse::validate()
{
}

web::json::value ListUserGpgKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(emailsWithVerifiedStatusIsSet_) {
        val[utility::conversions::to_string_t("emails_with_verified_status")] = ModelBase::toJson(emailsWithVerifiedStatus_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(primaryKeyidIsSet_) {
        val[utility::conversions::to_string_t("primary_keyid")] = ModelBase::toJson(primaryKeyid_);
    }
    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }
    if(subkeysIsSet_) {
        val[utility::conversions::to_string_t("subkeys")] = ModelBase::toJson(subkeys_);
    }

    return val;
}
bool ListUserGpgKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emails_with_verified_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emails_with_verified_status"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailsWithVerifiedStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("primary_keyid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_keyid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryKeyid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subkeys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subkeys"));
        if(!fieldValue.is_null())
        {
            std::vector<GpgSubKeyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubkeys(refVal);
        }
    }
    return ok;
}


int32_t ListUserGpgKeysResponse::getId() const
{
    return id_;
}

void ListUserGpgKeysResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListUserGpgKeysResponse::idIsSet() const
{
    return idIsSet_;
}

void ListUserGpgKeysResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListUserGpgKeysResponse::getCreatedAt() const
{
    return createdAt_;
}

void ListUserGpgKeysResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListUserGpgKeysResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListUserGpgKeysResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::map<std::string, bool>& ListUserGpgKeysResponse::getEmailsWithVerifiedStatus()
{
    return emailsWithVerifiedStatus_;
}

void ListUserGpgKeysResponse::setEmailsWithVerifiedStatus(std::map<std::string, bool> value)
{
    emailsWithVerifiedStatus_ = value;
    emailsWithVerifiedStatusIsSet_ = true;
}

bool ListUserGpgKeysResponse::emailsWithVerifiedStatusIsSet() const
{
    return emailsWithVerifiedStatusIsSet_;
}

void ListUserGpgKeysResponse::unsetemailsWithVerifiedStatus()
{
    emailsWithVerifiedStatusIsSet_ = false;
}

std::string ListUserGpgKeysResponse::getFingerprint() const
{
    return fingerprint_;
}

void ListUserGpgKeysResponse::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool ListUserGpgKeysResponse::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void ListUserGpgKeysResponse::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string ListUserGpgKeysResponse::getKey() const
{
    return key_;
}

void ListUserGpgKeysResponse::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ListUserGpgKeysResponse::keyIsSet() const
{
    return keyIsSet_;
}

void ListUserGpgKeysResponse::unsetkey()
{
    keyIsSet_ = false;
}

std::string ListUserGpgKeysResponse::getDescription() const
{
    return description_;
}

void ListUserGpgKeysResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListUserGpgKeysResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListUserGpgKeysResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListUserGpgKeysResponse::getTitle() const
{
    return title_;
}

void ListUserGpgKeysResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ListUserGpgKeysResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ListUserGpgKeysResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ListUserGpgKeysResponse::getPrimaryKeyid() const
{
    return primaryKeyid_;
}

void ListUserGpgKeysResponse::setPrimaryKeyid(const std::string& value)
{
    primaryKeyid_ = value;
    primaryKeyidIsSet_ = true;
}

bool ListUserGpgKeysResponse::primaryKeyidIsSet() const
{
    return primaryKeyidIsSet_;
}

void ListUserGpgKeysResponse::unsetprimaryKeyid()
{
    primaryKeyidIsSet_ = false;
}

bool ListUserGpgKeysResponse::isActive() const
{
    return active_;
}

void ListUserGpgKeysResponse::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool ListUserGpgKeysResponse::activeIsSet() const
{
    return activeIsSet_;
}

void ListUserGpgKeysResponse::unsetactive()
{
    activeIsSet_ = false;
}

std::vector<GpgSubKeyDto>& ListUserGpgKeysResponse::getSubkeys()
{
    return subkeys_;
}

void ListUserGpgKeysResponse::setSubkeys(const std::vector<GpgSubKeyDto>& value)
{
    subkeys_ = value;
    subkeysIsSet_ = true;
}

bool ListUserGpgKeysResponse::subkeysIsSet() const
{
    return subkeysIsSet_;
}

void ListUserGpgKeysResponse::unsetsubkeys()
{
    subkeysIsSet_ = false;
}

}
}
}
}
}


