

#include "huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesResponseBodyContent.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainMultiCertificatesResponseBodyContent::UpdateDomainMultiCertificatesResponseBodyContent()
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
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    expirationTime_ = 0L;
    expirationTimeIsSet_ = false;
}

UpdateDomainMultiCertificatesResponseBodyContent::~UpdateDomainMultiCertificatesResponseBodyContent() = default;

void UpdateDomainMultiCertificatesResponseBodyContent::validate()
{
}

web::json::value UpdateDomainMultiCertificatesResponseBodyContent::toJson() const
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
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }

    return val;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::fromJson(const web::json::value& val)
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
    return ok;
}

std::string UpdateDomainMultiCertificatesResponseBodyContent::getDomainName() const
{
    return domainName_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesResponseBodyContent::getHttpsSwitch() const
{
    return httpsSwitch_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setHttpsSwitch(int32_t value)
{
    httpsSwitch_ = value;
    httpsSwitchIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::httpsSwitchIsSet() const
{
    return httpsSwitchIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsethttpsSwitch()
{
    httpsSwitchIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesResponseBodyContent::getAccessOriginWay() const
{
    return accessOriginWay_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setAccessOriginWay(int32_t value)
{
    accessOriginWay_ = value;
    accessOriginWayIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::accessOriginWayIsSet() const
{
    return accessOriginWayIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetaccessOriginWay()
{
    accessOriginWayIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesResponseBodyContent::getForceRedirectHttps() const
{
    return forceRedirectHttps_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setForceRedirectHttps(int32_t value)
{
    forceRedirectHttps_ = value;
    forceRedirectHttpsIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::forceRedirectHttpsIsSet() const
{
    return forceRedirectHttpsIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetforceRedirectHttps()
{
    forceRedirectHttpsIsSet_ = false;
}

ForceRedirect UpdateDomainMultiCertificatesResponseBodyContent::getForceRedirectConfig() const
{
    return forceRedirectConfig_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setForceRedirectConfig(const ForceRedirect& value)
{
    forceRedirectConfig_ = value;
    forceRedirectConfigIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::forceRedirectConfigIsSet() const
{
    return forceRedirectConfigIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetforceRedirectConfig()
{
    forceRedirectConfigIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesResponseBodyContent::getHttp2() const
{
    return http2_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setHttp2(int32_t value)
{
    http2_ = value;
    http2IsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::http2IsSet() const
{
    return http2IsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsethttp2()
{
    http2IsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponseBodyContent::getCertName() const
{
    return certName_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setCertName(const std::string& value)
{
    certName_ = value;
    certNameIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::certNameIsSet() const
{
    return certNameIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetcertName()
{
    certNameIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponseBodyContent::getCertificate() const
{
    return certificate_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::certificateIsSet() const
{
    return certificateIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetcertificate()
{
    certificateIsSet_ = false;
}

int32_t UpdateDomainMultiCertificatesResponseBodyContent::getCertificateType() const
{
    return certificateType_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int64_t UpdateDomainMultiCertificatesResponseBodyContent::getExpirationTime() const
{
    return expirationTime_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::setExpirationTime(int64_t value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBodyContent::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void UpdateDomainMultiCertificatesResponseBodyContent::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

}
}
}
}
}


