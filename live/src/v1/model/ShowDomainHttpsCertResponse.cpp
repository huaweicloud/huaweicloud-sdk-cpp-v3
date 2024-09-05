

#include "huaweicloud/live/v1/model/ShowDomainHttpsCertResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowDomainHttpsCertResponse::ShowDomainHttpsCertResponse()
{
    certificateFormat_ = "";
    certificateFormatIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    certificateKey_ = "";
    certificateKeyIsSet_ = false;
    forceRedirect_ = false;
    forceRedirectIsSet_ = false;
    gmCertificateIsSet_ = false;
    tlsCertificateIsSet_ = false;
}

ShowDomainHttpsCertResponse::~ShowDomainHttpsCertResponse() = default;

void ShowDomainHttpsCertResponse::validate()
{
}

web::json::value ShowDomainHttpsCertResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateFormatIsSet_) {
        val[utility::conversions::to_string_t("certificate_format")] = ModelBase::toJson(certificateFormat_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(certificateKeyIsSet_) {
        val[utility::conversions::to_string_t("certificate_key")] = ModelBase::toJson(certificateKey_);
    }
    if(forceRedirectIsSet_) {
        val[utility::conversions::to_string_t("force_redirect")] = ModelBase::toJson(forceRedirect_);
    }
    if(gmCertificateIsSet_) {
        val[utility::conversions::to_string_t("gm_certificate")] = ModelBase::toJson(gmCertificate_);
    }
    if(tlsCertificateIsSet_) {
        val[utility::conversions::to_string_t("tls_certificate")] = ModelBase::toJson(tlsCertificate_);
    }

    return val;
}
bool ShowDomainHttpsCertResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_redirect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_redirect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRedirect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gm_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gm_certificate"));
        if(!fieldValue.is_null())
        {
            GmCertificateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGmCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tls_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tls_certificate"));
        if(!fieldValue.is_null())
        {
            TlsCertificateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTlsCertificate(refVal);
        }
    }
    return ok;
}


std::string ShowDomainHttpsCertResponse::getCertificateFormat() const
{
    return certificateFormat_;
}

void ShowDomainHttpsCertResponse::setCertificateFormat(const std::string& value)
{
    certificateFormat_ = value;
    certificateFormatIsSet_ = true;
}

bool ShowDomainHttpsCertResponse::certificateFormatIsSet() const
{
    return certificateFormatIsSet_;
}

void ShowDomainHttpsCertResponse::unsetcertificateFormat()
{
    certificateFormatIsSet_ = false;
}

std::string ShowDomainHttpsCertResponse::getCertificate() const
{
    return certificate_;
}

void ShowDomainHttpsCertResponse::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool ShowDomainHttpsCertResponse::certificateIsSet() const
{
    return certificateIsSet_;
}

void ShowDomainHttpsCertResponse::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string ShowDomainHttpsCertResponse::getCertificateKey() const
{
    return certificateKey_;
}

void ShowDomainHttpsCertResponse::setCertificateKey(const std::string& value)
{
    certificateKey_ = value;
    certificateKeyIsSet_ = true;
}

bool ShowDomainHttpsCertResponse::certificateKeyIsSet() const
{
    return certificateKeyIsSet_;
}

void ShowDomainHttpsCertResponse::unsetcertificateKey()
{
    certificateKeyIsSet_ = false;
}

bool ShowDomainHttpsCertResponse::isForceRedirect() const
{
    return forceRedirect_;
}

void ShowDomainHttpsCertResponse::setForceRedirect(bool value)
{
    forceRedirect_ = value;
    forceRedirectIsSet_ = true;
}

bool ShowDomainHttpsCertResponse::forceRedirectIsSet() const
{
    return forceRedirectIsSet_;
}

void ShowDomainHttpsCertResponse::unsetforceRedirect()
{
    forceRedirectIsSet_ = false;
}

GmCertificateInfo ShowDomainHttpsCertResponse::getGmCertificate() const
{
    return gmCertificate_;
}

void ShowDomainHttpsCertResponse::setGmCertificate(const GmCertificateInfo& value)
{
    gmCertificate_ = value;
    gmCertificateIsSet_ = true;
}

bool ShowDomainHttpsCertResponse::gmCertificateIsSet() const
{
    return gmCertificateIsSet_;
}

void ShowDomainHttpsCertResponse::unsetgmCertificate()
{
    gmCertificateIsSet_ = false;
}

TlsCertificateInfo ShowDomainHttpsCertResponse::getTlsCertificate() const
{
    return tlsCertificate_;
}

void ShowDomainHttpsCertResponse::setTlsCertificate(const TlsCertificateInfo& value)
{
    tlsCertificate_ = value;
    tlsCertificateIsSet_ = true;
}

bool ShowDomainHttpsCertResponse::tlsCertificateIsSet() const
{
    return tlsCertificateIsSet_;
}

void ShowDomainHttpsCertResponse::unsettlsCertificate()
{
    tlsCertificateIsSet_ = false;
}

}
}
}
}
}


