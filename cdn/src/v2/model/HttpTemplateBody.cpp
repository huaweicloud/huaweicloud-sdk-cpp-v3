

#include "huaweicloud/cdn/v2/model/HttpTemplateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




HttpTemplateBody::HttpTemplateBody()
{
    httpsStatus_ = "";
    httpsStatusIsSet_ = false;
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    certificateSource_ = 0;
    certificateSourceIsSet_ = false;
    scmCertificateId_ = "";
    scmCertificateIdIsSet_ = false;
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
    certificatesIsSet_ = false;
    http2Status_ = "";
    http2StatusIsSet_ = false;
    ocspStaplingStatus_ = "";
    ocspStaplingStatusIsSet_ = false;
}

HttpTemplateBody::~HttpTemplateBody() = default;

void HttpTemplateBody::validate()
{
}

web::json::value HttpTemplateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(certificateSourceIsSet_) {
        val[utility::conversions::to_string_t("certificate_source")] = ModelBase::toJson(certificateSource_);
    }
    if(scmCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("scm_certificate_id")] = ModelBase::toJson(scmCertificateId_);
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
    if(certificatesIsSet_) {
        val[utility::conversions::to_string_t("certificates")] = ModelBase::toJson(certificates_);
    }
    if(http2StatusIsSet_) {
        val[utility::conversions::to_string_t("http2_status")] = ModelBase::toJson(http2Status_);
    }
    if(ocspStaplingStatusIsSet_) {
        val[utility::conversions::to_string_t("ocsp_stapling_status")] = ModelBase::toJson(ocspStaplingStatus_);
    }

    return val;
}
bool HttpTemplateBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_source"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmCertificateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<CertificatesPutBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http2_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http2_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp2Status(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ocsp_stapling_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocsp_stapling_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcspStaplingStatus(refVal);
        }
    }
    return ok;
}


std::string HttpTemplateBody::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpTemplateBody::setHttpsStatus(const std::string& value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpTemplateBody::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpTemplateBody::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string HttpTemplateBody::getCertificateType() const
{
    return certificateType_;
}

void HttpTemplateBody::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool HttpTemplateBody::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void HttpTemplateBody::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t HttpTemplateBody::getCertificateSource() const
{
    return certificateSource_;
}

void HttpTemplateBody::setCertificateSource(int32_t value)
{
    certificateSource_ = value;
    certificateSourceIsSet_ = true;
}

bool HttpTemplateBody::certificateSourceIsSet() const
{
    return certificateSourceIsSet_;
}

void HttpTemplateBody::unsetcertificateSource()
{
    certificateSourceIsSet_ = false;
}

std::string HttpTemplateBody::getScmCertificateId() const
{
    return scmCertificateId_;
}

void HttpTemplateBody::setScmCertificateId(const std::string& value)
{
    scmCertificateId_ = value;
    scmCertificateIdIsSet_ = true;
}

bool HttpTemplateBody::scmCertificateIdIsSet() const
{
    return scmCertificateIdIsSet_;
}

void HttpTemplateBody::unsetscmCertificateId()
{
    scmCertificateIdIsSet_ = false;
}

std::string HttpTemplateBody::getCertificateName() const
{
    return certificateName_;
}

void HttpTemplateBody::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool HttpTemplateBody::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void HttpTemplateBody::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string HttpTemplateBody::getCertificateValue() const
{
    return certificateValue_;
}

void HttpTemplateBody::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool HttpTemplateBody::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void HttpTemplateBody::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

std::string HttpTemplateBody::getPrivateKey() const
{
    return privateKey_;
}

void HttpTemplateBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HttpTemplateBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HttpTemplateBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

std::string HttpTemplateBody::getEncCertificateValue() const
{
    return encCertificateValue_;
}

void HttpTemplateBody::setEncCertificateValue(const std::string& value)
{
    encCertificateValue_ = value;
    encCertificateValueIsSet_ = true;
}

bool HttpTemplateBody::encCertificateValueIsSet() const
{
    return encCertificateValueIsSet_;
}

void HttpTemplateBody::unsetencCertificateValue()
{
    encCertificateValueIsSet_ = false;
}

std::string HttpTemplateBody::getEncPrivateKey() const
{
    return encPrivateKey_;
}

void HttpTemplateBody::setEncPrivateKey(const std::string& value)
{
    encPrivateKey_ = value;
    encPrivateKeyIsSet_ = true;
}

bool HttpTemplateBody::encPrivateKeyIsSet() const
{
    return encPrivateKeyIsSet_;
}

void HttpTemplateBody::unsetencPrivateKey()
{
    encPrivateKeyIsSet_ = false;
}

std::vector<CertificatesPutBody>& HttpTemplateBody::getCertificates()
{
    return certificates_;
}

void HttpTemplateBody::setCertificates(const std::vector<CertificatesPutBody>& value)
{
    certificates_ = value;
    certificatesIsSet_ = true;
}

bool HttpTemplateBody::certificatesIsSet() const
{
    return certificatesIsSet_;
}

void HttpTemplateBody::unsetcertificates()
{
    certificatesIsSet_ = false;
}

std::string HttpTemplateBody::getHttp2Status() const
{
    return http2Status_;
}

void HttpTemplateBody::setHttp2Status(const std::string& value)
{
    http2Status_ = value;
    http2StatusIsSet_ = true;
}

bool HttpTemplateBody::http2StatusIsSet() const
{
    return http2StatusIsSet_;
}

void HttpTemplateBody::unsethttp2Status()
{
    http2StatusIsSet_ = false;
}

std::string HttpTemplateBody::getOcspStaplingStatus() const
{
    return ocspStaplingStatus_;
}

void HttpTemplateBody::setOcspStaplingStatus(const std::string& value)
{
    ocspStaplingStatus_ = value;
    ocspStaplingStatusIsSet_ = true;
}

bool HttpTemplateBody::ocspStaplingStatusIsSet() const
{
    return ocspStaplingStatusIsSet_;
}

void HttpTemplateBody::unsetocspStaplingStatus()
{
    ocspStaplingStatusIsSet_ = false;
}

}
}
}
}
}


