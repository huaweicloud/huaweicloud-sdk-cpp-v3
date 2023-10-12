

#include "huaweicloud/cdn/v1/model/HttpInfoResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HttpInfoResponseBody::HttpInfoResponseBody()
{
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    forceRedirectHttps_ = 0;
    forceRedirectHttpsIsSet_ = false;
    forceRedirectConfigIsSet_ = false;
    http2_ = 0;
    http2IsSet_ = false;
    expirationTime_ = 0L;
    expirationTimeIsSet_ = false;
}

HttpInfoResponseBody::~HttpInfoResponseBody() = default;

void HttpInfoResponseBody::validate()
{
}

web::json::value HttpInfoResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
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
    if(forceRedirectHttpsIsSet_) {
        val[utility::conversions::to_string_t("force_redirect_https")] = ModelBase::toJson(forceRedirectHttps_);
    }
    if(forceRedirectConfigIsSet_) {
        val[utility::conversions::to_string_t("force_redirect_config")] = ModelBase::toJson(forceRedirectConfig_);
    }
    if(http2IsSet_) {
        val[utility::conversions::to_string_t("http2")] = ModelBase::toJson(http2_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }

    return val;
}
bool HttpInfoResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    return ok;
}


int32_t HttpInfoResponseBody::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpInfoResponseBody::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpInfoResponseBody::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpInfoResponseBody::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string HttpInfoResponseBody::getCertName() const
{
    return certName_;
}

void HttpInfoResponseBody::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool HttpInfoResponseBody::certNameIsSet() const
{
    return certNameIsSet_;
}

void HttpInfoResponseBody::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string HttpInfoResponseBody::getCertificate() const
{
    return certificate_;
}

void HttpInfoResponseBody::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool HttpInfoResponseBody::certificateIsSet() const
{
    return certificateIsSet_;
}

void HttpInfoResponseBody::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string HttpInfoResponseBody::getPrivateKey() const
{
    return privateKey_;
}

void HttpInfoResponseBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HttpInfoResponseBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HttpInfoResponseBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t HttpInfoResponseBody::getCertificateType() const
{
    return certificateType_;
}

void HttpInfoResponseBody::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool HttpInfoResponseBody::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void HttpInfoResponseBody::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t HttpInfoResponseBody::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void HttpInfoResponseBody::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool HttpInfoResponseBody::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void HttpInfoResponseBody::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

ForceRedirect HttpInfoResponseBody::getForceRedirectConfig() const
{
    return forceRedirectConfig_;
}

void HttpInfoResponseBody::setForceRedirectConfig(const ForceRedirect& value)
{
    forceRedirectConfig_ = value;
    forceRedirectConfigIsSet_ = true;
}

bool HttpInfoResponseBody::forceRedirectConfigIsSet() const
{
    return forceRedirectConfigIsSet_;
}

void HttpInfoResponseBody::unsetforceRedirectConfig()
{
    forceRedirectConfigIsSet_ = false;
}

int32_t HttpInfoResponseBody::getHttp2() const
{
    return http2_;
}

void HttpInfoResponseBody::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool HttpInfoResponseBody::http2IsSet() const
{
    return http2IsSet_;
}

void HttpInfoResponseBody::unsethttp2()
{
    http2IsSet_ = false;
}

int64_t HttpInfoResponseBody::getExpirationTime() const
{
    return expirationTime_;
}

void HttpInfoResponseBody::setExpirationTime(int64_t value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool HttpInfoResponseBody::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void HttpInfoResponseBody::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

}
}
}
}
}


