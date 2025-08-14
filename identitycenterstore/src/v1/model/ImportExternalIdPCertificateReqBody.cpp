

#include "huaweicloud/identitycenterstore/v1/model/ImportExternalIdPCertificateReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ImportExternalIdPCertificateReqBody::ImportExternalIdPCertificateReqBody()
{
    x509CertificateInPem_ = "";
    x509CertificateInPemIsSet_ = false;
    certificateUse_ = "";
    certificateUseIsSet_ = false;
}

ImportExternalIdPCertificateReqBody::~ImportExternalIdPCertificateReqBody() = default;

void ImportExternalIdPCertificateReqBody::validate()
{
}

web::json::value ImportExternalIdPCertificateReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(x509CertificateInPemIsSet_) {
        val[utility::conversions::to_string_t("x509_certificate_in_pem")] = ModelBase::toJson(x509CertificateInPem_);
    }
    if(certificateUseIsSet_) {
        val[utility::conversions::to_string_t("certificate_use")] = ModelBase::toJson(certificateUse_);
    }

    return val;
}
bool ImportExternalIdPCertificateReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x509_certificate_in_pem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x509_certificate_in_pem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setX509CertificateInPem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_use"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateUse(refVal);
        }
    }
    return ok;
}


std::string ImportExternalIdPCertificateReqBody::getX509CertificateInPem() const
{
    return x509CertificateInPem_;
}

void ImportExternalIdPCertificateReqBody::setX509CertificateInPem(const std::string& value)
{
    x509CertificateInPem_ = value;
    x509CertificateInPemIsSet_ = true;
}

bool ImportExternalIdPCertificateReqBody::x509CertificateInPemIsSet() const
{
    return x509CertificateInPemIsSet_;
}

void ImportExternalIdPCertificateReqBody::unsetx509CertificateInPem()
{
    x509CertificateInPemIsSet_ = false;
}

std::string ImportExternalIdPCertificateReqBody::getCertificateUse() const
{
    return certificateUse_;
}

void ImportExternalIdPCertificateReqBody::setCertificateUse(const std::string& value)
{
    certificateUse_ = value;
    certificateUseIsSet_ = true;
}

bool ImportExternalIdPCertificateReqBody::certificateUseIsSet() const
{
    return certificateUseIsSet_;
}

void ImportExternalIdPCertificateReqBody::unsetcertificateUse()
{
    certificateUseIsSet_ = false;
}

}
}
}
}
}


