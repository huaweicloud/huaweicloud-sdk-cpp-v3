

#include "huaweicloud/codeartsrepo/v4/model/ShowTenantRepoEncryptionSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowTenantRepoEncryptionSettingResponse::ShowTenantRepoEncryptionSettingResponse()
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

ShowTenantRepoEncryptionSettingResponse::~ShowTenantRepoEncryptionSettingResponse() = default;

void ShowTenantRepoEncryptionSettingResponse::validate()
{
}

web::json::value ShowTenantRepoEncryptionSettingResponse::toJson() const
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
bool ShowTenantRepoEncryptionSettingResponse::fromJson(const web::json::value& val)
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


std::string ShowTenantRepoEncryptionSettingResponse::getTenantId() const
{
    return tenantId_;
}

void ShowTenantRepoEncryptionSettingResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowTenantRepoEncryptionSettingResponse::getEncryptionType() const
{
    return encryptionType_;
}

void ShowTenantRepoEncryptionSettingResponse::setEncryptionType(const std::string& value)
{
    encryptionType_ = value;
    encryptionTypeIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::encryptionTypeIsSet() const
{
    return encryptionTypeIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetencryptionType()
{
    encryptionTypeIsSet_ = false;
}

bool ShowTenantRepoEncryptionSettingResponse::isDefaultEncryptionEnabled() const
{
    return defaultEncryptionEnabled_;
}

void ShowTenantRepoEncryptionSettingResponse::setDefaultEncryptionEnabled(bool value)
{
    defaultEncryptionEnabled_ = value;
    defaultEncryptionEnabledIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::defaultEncryptionEnabledIsSet() const
{
    return defaultEncryptionEnabledIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetdefaultEncryptionEnabled()
{
    defaultEncryptionEnabledIsSet_ = false;
}

std::string ShowTenantRepoEncryptionSettingResponse::getCmkKeyName() const
{
    return cmkKeyName_;
}

void ShowTenantRepoEncryptionSettingResponse::setCmkKeyName(const std::string& value)
{
    cmkKeyName_ = value;
    cmkKeyNameIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::cmkKeyNameIsSet() const
{
    return cmkKeyNameIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetcmkKeyName()
{
    cmkKeyNameIsSet_ = false;
}

std::string ShowTenantRepoEncryptionSettingResponse::getCmkKeyId() const
{
    return cmkKeyId_;
}

void ShowTenantRepoEncryptionSettingResponse::setCmkKeyId(const std::string& value)
{
    cmkKeyId_ = value;
    cmkKeyIdIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::cmkKeyIdIsSet() const
{
    return cmkKeyIdIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetcmkKeyId()
{
    cmkKeyIdIsSet_ = false;
}

int32_t ShowTenantRepoEncryptionSettingResponse::getId() const
{
    return id_;
}

void ShowTenantRepoEncryptionSettingResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowTenantRepoEncryptionSettingResponse::getKeyState() const
{
    return keyState_;
}

void ShowTenantRepoEncryptionSettingResponse::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetkeyState()
{
    keyStateIsSet_ = false;
}

std::string ShowTenantRepoEncryptionSettingResponse::getRegion() const
{
    return region_;
}

void ShowTenantRepoEncryptionSettingResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowTenantRepoEncryptionSettingResponse::getRegionType() const
{
    return regionType_;
}

void ShowTenantRepoEncryptionSettingResponse::setRegionType(const std::string& value)
{
    regionType_ = value;
    regionTypeIsSet_ = true;
}

bool ShowTenantRepoEncryptionSettingResponse::regionTypeIsSet() const
{
    return regionTypeIsSet_;
}

void ShowTenantRepoEncryptionSettingResponse::unsetregionType()
{
    regionTypeIsSet_ = false;
}

}
}
}
}
}


