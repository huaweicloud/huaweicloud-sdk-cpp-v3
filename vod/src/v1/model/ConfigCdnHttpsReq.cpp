

#include "huaweicloud/vod/v1/model/ConfigCdnHttpsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfigCdnHttpsReq::ConfigCdnHttpsReq()
{
    source_ = "";
    sourceIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
    httpsStatus_ = 0;
    httpsStatusIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    forceRedirectHttps_ = 0;
    forceRedirectHttpsIsSet_ = false;
    http2_ = 0;
    http2IsSet_ = false;
}

ConfigCdnHttpsReq::~ConfigCdnHttpsReq() = default;

void ConfigCdnHttpsReq::validate()
{
}

web::json::value ConfigCdnHttpsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(certNameIsSet_) {
        val[utility::conversions::to_string_t("cert_name")] = ModelBase::toJson(certName_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
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
    if(forceRedirectHttpsIsSet_) {
        val[utility::conversions::to_string_t("force_redirect_https")] = ModelBase::toJson(forceRedirectHttps_);
    }
    if(http2IsSet_) {
        val[utility::conversions::to_string_t("http2")] = ModelBase::toJson(http2_);
    }

    return val;
}
bool ConfigCdnHttpsReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("force_redirect_https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_redirect_https"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRedirectHttps(refVal);
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


std::string ConfigCdnHttpsReq::getSource() const
{
    return source_;
}

void ConfigCdnHttpsReq::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ConfigCdnHttpsReq::sourceIsSet() const
{
    return sourceIsSet_;
}

void ConfigCdnHttpsReq::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ConfigCdnHttpsReq::getDomain() const
{
    return domain_;
}

void ConfigCdnHttpsReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ConfigCdnHttpsReq::domainIsSet() const
{
    return domainIsSet_;
}

void ConfigCdnHttpsReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ConfigCdnHttpsReq::getCertName() const
{
    return certName_;
}

void ConfigCdnHttpsReq::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool ConfigCdnHttpsReq::certNameIsSet() const
{
    return certNameIsSet_;
}

void ConfigCdnHttpsReq::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string ConfigCdnHttpsReq::getCertId() const
{
    return certId_;
}

void ConfigCdnHttpsReq::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool ConfigCdnHttpsReq::certIdIsSet() const
{
    return certIdIsSet_;
}

void ConfigCdnHttpsReq::unsetcertId()
{
    certIdIsSet_ = false;
}

int32_t ConfigCdnHttpsReq::getHttpsStatus() const
{
    return httpsStatus_;
}

void ConfigCdnHttpsReq::setHttpsStatus(int32_t value)
{
    httpsStatus_ = value;
    httpsStatusIsSet_ = true;
}

bool ConfigCdnHttpsReq::httpsStatusIsSet() const
{
    return httpsStatusIsSet_;
}

void ConfigCdnHttpsReq::unsethttpsStatus()
{
    httpsStatusIsSet_ = false;
}

std::string ConfigCdnHttpsReq::getCertificate() const
{
    return certificate_;
}

void ConfigCdnHttpsReq::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool ConfigCdnHttpsReq::certificateIsSet() const
{
    return certificateIsSet_;
}

void ConfigCdnHttpsReq::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string ConfigCdnHttpsReq::getPrivateKey() const
{
    return privateKey_;
}

void ConfigCdnHttpsReq::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool ConfigCdnHttpsReq::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void ConfigCdnHttpsReq::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t ConfigCdnHttpsReq::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void ConfigCdnHttpsReq::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool ConfigCdnHttpsReq::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void ConfigCdnHttpsReq::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

int32_t ConfigCdnHttpsReq::getHttp2() const
{
    return http2_;
}

void ConfigCdnHttpsReq::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool ConfigCdnHttpsReq::http2IsSet() const
{
    return http2IsSet_;
}

void ConfigCdnHttpsReq::unsethttp2()
{
    http2IsSet_ = false;
}

}
}
}
}
}


