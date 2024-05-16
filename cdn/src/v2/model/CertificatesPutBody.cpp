

#include "huaweicloud/cdn/v2/model/CertificatesPutBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CertificatesPutBody::CertificatesPutBody()
{
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    certificateName_ = "";
    certificateNameIsSet_ = false;
    certificateValue_ = "";
    certificateValueIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    encCertificateValue_ = "";
    encCertificateValueIsSet_ = false;
    encPrivateKey_ = "";
    encPrivateKeyIsSet_ = false;
}

CertificatesPutBody::~CertificatesPutBody() = default;

void CertificatesPutBody::validate()
{
}

web::json::value CertificatesPutBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(certificateNameIsSet_) {
        val[utility::conversions::to_string_t("certificate_name")] = ModelBase::toJson(certificateName_);
    }
    if(certificateValueIsSet_) {
        val[utility::conversions::to_string_t("certificate_value")] = ModelBase::toJson(certificateValue_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(encCertificateValueIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate_value")] = ModelBase::toJson(encCertificateValue_);
    }
    if(encPrivateKeyIsSet_) {
        val[utility::conversions::to_string_t("enc_private_key")] = ModelBase::toJson(encPrivateKey_);
    }

    return val;
}
bool CertificatesPutBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enc_certificate_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_certificate_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncCertificateValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enc_private_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enc_private_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncPrivateKey(refVal);
        }
    }
    return ok;
}


std::string CertificatesPutBody::getCertificateType() const
{
    return certificateType_;
}

void CertificatesPutBody::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool CertificatesPutBody::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void CertificatesPutBody::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string CertificatesPutBody::getCertificateName() const
{
    return certificateName_;
}

void CertificatesPutBody::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool CertificatesPutBody::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void CertificatesPutBody::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string CertificatesPutBody::getCertificateValue() const
{
    return certificateValue_;
}

void CertificatesPutBody::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool CertificatesPutBody::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void CertificatesPutBody::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

std::string CertificatesPutBody::getPrivateKey() const
{
    return privateKey_;
}

void CertificatesPutBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool CertificatesPutBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void CertificatesPutBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

std::string CertificatesPutBody::getEncCertificateValue() const
{
    return encCertificateValue_;
}

void CertificatesPutBody::setEncCertificateValue(const std::string& value)
{
    encCertificateValue_ = value;
    encCertificateValueIsSet_ = true;
}

bool CertificatesPutBody::encCertificateValueIsSet() const
{
    return encCertificateValueIsSet_;
}

void CertificatesPutBody::unsetencCertificateValue()
{
    encCertificateValueIsSet_ = false;
}

std::string CertificatesPutBody::getEncPrivateKey() const
{
    return encPrivateKey_;
}

void CertificatesPutBody::setEncPrivateKey(const std::string& value)
{
    encPrivateKey_ = value;
    encPrivateKeyIsSet_ = true;
}

bool CertificatesPutBody::encPrivateKeyIsSet() const
{
    return encPrivateKeyIsSet_;
}

void CertificatesPutBody::unsetencPrivateKey()
{
    encPrivateKeyIsSet_ = false;
}

}
}
}
}
}


