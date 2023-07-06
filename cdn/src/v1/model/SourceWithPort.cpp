

#include "huaweicloud/cdn/v1/model/SourceWithPort.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




SourceWithPort::SourceWithPort()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    ipOrDomain_ = "";
    ipOrDomainIsSet_ = false;
    originType_ = "";
    originTypeIsSet_ = false;
    activeStandby_ = 0;
    activeStandbyIsSet_ = false;
    enableObsWebHosting_ = 0;
    enableObsWebHostingIsSet_ = false;
    httpPort_ = 0;
    httpPortIsSet_ = false;
    httpsPort_ = 0;
    httpsPortIsSet_ = false;
}

SourceWithPort::~SourceWithPort() = default;

void SourceWithPort::validate()
{
}

web::json::value SourceWithPort::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(ipOrDomainIsSet_) {
        val[utility::conversions::to_string_t("ip_or_domain")] = ModelBase::toJson(ipOrDomain_);
    }
    if(originTypeIsSet_) {
        val[utility::conversions::to_string_t("origin_type")] = ModelBase::toJson(originType_);
    }
    if(activeStandbyIsSet_) {
        val[utility::conversions::to_string_t("active_standby")] = ModelBase::toJson(activeStandby_);
    }
    if(enableObsWebHostingIsSet_) {
        val[utility::conversions::to_string_t("enable_obs_web_hosting")] = ModelBase::toJson(enableObsWebHosting_);
    }
    if(httpPortIsSet_) {
        val[utility::conversions::to_string_t("http_port")] = ModelBase::toJson(httpPort_);
    }
    if(httpsPortIsSet_) {
        val[utility::conversions::to_string_t("https_port")] = ModelBase::toJson(httpsPort_);
    }

    return val;
}

bool SourceWithPort::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_or_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_or_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpOrDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_standby"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_standby"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveStandby(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_obs_web_hosting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_obs_web_hosting"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableObsWebHosting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsPort(refVal);
        }
    }
    return ok;
}

std::string SourceWithPort::getDomainId() const
{
    return domainId_;
}

void SourceWithPort::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SourceWithPort::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SourceWithPort::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string SourceWithPort::getIpOrDomain() const
{
    return ipOrDomain_;
}

void SourceWithPort::setIpOrDomain(const std::string& value)
{
    ipOrDomain_ = value;
    ipOrDomainIsSet_ = true;
}

bool SourceWithPort::ipOrDomainIsSet() const
{
    return ipOrDomainIsSet_;
}

void SourceWithPort::unsetipOrDomain()
{
    ipOrDomainIsSet_ = false;
}

std::string SourceWithPort::getOriginType() const
{
    return originType_;
}

void SourceWithPort::setOriginType(const std::string& value)
{
    originType_ = value;
    originTypeIsSet_ = true;
}

bool SourceWithPort::originTypeIsSet() const
{
    return originTypeIsSet_;
}

void SourceWithPort::unsetoriginType()
{
    originTypeIsSet_ = false;
}

int32_t SourceWithPort::getActiveStandby() const
{
    return activeStandby_;
}

void SourceWithPort::setActiveStandby(int32_t value)
{
    activeStandby_ = value;
    activeStandbyIsSet_ = true;
}

bool SourceWithPort::activeStandbyIsSet() const
{
    return activeStandbyIsSet_;
}

void SourceWithPort::unsetactiveStandby()
{
    activeStandbyIsSet_ = false;
}

int32_t SourceWithPort::getEnableObsWebHosting() const
{
    return enableObsWebHosting_;
}

void SourceWithPort::setEnableObsWebHosting(int32_t value)
{
    enableObsWebHosting_ = value;
    enableObsWebHostingIsSet_ = true;
}

bool SourceWithPort::enableObsWebHostingIsSet() const
{
    return enableObsWebHostingIsSet_;
}

void SourceWithPort::unsetenableObsWebHosting()
{
    enableObsWebHostingIsSet_ = false;
}

int32_t SourceWithPort::getHttpPort() const
{
    return httpPort_;
}

void SourceWithPort::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool SourceWithPort::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void SourceWithPort::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t SourceWithPort::getHttpsPort() const
{
    return httpsPort_;
}

void SourceWithPort::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool SourceWithPort::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void SourceWithPort::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

}
}
}
}
}


