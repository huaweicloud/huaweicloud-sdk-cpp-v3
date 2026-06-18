

#include "huaweicloud/codeartsrepo/v4/model/TenantRepoEncryptionSettingRequestDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




TenantRepoEncryptionSettingRequestDto::TenantRepoEncryptionSettingRequestDto()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    encryptionType_ = "";
    encryptionTypeIsSet_ = false;
    defaultEncryptionEnabled_ = false;
    defaultEncryptionEnabledIsSet_ = false;
    cmkKeyName_ = "";
    cmkKeyNameIsSet_ = false;
    cmkKeyId_ = "";
    cmkKeyIdIsSet_ = false;
}

TenantRepoEncryptionSettingRequestDto::~TenantRepoEncryptionSettingRequestDto() = default;

void TenantRepoEncryptionSettingRequestDto::validate()
{
}

web::json::value TenantRepoEncryptionSettingRequestDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(encryptionTypeIsSet_) {
        val[utility::conversions::to_string_t("encryption_type")] = ModelBase::toJson(encryptionType_);
    }
    if(defaultEncryptionEnabledIsSet_) {
        val[utility::conversions::to_string_t("default_encryption_enabled")] = ModelBase::toJson(defaultEncryptionEnabled_);
    }
    if(cmkKeyNameIsSet_) {
        val[utility::conversions::to_string_t("cmk_key_name")] = ModelBase::toJson(cmkKeyName_);
    }
    if(cmkKeyIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_key_id")] = ModelBase::toJson(cmkKeyId_);
    }

    return val;
}
bool TenantRepoEncryptionSettingRequestDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_encryption_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_encryption_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultEncryptionEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmk_key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmk_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkKeyId(refVal);
        }
    }
    return ok;
}


std::string TenantRepoEncryptionSettingRequestDto::getTenantId() const
{
    return tenantId_;
}

void TenantRepoEncryptionSettingRequestDto::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool TenantRepoEncryptionSettingRequestDto::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void TenantRepoEncryptionSettingRequestDto::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string TenantRepoEncryptionSettingRequestDto::getEncryptionType() const
{
    return encryptionType_;
}

void TenantRepoEncryptionSettingRequestDto::setEncryptionType(const std::string& value)
{
    encryptionType_ = value;
    encryptionTypeIsSet_ = true;
}

bool TenantRepoEncryptionSettingRequestDto::encryptionTypeIsSet() const
{
    return encryptionTypeIsSet_;
}

void TenantRepoEncryptionSettingRequestDto::unsetencryptionType()
{
    encryptionTypeIsSet_ = false;
}

bool TenantRepoEncryptionSettingRequestDto::isDefaultEncryptionEnabled() const
{
    return defaultEncryptionEnabled_;
}

void TenantRepoEncryptionSettingRequestDto::setDefaultEncryptionEnabled(bool value)
{
    defaultEncryptionEnabled_ = value;
    defaultEncryptionEnabledIsSet_ = true;
}

bool TenantRepoEncryptionSettingRequestDto::defaultEncryptionEnabledIsSet() const
{
    return defaultEncryptionEnabledIsSet_;
}

void TenantRepoEncryptionSettingRequestDto::unsetdefaultEncryptionEnabled()
{
    defaultEncryptionEnabledIsSet_ = false;
}

std::string TenantRepoEncryptionSettingRequestDto::getCmkKeyName() const
{
    return cmkKeyName_;
}

void TenantRepoEncryptionSettingRequestDto::setCmkKeyName(const std::string& value)
{
    cmkKeyName_ = value;
    cmkKeyNameIsSet_ = true;
}

bool TenantRepoEncryptionSettingRequestDto::cmkKeyNameIsSet() const
{
    return cmkKeyNameIsSet_;
}

void TenantRepoEncryptionSettingRequestDto::unsetcmkKeyName()
{
    cmkKeyNameIsSet_ = false;
}

std::string TenantRepoEncryptionSettingRequestDto::getCmkKeyId() const
{
    return cmkKeyId_;
}

void TenantRepoEncryptionSettingRequestDto::setCmkKeyId(const std::string& value)
{
    cmkKeyId_ = value;
    cmkKeyIdIsSet_ = true;
}

bool TenantRepoEncryptionSettingRequestDto::cmkKeyIdIsSet() const
{
    return cmkKeyIdIsSet_;
}

void TenantRepoEncryptionSettingRequestDto::unsetcmkKeyId()
{
    cmkKeyIdIsSet_ = false;
}

}
}
}
}
}


