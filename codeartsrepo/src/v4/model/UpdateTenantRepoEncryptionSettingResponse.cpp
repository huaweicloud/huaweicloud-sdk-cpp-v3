

#include "huaweicloud/codeartsrepo/v4/model/UpdateTenantRepoEncryptionSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateTenantRepoEncryptionSettingResponse::UpdateTenantRepoEncryptionSettingResponse()
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
    id_ = 0;
    idIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    regionType_ = "";
    regionTypeIsSet_ = false;
}

UpdateTenantRepoEncryptionSettingResponse::~UpdateTenantRepoEncryptionSettingResponse() = default;

void UpdateTenantRepoEncryptionSettingResponse::validate()
{
}

web::json::value UpdateTenantRepoEncryptionSettingResponse::toJson() const
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(regionTypeIsSet_) {
        val[utility::conversions::to_string_t("region_type")] = ModelBase::toJson(regionType_);
    }

    return val;
}
bool UpdateTenantRepoEncryptionSettingResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionType(refVal);
        }
    }
    return ok;
}


std::string UpdateTenantRepoEncryptionSettingResponse::getTenantId() const
{
    return tenantId_;
}

void UpdateTenantRepoEncryptionSettingResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string UpdateTenantRepoEncryptionSettingResponse::getEncryptionType() const
{
    return encryptionType_;
}

void UpdateTenantRepoEncryptionSettingResponse::setEncryptionType(const std::string& value)
{
    encryptionType_ = value;
    encryptionTypeIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::encryptionTypeIsSet() const
{
    return encryptionTypeIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetencryptionType()
{
    encryptionTypeIsSet_ = false;
}

bool UpdateTenantRepoEncryptionSettingResponse::isDefaultEncryptionEnabled() const
{
    return defaultEncryptionEnabled_;
}

void UpdateTenantRepoEncryptionSettingResponse::setDefaultEncryptionEnabled(bool value)
{
    defaultEncryptionEnabled_ = value;
    defaultEncryptionEnabledIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::defaultEncryptionEnabledIsSet() const
{
    return defaultEncryptionEnabledIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetdefaultEncryptionEnabled()
{
    defaultEncryptionEnabledIsSet_ = false;
}

std::string UpdateTenantRepoEncryptionSettingResponse::getCmkKeyName() const
{
    return cmkKeyName_;
}

void UpdateTenantRepoEncryptionSettingResponse::setCmkKeyName(const std::string& value)
{
    cmkKeyName_ = value;
    cmkKeyNameIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::cmkKeyNameIsSet() const
{
    return cmkKeyNameIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetcmkKeyName()
{
    cmkKeyNameIsSet_ = false;
}

std::string UpdateTenantRepoEncryptionSettingResponse::getCmkKeyId() const
{
    return cmkKeyId_;
}

void UpdateTenantRepoEncryptionSettingResponse::setCmkKeyId(const std::string& value)
{
    cmkKeyId_ = value;
    cmkKeyIdIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::cmkKeyIdIsSet() const
{
    return cmkKeyIdIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetcmkKeyId()
{
    cmkKeyIdIsSet_ = false;
}

int32_t UpdateTenantRepoEncryptionSettingResponse::getId() const
{
    return id_;
}

void UpdateTenantRepoEncryptionSettingResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateTenantRepoEncryptionSettingResponse::getKeyState() const
{
    return keyState_;
}

void UpdateTenantRepoEncryptionSettingResponse::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetkeyState()
{
    keyStateIsSet_ = false;
}

std::string UpdateTenantRepoEncryptionSettingResponse::getRegion() const
{
    return region_;
}

void UpdateTenantRepoEncryptionSettingResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::regionIsSet() const
{
    return regionIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string UpdateTenantRepoEncryptionSettingResponse::getRegionType() const
{
    return regionType_;
}

void UpdateTenantRepoEncryptionSettingResponse::setRegionType(const std::string& value)
{
    regionType_ = value;
    regionTypeIsSet_ = true;
}

bool UpdateTenantRepoEncryptionSettingResponse::regionTypeIsSet() const
{
    return regionTypeIsSet_;
}

void UpdateTenantRepoEncryptionSettingResponse::unsetregionType()
{
    regionTypeIsSet_ = false;
}

}
}
}
}
}


