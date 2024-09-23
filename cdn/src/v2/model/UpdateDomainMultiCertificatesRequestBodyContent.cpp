

#include "huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesRequestBodyContent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateDomainMultiCertificatesRequestBodyContent::UpdateDomainMultiCertificatesRequestBodyContent()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    httpsSwitch_ = 0;
    httpsSwitchIsSet_ = false;
    accessOriginWay_ = 0;
    accessOriginWayIsSet_ = false;
    forceRedirectHttps_ = 0;
    forceRedirectHttpsIsSet_ = false;
    forceRedirectConfigIsSet_ = false;
    http2_ = 0;
    http2IsSet_ = false;
    certName_ = "";
    certNameIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    scmCertificateId_ = "";
    scmCertificateIdIsSet_ = false;
}

UpdateDomainMultiCertificatesRequestBodyContent::~UpdateDomainMultiCertificatesRequestBodyContent() = default;

void UpdateDomainMultiCertificatesRequestBodyContent::validate()
{
}

web::json::value UpdateDomainMultiCertificatesRequestBodyContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(httpsSwitchIsSet_) {
        val[utility::conversions::to_string_t("https_switch")] = ModelBase::toJson(httpsSwitch_);
    }
    if(accessOriginWayIsSet_) {
        val[utility::conversions::to_string_t("access_origin_way")] = ModelBase::toJson(accessOriginWay_);
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
    if(scmCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("scm_certificate_id")] = ModelBase::toJson(scmCertificateId_);
    }

    return val;
}
bool UpdateDomainMultiCertificatesRequestBodyContent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_origin_way"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_origin_way"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessOriginWay(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scm_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmCertificateId(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainMultiCertificatesRequestBodyContent::getDomainName() const
{
    return domainName_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesRequestBodyContent::getHttpsSwitch() const
{
    return httpsSwitch_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setHttpsSwitch(int32_t value)
{
    httpsSwitch_ = value;
    httpsSwitchIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::httpsSwitchIsSet() const
{
    return httpsSwitchIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsethttpsSwitch()
{
    httpsSwitchIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesRequestBodyContent::getAccessOriginWay() const
{
    return accessOriginWay_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setAccessOriginWay(int32_t value)
{
    accessOriginWay_ = value;
    accessOriginWayIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::accessOriginWayIsSet() const
{
    return accessOriginWayIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetaccessOriginWay()
{
    accessOriginWayIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesRequestBodyContent::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

ForceRedirect UpdateDomainMultiCertificatesRequestBodyContent::getForceRedirectConfig() const
{
    return forceRedirectConfig_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setForceRedirectConfig(const ForceRedirect& value)
{
    forceRedirectConfig_ = value;
    forceRedirectConfigIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::forceRedirectConfigIsSet() const
{
    return forceRedirectConfigIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetforceRedirectConfig()
{
    forceRedirectConfigIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesRequestBodyContent::getHttp2() const
{
    return http2_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::http2IsSet() const
{
    return http2IsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsethttp2()
{
    http2IsSet_ = false;
}

std::string UpdateDomainMultiCertificatesRequestBodyContent::getCertName() const
{
    return certName_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::certNameIsSet() const
{
    return certNameIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesRequestBodyContent::getCertificate() const
{
    return certificate_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::certificateIsSet() const
{
    return certificateIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesRequestBodyContent::getPrivateKey() const
{
    return privateKey_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesRequestBodyContent::getCertificateType() const
{
    return certificateType_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesRequestBodyContent::getScmCertificateId() const
{
    return scmCertificateId_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::setScmCertificateId(const std::string& value)
{
    scmCertificateId_ = value;
    scmCertificateIdIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequestBodyContent::scmCertificateIdIsSet() const
{
    return scmCertificateIdIsSet_;
}

void UpdateDomainMultiCertificatesRequestBodyContent::unsetscmCertificateId()
{
    scmCertificateIdIsSet_ = false;
}

}
}
}
}
}


