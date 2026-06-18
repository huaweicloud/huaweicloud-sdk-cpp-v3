

#include "huaweicloud/codeartsrepo/v4/model/ShowProjectTenantSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowProjectTenantSettingsResponse::ShowProjectTenantSettingsResponse()
{
    defaultEncryptionEnabled_ = false;
    defaultEncryptionEnabledIsSet_ = false;
    encryptionType_ = "";
    encryptionTypeIsSet_ = false;
    permitPublic_ = "";
    permitPublicIsSet_ = false;
}

ShowProjectTenantSettingsResponse::~ShowProjectTenantSettingsResponse() = default;

void ShowProjectTenantSettingsResponse::validate()
{
}

web::json::value ShowProjectTenantSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultEncryptionEnabledIsSet_) {
        val[utility::conversions::to_string_t("default_encryption_enabled")] = ModelBase::toJson(defaultEncryptionEnabled_);
    }
    if(encryptionTypeIsSet_) {
        val[utility::conversions::to_string_t("encryption_type")] = ModelBase::toJson(encryptionType_);
    }
    if(permitPublicIsSet_) {
        val[utility::conversions::to_string_t("permit_public")] = ModelBase::toJson(permitPublic_);
    }

    return val;
}
bool ShowProjectTenantSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("default_encryption_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_encryption_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultEncryptionEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permit_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_public"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitPublic(refVal);
        }
    }
    return ok;
}


bool ShowProjectTenantSettingsResponse::isDefaultEncryptionEnabled() const
{
    return defaultEncryptionEnabled_;
}

void ShowProjectTenantSettingsResponse::setDefaultEncryptionEnabled(bool value)
{
    defaultEncryptionEnabled_ = value;
    defaultEncryptionEnabledIsSet_ = true;
}

bool ShowProjectTenantSettingsResponse::defaultEncryptionEnabledIsSet() const
{
    return defaultEncryptionEnabledIsSet_;
}

void ShowProjectTenantSettingsResponse::unsetdefaultEncryptionEnabled()
{
    defaultEncryptionEnabledIsSet_ = false;
}

std::string ShowProjectTenantSettingsResponse::getEncryptionType() const
{
    return encryptionType_;
}

void ShowProjectTenantSettingsResponse::setEncryptionType(const std::string& value)
{
    encryptionType_ = value;
    encryptionTypeIsSet_ = true;
}

bool ShowProjectTenantSettingsResponse::encryptionTypeIsSet() const
{
    return encryptionTypeIsSet_;
}

void ShowProjectTenantSettingsResponse::unsetencryptionType()
{
    encryptionTypeIsSet_ = false;
}

std::string ShowProjectTenantSettingsResponse::getPermitPublic() const
{
    return permitPublic_;
}

void ShowProjectTenantSettingsResponse::setPermitPublic(const std::string& value)
{
    permitPublic_ = value;
    permitPublicIsSet_ = true;
}

bool ShowProjectTenantSettingsResponse::permitPublicIsSet() const
{
    return permitPublicIsSet_;
}

void ShowProjectTenantSettingsResponse::unsetpermitPublic()
{
    permitPublicIsSet_ = false;
}

}
}
}
}
}


