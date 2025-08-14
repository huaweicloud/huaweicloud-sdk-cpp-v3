

#include "huaweicloud/identitycenterstore/v1/model/CreateIDPReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateIDPReqBody::CreateIDPReqBody()
{
    idpSamlMetadata_ = "";
    idpSamlMetadataIsSet_ = false;
    idpCertificate_ = "";
    idpCertificateIsSet_ = false;
    idpSamlConfigIsSet_ = false;
}

CreateIDPReqBody::~CreateIDPReqBody() = default;

void CreateIDPReqBody::validate()
{
}

web::json::value CreateIDPReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idpSamlMetadataIsSet_) {
        val[utility::conversions::to_string_t("idp_saml_metadata")] = ModelBase::toJson(idpSamlMetadata_);
    }
    if(idpCertificateIsSet_) {
        val[utility::conversions::to_string_t("idp_certificate")] = ModelBase::toJson(idpCertificate_);
    }
    if(idpSamlConfigIsSet_) {
        val[utility::conversions::to_string_t("idp_saml_config")] = ModelBase::toJson(idpSamlConfig_);
    }

    return val;
}
bool CreateIDPReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("idp_saml_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_saml_metadata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpSamlMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idp_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idp_saml_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_saml_config"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpSamlConfig(refVal);
        }
    }
    return ok;
}


std::string CreateIDPReqBody::getIdpSamlMetadata() const
{
    return idpSamlMetadata_;
}

void CreateIDPReqBody::setIdpSamlMetadata(const std::string& value)
{
    idpSamlMetadata_ = value;
    idpSamlMetadataIsSet_ = true;
}

bool CreateIDPReqBody::idpSamlMetadataIsSet() const
{
    return idpSamlMetadataIsSet_;
}

void CreateIDPReqBody::unsetidpSamlMetadata()
{
    idpSamlMetadataIsSet_ = false;
}

std::string CreateIDPReqBody::getIdpCertificate() const
{
    return idpCertificate_;
}

void CreateIDPReqBody::setIdpCertificate(const std::string& value)
{
    idpCertificate_ = value;
    idpCertificateIsSet_ = true;
}

bool CreateIDPReqBody::idpCertificateIsSet() const
{
    return idpCertificateIsSet_;
}

void CreateIDPReqBody::unsetidpCertificate()
{
    idpCertificateIsSet_ = false;
}

Object CreateIDPReqBody::getIdpSamlConfig() const
{
    return idpSamlConfig_;
}

void CreateIDPReqBody::setIdpSamlConfig(const Object& value)
{
    idpSamlConfig_ = value;
    idpSamlConfigIsSet_ = true;
}

bool CreateIDPReqBody::idpSamlConfigIsSet() const
{
    return idpSamlConfigIsSet_;
}

void CreateIDPReqBody::unsetidpSamlConfig()
{
    idpSamlConfigIsSet_ = false;
}

}
}
}
}
}


