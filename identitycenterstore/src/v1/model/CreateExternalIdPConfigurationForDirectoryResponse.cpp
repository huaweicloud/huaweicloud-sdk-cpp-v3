

#include "huaweicloud/identitycenterstore/v1/model/CreateExternalIdPConfigurationForDirectoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateExternalIdPConfigurationForDirectoryResponse::CreateExternalIdPConfigurationForDirectoryResponse()
{
    hwsSpSamlConfigIsSet_ = false;
    idpCertificateId_ = "";
    idpCertificateIdIsSet_ = false;
    idpCertificateIdsIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
}

CreateExternalIdPConfigurationForDirectoryResponse::~CreateExternalIdPConfigurationForDirectoryResponse() = default;

void CreateExternalIdPConfigurationForDirectoryResponse::validate()
{
}

web::json::value CreateExternalIdPConfigurationForDirectoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hwsSpSamlConfigIsSet_) {
        val[utility::conversions::to_string_t("hws_sp_saml_config")] = ModelBase::toJson(hwsSpSamlConfig_);
    }
    if(idpCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("idp_certificate_id")] = ModelBase::toJson(idpCertificateId_);
    }
    if(idpCertificateIdsIsSet_) {
        val[utility::conversions::to_string_t("idp_certificate_ids")] = ModelBase::toJson(idpCertificateIds_);
    }
    if(idpIdIsSet_) {
        val[utility::conversions::to_string_t("idp_id")] = ModelBase::toJson(idpId_);
    }

    return val;
}
bool CreateExternalIdPConfigurationForDirectoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hws_sp_saml_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hws_sp_saml_config"));
        if(!fieldValue.is_null())
        {
            SPSAMLConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwsSpSamlConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idp_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idp_certificate_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_certificate_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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
    return ok;
}


SPSAMLConfig CreateExternalIdPConfigurationForDirectoryResponse::getHwsSpSamlConfig() const
{
    return hwsSpSamlConfig_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::setHwsSpSamlConfig(const SPSAMLConfig& value)
{
    hwsSpSamlConfig_ = value;
    hwsSpSamlConfigIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryResponse::hwsSpSamlConfigIsSet() const
{
    return hwsSpSamlConfigIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::unsethwsSpSamlConfig()
{
    hwsSpSamlConfigIsSet_ = false;
}

std::string CreateExternalIdPConfigurationForDirectoryResponse::getIdpCertificateId() const
{
    return idpCertificateId_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::setIdpCertificateId(const std::string& value)
{
    idpCertificateId_ = value;
    idpCertificateIdIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryResponse::idpCertificateIdIsSet() const
{
    return idpCertificateIdIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::unsetidpCertificateId()
{
    idpCertificateIdIsSet_ = false;
}

std::vector<std::string>& CreateExternalIdPConfigurationForDirectoryResponse::getIdpCertificateIds()
{
    return idpCertificateIds_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::setIdpCertificateIds(const std::vector<std::string>& value)
{
    idpCertificateIds_ = value;
    idpCertificateIdsIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryResponse::idpCertificateIdsIsSet() const
{
    return idpCertificateIdsIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::unsetidpCertificateIds()
{
    idpCertificateIdsIsSet_ = false;
}

std::string CreateExternalIdPConfigurationForDirectoryResponse::getIdpId() const
{
    return idpId_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool CreateExternalIdPConfigurationForDirectoryResponse::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void CreateExternalIdPConfigurationForDirectoryResponse::unsetidpId()
{
    idpIdIsSet_ = false;
}

}
}
}
}
}


