

#include "huaweicloud/identitycenterstore/v1/model/ExternalIdpConfigurationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ExternalIdpConfigurationDto::ExternalIdpConfigurationDto()
{
    idpCertificateIdsIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
    idpSamlConfigIsSet_ = false;
    isEnabled_ = false;
    isEnabledIsSet_ = false;
}

ExternalIdpConfigurationDto::~ExternalIdpConfigurationDto() = default;

void ExternalIdpConfigurationDto::validate()
{
}

web::json::value ExternalIdpConfigurationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idpCertificateIdsIsSet_) {
        val[utility::conversions::to_string_t("idp_certificate_ids")] = ModelBase::toJson(idpCertificateIds_);
    }
    if(idpIdIsSet_) {
        val[utility::conversions::to_string_t("idp_id")] = ModelBase::toJson(idpId_);
    }
    if(idpSamlConfigIsSet_) {
        val[utility::conversions::to_string_t("idp_saml_config")] = ModelBase::toJson(idpSamlConfig_);
    }
    if(isEnabledIsSet_) {
        val[utility::conversions::to_string_t("is_enabled")] = ModelBase::toJson(isEnabled_);
    }

    return val;
}
bool ExternalIdpConfigurationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("idp_certificate_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_certificate_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<IdpCertificateBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpCertificateIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idp_saml_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_saml_config"));
        if(!fieldValue.is_null())
        {
            IdpSAMLConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpSamlConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEnabled(refVal);
        }
    }
    return ok;
}


std::vector<IdpCertificateBody>& ExternalIdpConfigurationDto::getIdpCertificateIds()
{
    return idpCertificateIds_;
}

void ExternalIdpConfigurationDto::setIdpCertificateIds(const std::vector<IdpCertificateBody>& value)
{
    idpCertificateIds_ = value;
    idpCertificateIdsIsSet_ = true;
}

bool ExternalIdpConfigurationDto::idpCertificateIdsIsSet() const
{
    return idpCertificateIdsIsSet_;
}

void ExternalIdpConfigurationDto::unsetidpCertificateIds()
{
    idpCertificateIdsIsSet_ = false;
}

std::string ExternalIdpConfigurationDto::getIdpId() const
{
    return idpId_;
}

void ExternalIdpConfigurationDto::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool ExternalIdpConfigurationDto::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void ExternalIdpConfigurationDto::unsetidpId()
{
    idpIdIsSet_ = false;
}

IdpSAMLConfig ExternalIdpConfigurationDto::getIdpSamlConfig() const
{
    return idpSamlConfig_;
}

void ExternalIdpConfigurationDto::setIdpSamlConfig(const IdpSAMLConfig& value)
{
    idpSamlConfig_ = value;
    idpSamlConfigIsSet_ = true;
}

bool ExternalIdpConfigurationDto::idpSamlConfigIsSet() const
{
    return idpSamlConfigIsSet_;
}

void ExternalIdpConfigurationDto::unsetidpSamlConfig()
{
    idpSamlConfigIsSet_ = false;
}

bool ExternalIdpConfigurationDto::isIsEnabled() const
{
    return isEnabled_;
}

void ExternalIdpConfigurationDto::setIsEnabled(bool value)
{
    isEnabled_ = value;
    isEnabledIsSet_ = true;
}

bool ExternalIdpConfigurationDto::isEnabledIsSet() const
{
    return isEnabledIsSet_;
}

void ExternalIdpConfigurationDto::unsetisEnabled()
{
    isEnabledIsSet_ = false;
}

}
}
}
}
}


