

#include "huaweicloud/live/v1/model/TlsCertificateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




TlsCertificateInfo::TlsCertificateInfo()
{
    source_ = "";
    sourceIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    certificateKey_ = "";
    certificateKeyIsSet_ = false;
}

TlsCertificateInfo::~TlsCertificateInfo() = default;

void TlsCertificateInfo::validate()
{
}

web::json::value TlsCertificateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(certificateKeyIsSet_) {
        val[utility::conversions::to_string_t("certificate_key")] = ModelBase::toJson(certificateKey_);
    }

    return val;
}
bool TlsCertificateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
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
    return ok;
}


std::string TlsCertificateInfo::getSource() const
{
    return source_;
}

void TlsCertificateInfo::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool TlsCertificateInfo::sourceIsSet() const
{
    return sourceIsSet_;
}

void TlsCertificateInfo::unsetsource()
{
    sourceIsSet_ = false;
}

std::string TlsCertificateInfo::getCertName() const
{
    return certName_;
}

void TlsCertificateInfo::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool TlsCertificateInfo::certNameIsSet() const
{
    return certNameIsSet_;
}

void TlsCertificateInfo::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string TlsCertificateInfo::getCertId() const
{
    return certId_;
}

void TlsCertificateInfo::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool TlsCertificateInfo::certIdIsSet() const
{
    return certIdIsSet_;
}

void TlsCertificateInfo::unsetcertId()
{
    certIdIsSet_ = false;
}

std::string TlsCertificateInfo::getCertificate() const
{
    return certificate_;
}

void TlsCertificateInfo::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool TlsCertificateInfo::certificateIsSet() const
{
    return certificateIsSet_;
}

void TlsCertificateInfo::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string TlsCertificateInfo::getCertificateKey() const
{
    return certificateKey_;
}

void TlsCertificateInfo::setCertificateKey(const std::string& value)
{
    certificateKey_ = value;
    certificateKeyIsSet_ = true;
}

bool TlsCertificateInfo::certificateKeyIsSet() const
{
    return certificateKeyIsSet_;
}

void TlsCertificateInfo::unsetcertificateKey()
{
    certificateKeyIsSet_ = false;
}

}
}
}
}
}


