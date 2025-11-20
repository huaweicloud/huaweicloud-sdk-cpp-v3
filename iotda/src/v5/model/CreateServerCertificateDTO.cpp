

#include "huaweicloud/iotda/v5/model/CreateServerCertificateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateServerCertificateDTO::CreateServerCertificateDTO()
{
    certificatePem_ = "";
    certificatePemIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    privateKeyPassword_ = "";
    privateKeyPasswordIsSet_ = false;
}

CreateServerCertificateDTO::~CreateServerCertificateDTO() = default;

void CreateServerCertificateDTO::validate()
{
}

web::json::value CreateServerCertificateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificatePemIsSet_) {
        val[utility::conversions::to_string_t("certificate_pem")] = ModelBase::toJson(certificatePem_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(privateKeyPasswordIsSet_) {
        val[utility::conversions::to_string_t("private_key_password")] = ModelBase::toJson(privateKeyPassword_);
    }

    return val;
}
bool CreateServerCertificateDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_pem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_pem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificatePem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_key_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_key_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKeyPassword(refVal);
        }
    }
    return ok;
}


std::string CreateServerCertificateDTO::getCertificatePem() const
{
    return certificatePem_;
}

void CreateServerCertificateDTO::setCertificatePem(const std::string& value)
{
    certificatePem_ = value;
    certificatePemIsSet_ = true;
}

bool CreateServerCertificateDTO::certificatePemIsSet() const
{
    return certificatePemIsSet_;
}

void CreateServerCertificateDTO::unsetcertificatePem()
{
    certificatePemIsSet_ = false;
}

std::string CreateServerCertificateDTO::getPrivateKey() const
{
    return privateKey_;
}

void CreateServerCertificateDTO::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool CreateServerCertificateDTO::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void CreateServerCertificateDTO::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

std::string CreateServerCertificateDTO::getPrivateKeyPassword() const
{
    return privateKeyPassword_;
}

void CreateServerCertificateDTO::setPrivateKeyPassword(const std::string& value)
{
    privateKeyPassword_ = value;
    privateKeyPasswordIsSet_ = true;
}

bool CreateServerCertificateDTO::privateKeyPasswordIsSet() const
{
    return privateKeyPasswordIsSet_;
}

void CreateServerCertificateDTO::unsetprivateKeyPassword()
{
    privateKeyPasswordIsSet_ = false;
}

}
}
}
}
}


