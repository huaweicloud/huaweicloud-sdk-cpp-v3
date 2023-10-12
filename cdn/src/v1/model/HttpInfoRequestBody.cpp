

#include "huaweicloud/cdn/v1/model/HttpInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




HttpInfoRequestBody::HttpInfoRequestBody()
{
    certName_ = "";
    certNameIsSet_ = false;
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    http2_ = 0;
    http2IsSet_ = false;
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    forceRedirectHttps_ = 0;
    forceRedirectHttpsIsSet_ = false;
    forceRedirectConfigIsSet_ = false;
}

HttpInfoRequestBody::~HttpInfoRequestBody() = default;

void HttpInfoRequestBody::validate()
{
}

web::json::value HttpInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(httpsStatusIsSet_) {
        val[utility::conversions::to_string_t("https_status")] = ModelBase::toJson(httpsStatus_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("private_key")] = ModelBase::toJson(privateKey_);
    }
    if(http2IsSet_) {
        val[utility::conversions::to_string_t("http2")] = ModelBase::toJson(http2_);
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

    return val;
}
bool HttpInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("http2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http2"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp2(refVal);
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
    return ok;
}


std::string HttpInfoRequestBody::getCertName() const
{
    return certName_;
}

void HttpInfoRequestBody::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool HttpInfoRequestBody::certNameIsSet() const
{
    return certNameIsSet_;
}

void HttpInfoRequestBody::unsetcertName()
{
    certNameIsSet_ = false;
}

int32_t HttpInfoRequestBody::getHttpsStatus() const
{
    return httpsStatus_;
}

void HttpInfoRequestBody::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool HttpInfoRequestBody::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void HttpInfoRequestBody::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string HttpInfoRequestBody::getCertificate() const
{
    return certificate_;
}

void HttpInfoRequestBody::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool HttpInfoRequestBody::certificateIsSet() const
{
    return certificateIsSet_;
}

void HttpInfoRequestBody::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string HttpInfoRequestBody::getPrivateKey() const
{
    return privateKey_;
}

void HttpInfoRequestBody::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool HttpInfoRequestBody::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void HttpInfoRequestBody::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t HttpInfoRequestBody::getHttp2() const
{
    return http2_;
}

void HttpInfoRequestBody::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool HttpInfoRequestBody::http2IsSet() const
{
    return http2IsSet_;
}

void HttpInfoRequestBody::unsethttp2()
{
    http2IsSet_ = false;
}

int32_t HttpInfoRequestBody::getCertificateType() const
{
    return certificateType_;
}

void HttpInfoRequestBody::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool HttpInfoRequestBody::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void HttpInfoRequestBody::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t HttpInfoRequestBody::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void HttpInfoRequestBody::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool HttpInfoRequestBody::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void HttpInfoRequestBody::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

ForceRedirect HttpInfoRequestBody::getForceRedirectConfig() const
{
    return forceRedirectConfig_;
}

void HttpInfoRequestBody::setForceRedirectConfig(const ForceRedirect& value)
{
    forceRedirectConfig_ = value;
    forceRedirectConfigIsSet_ = true;
}

bool HttpInfoRequestBody::forceRedirectConfigIsSet() const
{
    return forceRedirectConfigIsSet_;
}

void HttpInfoRequestBody::unsetforceRedirectConfig()
{
    forceRedirectConfigIsSet_ = false;
}

}
}
}
}
}


