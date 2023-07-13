

#include "huaweicloud/cdn/v1/model/HttpsDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HttpsDetail::HttpsDetail()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    expirationTime_ = 0L;
    expirationTimeIsSet_ = false;
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    forceRedirectHttps_ = 0;
    forceRedirectHttpsIsSet_ = false;
    forceRedirectConfigIsSet_ = false;
    http2_ = 0;
    http2IsSet_ = false;
}

HttpsDetail::~HttpsDetail() = default;

void HttpsDetail::validate()
{
}

web::json::value HttpsDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(forceRedirectHttpsIsSet_) {
        val[utility::conversions::to_string_t("force_redirect_https")] = ModelBase::toJson(forceRedirectHttps_);
    }
    if(forceRedirectConfigIsSet_) {
        val[utility::conversions::to_string_t("force_redirect_config")] = ModelBase::toJson(forceRedirectConfig_);
    }
    if(http2IsSet_) {
        val[utility::conversions::to_string_t("http2")] = ModelBase::toJson(http2_);
    }

    return val;
}

bool HttpsDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_redirect_https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_redirect_https"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRedirectHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_redirect_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_redirect_config"));
        if(!fieldValue.is_null())
        {
            ForceRedirect refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRedirectConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http2"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp2(refVal);
        }
    }
    return ok;
}

std::string HttpsDetail::getDomainId() const
{
    return domainId_;
}

void HttpsDetail::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool HttpsDetail::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void HttpsDetail::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string HttpsDetail::getDomainName() const
{
    return domainName_;
}

void HttpsDetail::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool HttpsDetail::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void HttpsDetail::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string HttpsDetail::getCertName() const
{
    return certName_;
}

void HttpsDetail::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool HttpsDetail::certNameIsSet() const
{
    return certNameIsSet_;
}

void HttpsDetail::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string HttpsDetail::getCertificate() const
{
    return certificate_;
}

void HttpsDetail::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool HttpsDetail::certificateIsSet() const
{
    return certificateIsSet_;
}

void HttpsDetail::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string HttpsDetail::getPrivateKey() const
{
    return privateKey_;
}

void HttpsDetail::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HttpsDetail::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HttpsDetail::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t HttpsDetail::getCertificateType() const
{
    return certificateType_;
}

void HttpsDetail::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool HttpsDetail::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void HttpsDetail::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int64_t HttpsDetail::getExpirationTime() const
{
    return expirationTime_;
}

void HttpsDetail::setExpirationTime(int64_t value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool HttpsDetail::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void HttpsDetail::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

int32_t HttpsDetail::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpsDetail::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpsDetail::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpsDetail::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

int32_t HttpsDetail::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void HttpsDetail::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool HttpsDetail::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void HttpsDetail::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

ForceRedirect HttpsDetail::getForceRedirectConfig() const
{
    return forceRedirectConfig_;
}

void HttpsDetail::setForceRedirectConfig(const ForceRedirect& value)
{
    forceRedirectConfig_ = value;
    forceRedirectConfigIsSet_ = true;
}

bool HttpsDetail::forceRedirectConfigIsSet() const
{
    return forceRedirectConfigIsSet_;
}

void HttpsDetail::unsetforceRedirectConfig()
{
    forceRedirectConfigIsSet_ = false;
}

int32_t HttpsDetail::getHttp2() const
{
    return http2_;
}

void HttpsDetail::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool HttpsDetail::http2IsSet() const
{
    return http2IsSet_;
}

void HttpsDetail::unsethttp2()
{
    http2IsSet_ = false;
}

}
}
}
}
}


