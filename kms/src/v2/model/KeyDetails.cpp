

#include "huaweicloud/kms/v2/model/KeyDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeyDetails::KeyDetails()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    keyAlias_ = "";
    keyAliasIsSet_ = false;
    realm_ = "";
    realmIsSet_ = false;
    keySpec_ = "";
    keySpecIsSet_ = false;
    keyUsage_ = "";
    keyUsageIsSet_ = false;
    keyDescription_ = "";
    keyDescriptionIsSet_ = false;
    creationDate_ = "";
    creationDateIsSet_ = false;
    scheduledDeletionDate_ = "";
    scheduledDeletionDateIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
    defaultKeyFlag_ = "";
    defaultKeyFlagIsSet_ = false;
    keyType_ = "";
    keyTypeIsSet_ = false;
    expirationTime_ = "";
    expirationTimeIsSet_ = false;
    origin_ = "";
    originIsSet_ = false;
    keyRotationEnabled_ = "";
    keyRotationEnabledIsSet_ = false;
    sysEnterpriseProjectId_ = "";
    sysEnterpriseProjectIdIsSet_ = false;
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    keyLabel_ = "";
    keyLabelIsSet_ = false;
    partitionType_ = "";
    partitionTypeIsSet_ = false;
}

KeyDetails::~KeyDetails() = default;

void KeyDetails::validate()
{
}

web::json::value KeyDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }
    if(realmIsSet_) {
        val[utility::conversions::to_string_t("realm")] = ModelBase::toJson(realm_);
    }
    if(keySpecIsSet_) {
        val[utility::conversions::to_string_t("key_spec")] = ModelBase::toJson(keySpec_);
    }
    if(keyUsageIsSet_) {
        val[utility::conversions::to_string_t("key_usage")] = ModelBase::toJson(keyUsage_);
    }
    if(keyDescriptionIsSet_) {
        val[utility::conversions::to_string_t("key_description")] = ModelBase::toJson(keyDescription_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(scheduledDeletionDateIsSet_) {
        val[utility::conversions::to_string_t("scheduled_deletion_date")] = ModelBase::toJson(scheduledDeletionDate_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }
    if(defaultKeyFlagIsSet_) {
        val[utility::conversions::to_string_t("default_key_flag")] = ModelBase::toJson(defaultKeyFlag_);
    }
    if(keyTypeIsSet_) {
        val[utility::conversions::to_string_t("key_type")] = ModelBase::toJson(keyType_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }
    if(keyRotationEnabledIsSet_) {
        val[utility::conversions::to_string_t("key_rotation_enabled")] = ModelBase::toJson(keyRotationEnabled_);
    }
    if(sysEnterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("sys_enterprise_project_id")] = ModelBase::toJson(sysEnterpriseProjectId_);
    }
    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(keyLabelIsSet_) {
        val[utility::conversions::to_string_t("key_label")] = ModelBase::toJson(keyLabel_);
    }
    if(partitionTypeIsSet_) {
        val[utility::conversions::to_string_t("partition_type")] = ModelBase::toJson(partitionType_);
    }

    return val;
}

bool KeyDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("realm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("realm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_spec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduled_deletion_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduled_deletion_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduledDeletionDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_key_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_key_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultKeyFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_rotation_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_rotation_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyRotationEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionType(refVal);
        }
    }
    return ok;
}

std::string KeyDetails::getKeyId() const
{
    return keyId_;
}

void KeyDetails::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool KeyDetails::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void KeyDetails::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string KeyDetails::getDomainId() const
{
    return domainId_;
}

void KeyDetails::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool KeyDetails::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void KeyDetails::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string KeyDetails::getKeyAlias() const
{
    return keyAlias_;
}

void KeyDetails::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool KeyDetails::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void KeyDetails::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

std::string KeyDetails::getRealm() const
{
    return realm_;
}

void KeyDetails::setRealm(const std::string& value)
{
    realm_ = value;
    realmIsSet_ = true;
}

bool KeyDetails::realmIsSet() const
{
    return realmIsSet_;
}

void KeyDetails::unsetrealm()
{
    realmIsSet_ = false;
}

std::string KeyDetails::getKeySpec() const
{
    return keySpec_;
}

void KeyDetails::setKeySpec(const std::string& value)
{
    keySpec_ = value;
    keySpecIsSet_ = true;
}

bool KeyDetails::keySpecIsSet() const
{
    return keySpecIsSet_;
}

void KeyDetails::unsetkeySpec()
{
    keySpecIsSet_ = false;
}

std::string KeyDetails::getKeyUsage() const
{
    return keyUsage_;
}

void KeyDetails::setKeyUsage(const std::string& value)
{
    keyUsage_ = value;
    keyUsageIsSet_ = true;
}

bool KeyDetails::keyUsageIsSet() const
{
    return keyUsageIsSet_;
}

void KeyDetails::unsetkeyUsage()
{
    keyUsageIsSet_ = false;
}

std::string KeyDetails::getKeyDescription() const
{
    return keyDescription_;
}

void KeyDetails::setKeyDescription(const std::string& value)
{
    keyDescription_ = value;
    keyDescriptionIsSet_ = true;
}

bool KeyDetails::keyDescriptionIsSet() const
{
    return keyDescriptionIsSet_;
}

void KeyDetails::unsetkeyDescription()
{
    keyDescriptionIsSet_ = false;
}

std::string KeyDetails::getCreationDate() const
{
    return creationDate_;
}

void KeyDetails::setCreationDate(const std::string& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool KeyDetails::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void KeyDetails::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

std::string KeyDetails::getScheduledDeletionDate() const
{
    return scheduledDeletionDate_;
}

void KeyDetails::setScheduledDeletionDate(const std::string& value)
{
    scheduledDeletionDate_ = value;
    scheduledDeletionDateIsSet_ = true;
}

bool KeyDetails::scheduledDeletionDateIsSet() const
{
    return scheduledDeletionDateIsSet_;
}

void KeyDetails::unsetscheduledDeletionDate()
{
    scheduledDeletionDateIsSet_ = false;
}

std::string KeyDetails::getKeyState() const
{
    return keyState_;
}

void KeyDetails::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool KeyDetails::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void KeyDetails::unsetkeyState()
{
    keyStateIsSet_ = false;
}

std::string KeyDetails::getDefaultKeyFlag() const
{
    return defaultKeyFlag_;
}

void KeyDetails::setDefaultKeyFlag(const std::string& value)
{
    defaultKeyFlag_ = value;
    defaultKeyFlagIsSet_ = true;
}

bool KeyDetails::defaultKeyFlagIsSet() const
{
    return defaultKeyFlagIsSet_;
}

void KeyDetails::unsetdefaultKeyFlag()
{
    defaultKeyFlagIsSet_ = false;
}

std::string KeyDetails::getKeyType() const
{
    return keyType_;
}

void KeyDetails::setKeyType(const std::string& value)
{
    keyType_ = value;
    keyTypeIsSet_ = true;
}

bool KeyDetails::keyTypeIsSet() const
{
    return keyTypeIsSet_;
}

void KeyDetails::unsetkeyType()
{
    keyTypeIsSet_ = false;
}

std::string KeyDetails::getExpirationTime() const
{
    return expirationTime_;
}

void KeyDetails::setExpirationTime(const std::string& value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool KeyDetails::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void KeyDetails::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

std::string KeyDetails::getOrigin() const
{
    return origin_;
}

void KeyDetails::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool KeyDetails::originIsSet() const
{
    return originIsSet_;
}

void KeyDetails::unsetorigin()
{
    originIsSet_ = false;
}

std::string KeyDetails::getKeyRotationEnabled() const
{
    return keyRotationEnabled_;
}

void KeyDetails::setKeyRotationEnabled(const std::string& value)
{
    keyRotationEnabled_ = value;
    keyRotationEnabledIsSet_ = true;
}

bool KeyDetails::keyRotationEnabledIsSet() const
{
    return keyRotationEnabledIsSet_;
}

void KeyDetails::unsetkeyRotationEnabled()
{
    keyRotationEnabledIsSet_ = false;
}

std::string KeyDetails::getSysEnterpriseProjectId() const
{
    return sysEnterpriseProjectId_;
}

void KeyDetails::setSysEnterpriseProjectId(const std::string& value)
{
    sysEnterpriseProjectId_ = value;
    sysEnterpriseProjectIdIsSet_ = true;
}

bool KeyDetails::sysEnterpriseProjectIdIsSet() const
{
    return sysEnterpriseProjectIdIsSet_;
}

void KeyDetails::unsetsysEnterpriseProjectId()
{
    sysEnterpriseProjectIdIsSet_ = false;
}

std::string KeyDetails::getKeystoreId() const
{
    return keystoreId_;
}

void KeyDetails::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool KeyDetails::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void KeyDetails::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

std::string KeyDetails::getKeyLabel() const
{
    return keyLabel_;
}

void KeyDetails::setKeyLabel(const std::string& value)
{
    keyLabel_ = value;
    keyLabelIsSet_ = true;
}

bool KeyDetails::keyLabelIsSet() const
{
    return keyLabelIsSet_;
}

void KeyDetails::unsetkeyLabel()
{
    keyLabelIsSet_ = false;
}

std::string KeyDetails::getPartitionType() const
{
    return partitionType_;
}

void KeyDetails::setPartitionType(const std::string& value)
{
    partitionType_ = value;
    partitionTypeIsSet_ = true;
}

bool KeyDetails::partitionTypeIsSet() const
{
    return partitionTypeIsSet_;
}

void KeyDetails::unsetpartitionType()
{
    partitionTypeIsSet_ = false;
}

}
}
}
}
}


