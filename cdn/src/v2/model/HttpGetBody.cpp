

#include "huaweicloud/cdn/v2/model/HttpGetBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




HttpGetBody::HttpGetBody()
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
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    encCertificateValue_ = "";
    encCertificateValueIsSet_ = false;
    certificatesIsSet_ = false;
    http2Status_ = "";
    http2StatusIsSet_ = false;
    tlsVersion_ = "";
    tlsVersionIsSet_ = false;
    ocspStaplingStatus_ = "";
    ocspStaplingStatusIsSet_ = false;
}

HttpGetBody::~HttpGetBody() = default;

void HttpGetBody::validate()
{
}

web::json::value HttpGetBody::toJson() const
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
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(encCertificateValueIsSet_) {
        val[utility::conversions::to_string_t("enc_certificate_value")] = ModelBase::toJson(encCertificateValue_);
    }
    if(certificatesIsSet_) {
        val[utility::conversions::to_string_t("certificates")] = ModelBase::toJson(certificates_);
    }
    if(http2StatusIsSet_) {
        val[utility::conversions::to_string_t("http2_status")] = ModelBase::toJson(http2Status_);
    }
    if(tlsVersionIsSet_) {
        val[utility::conversions::to_string_t("tls_version")] = ModelBase::toJson(tlsVersion_);
    }
    if(ocspStaplingStatusIsSet_) {
        val[utility::conversions::to_string_t("ocsp_stapling_status")] = ModelBase::toJson(ocspStaplingStatus_);
    }

    return val;
}
bool HttpGetBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificates"));
        if(!fieldValue.is_null())
        {
            std::vector<CertificatesGetBody> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("tls_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tls_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTlsVersion(refVal);
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


std::string HttpGetBody::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpGetBody::setHttpsStatus(const std::string& value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpGetBody::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpGetBody::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string HttpGetBody::getCertificateType() const
{
    return certificateType_;
}

void HttpGetBody::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool HttpGetBody::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void HttpGetBody::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t HttpGetBody::getCertificateSource() const
{
    return certificateSource_;
}

void HttpGetBody::setCertificateSource(int32_t value)
{
    certificateSource_ = value;
    certificateSourceIsSet_ = true;
}

bool HttpGetBody::certificateSourceIsSet() const
{
    return certificateSourceIsSet_;
}

void HttpGetBody::unsetcertificateSource()
{
    certificateSourceIsSet_ = false;
}

std::string HttpGetBody::getScmCertificateId() const
{
    return scmCertificateId_;
}

void HttpGetBody::setScmCertificateId(const std::string& value)
{
    scmCertificateId_ = value;
    scmCertificateIdIsSet_ = true;
}

bool HttpGetBody::scmCertificateIdIsSet() const
{
    return scmCertificateIdIsSet_;
}

void HttpGetBody::unsetscmCertificateId()
{
    scmCertificateIdIsSet_ = false;
}

std::string HttpGetBody::getCertificateName() const
{
    return certificateName_;
}

void HttpGetBody::setCertificateName(const std::string& value)
{
    certificateName_ = value;
    certificateNameIsSet_ = true;
}

bool HttpGetBody::certificateNameIsSet() const
{
    return certificateNameIsSet_;
}

void HttpGetBody::unsetcertificateName()
{
    certificateNameIsSet_ = false;
}

std::string HttpGetBody::getCertificateValue() const
{
    return certificateValue_;
}

void HttpGetBody::setCertificateValue(const std::string& value)
{
    certificateValue_ = value;
    certificateValueIsSet_ = true;
}

bool HttpGetBody::certificateValueIsSet() const
{
    return certificateValueIsSet_;
}

void HttpGetBody::unsetcertificateValue()
{
    certificateValueIsSet_ = false;
}

int64_t HttpGetBody::getExpireTime() const
{
    return expireTime_;
}

void HttpGetBody::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool HttpGetBody::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void HttpGetBody::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string HttpGetBody::getEncCertificateValue() const
{
    return encCertificateValue_;
}

void HttpGetBody::setEncCertificateValue(const std::string& value)
{
    encCertificateValue_ = value;
    encCertificateValueIsSet_ = true;
}

bool HttpGetBody::encCertificateValueIsSet() const
{
    return encCertificateValueIsSet_;
}

void HttpGetBody::unsetencCertificateValue()
{
    encCertificateValueIsSet_ = false;
}

std::vector<CertificatesGetBody>& HttpGetBody::getCertificates()
{
    return certificates_;
}

void HttpGetBody::setCertificates(const std::vector<CertificatesGetBody>& value)
{
    certificates_ = value;
    certificatesIsSet_ = true;
}

bool HttpGetBody::certificatesIsSet() const
{
    return certificatesIsSet_;
}

void HttpGetBody::unsetcertificates()
{
    certificatesIsSet_ = false;
}

std::string HttpGetBody::getHttp2Status() const
{
    return http2Status_;
}

void HttpGetBody::setHttp2Status(const std::string& value)
{
    http2Status_ = value;
    http2StatusIsSet_ = true;
}

bool HttpGetBody::http2StatusIsSet() const
{
    return http2StatusIsSet_;
}

void HttpGetBody::unsethttp2Status()
{
    http2StatusIsSet_ = false;
}

std::string HttpGetBody::getTlsVersion() const
{
    return tlsVersion_;
}

void HttpGetBody::setTlsVersion(const std::string& value)
{
    tlsVersion_ = value;
    tlsVersionIsSet_ = true;
}

bool HttpGetBody::tlsVersionIsSet() const
{
    return tlsVersionIsSet_;
}

void HttpGetBody::unsettlsVersion()
{
    tlsVersionIsSet_ = false;
}

std::string HttpGetBody::getOcspStaplingStatus() const
{
    return ocspStaplingStatus_;
}

void HttpGetBody::setOcspStaplingStatus(const std::string& value)
{
    ocspStaplingStatus_ = value;
    ocspStaplingStatusIsSet_ = true;
}

bool HttpGetBody::ocspStaplingStatusIsSet() const
{
    return ocspStaplingStatusIsSet_;
}

void HttpGetBody::unsetocspStaplingStatus()
{
    ocspStaplingStatusIsSet_ = false;
}

}
}
}
}
}


