

#include "huaweicloud/identitycenterstore/v1/model/IdpCertificate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




IdpCertificate::IdpCertificate()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
    issuerName_ = "";
    issuerNameIsSet_ = false;
    notAfter_ = 0.0;
    notAfterIsSet_ = false;
    notBefore_ = 0.0;
    notBeforeIsSet_ = false;
    publicKey_ = "";
    publicKeyIsSet_ = false;
    serialNumber_ = 0.0;
    serialNumberIsSet_ = false;
    serialNumberString_ = "";
    serialNumberStringIsSet_ = false;
    signatureAlgorithmName_ = "";
    signatureAlgorithmNameIsSet_ = false;
    subjectName_ = "";
    subjectNameIsSet_ = false;
    version_ = 0.0;
    versionIsSet_ = false;
    x509CertificateInPem_ = "";
    x509CertificateInPemIsSet_ = false;
}

IdpCertificate::~IdpCertificate() = default;

void IdpCertificate::validate()
{
}

web::json::value IdpCertificate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(issuerNameIsSet_) {
        val[utility::conversions::to_string_t("issuer_name")] = ModelBase::toJson(issuerName_);
    }
    if(notAfterIsSet_) {
        val[utility::conversions::to_string_t("not_after")] = ModelBase::toJson(notAfter_);
    }
    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("not_before")] = ModelBase::toJson(notBefore_);
    }
    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(serialNumberStringIsSet_) {
        val[utility::conversions::to_string_t("serial_number_string")] = ModelBase::toJson(serialNumberString_);
    }
    if(signatureAlgorithmNameIsSet_) {
        val[utility::conversions::to_string_t("signature_algorithm_name")] = ModelBase::toJson(signatureAlgorithmName_);
    }
    if(subjectNameIsSet_) {
        val[utility::conversions::to_string_t("subject_name")] = ModelBase::toJson(subjectName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(x509CertificateInPemIsSet_) {
        val[utility::conversions::to_string_t("x509_Certificate_in_pem")] = ModelBase::toJson(x509CertificateInPem_);
    }

    return val;
}
bool IdpCertificate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_after"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_before"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumberString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature_algorithm_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature_algorithm_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignatureAlgorithmName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x509_Certificate_in_pem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x509_Certificate_in_pem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setX509CertificateInPem(refVal);
        }
    }
    return ok;
}


std::string IdpCertificate::getCertificateId() const
{
    return certificateId_;
}

void IdpCertificate::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool IdpCertificate::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void IdpCertificate::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string IdpCertificate::getIssuerName() const
{
    return issuerName_;
}

void IdpCertificate::setIssuerName(const std::string& value)
{
    issuerName_ = value;
    issuerNameIsSet_ = true;
}

bool IdpCertificate::issuerNameIsSet() const
{
    return issuerNameIsSet_;
}

void IdpCertificate::unsetissuerName()
{
    issuerNameIsSet_ = false;
}

double IdpCertificate::getNotAfter() const
{
    return notAfter_;
}

void IdpCertificate::setNotAfter(double value)
{
    notAfter_ = value;
    notAfterIsSet_ = true;
}

bool IdpCertificate::notAfterIsSet() const
{
    return notAfterIsSet_;
}

void IdpCertificate::unsetnotAfter()
{
    notAfterIsSet_ = false;
}

double IdpCertificate::getNotBefore() const
{
    return notBefore_;
}

void IdpCertificate::setNotBefore(double value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool IdpCertificate::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void IdpCertificate::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

std::string IdpCertificate::getPublicKey() const
{
    return publicKey_;
}

void IdpCertificate::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool IdpCertificate::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void IdpCertificate::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

double IdpCertificate::getSerialNumber() const
{
    return serialNumber_;
}

void IdpCertificate::setSerialNumber(double value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool IdpCertificate::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void IdpCertificate::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

std::string IdpCertificate::getSerialNumberString() const
{
    return serialNumberString_;
}

void IdpCertificate::setSerialNumberString(const std::string& value)
{
    serialNumberString_ = value;
    serialNumberStringIsSet_ = true;
}

bool IdpCertificate::serialNumberStringIsSet() const
{
    return serialNumberStringIsSet_;
}

void IdpCertificate::unsetserialNumberString()
{
    serialNumberStringIsSet_ = false;
}

std::string IdpCertificate::getSignatureAlgorithmName() const
{
    return signatureAlgorithmName_;
}

void IdpCertificate::setSignatureAlgorithmName(const std::string& value)
{
    signatureAlgorithmName_ = value;
    signatureAlgorithmNameIsSet_ = true;
}

bool IdpCertificate::signatureAlgorithmNameIsSet() const
{
    return signatureAlgorithmNameIsSet_;
}

void IdpCertificate::unsetsignatureAlgorithmName()
{
    signatureAlgorithmNameIsSet_ = false;
}

std::string IdpCertificate::getSubjectName() const
{
    return subjectName_;
}

void IdpCertificate::setSubjectName(const std::string& value)
{
    subjectName_ = value;
    subjectNameIsSet_ = true;
}

bool IdpCertificate::subjectNameIsSet() const
{
    return subjectNameIsSet_;
}

void IdpCertificate::unsetsubjectName()
{
    subjectNameIsSet_ = false;
}

double IdpCertificate::getVersion() const
{
    return version_;
}

void IdpCertificate::setVersion(double value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool IdpCertificate::versionIsSet() const
{
    return versionIsSet_;
}

void IdpCertificate::unsetversion()
{
    versionIsSet_ = false;
}

std::string IdpCertificate::getX509CertificateInPem() const
{
    return x509CertificateInPem_;
}

void IdpCertificate::setX509CertificateInPem(const std::string& value)
{
    x509CertificateInPem_ = value;
    x509CertificateInPemIsSet_ = true;
}

bool IdpCertificate::x509CertificateInPemIsSet() const
{
    return x509CertificateInPemIsSet_;
}

void IdpCertificate::unsetx509CertificateInPem()
{
    x509CertificateInPemIsSet_ = false;
}

}
}
}
}
}


