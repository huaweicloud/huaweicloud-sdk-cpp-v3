

#include "huaweicloud/cdn/v2/model/SourcesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




SourcesRequestBody::SourcesRequestBody()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    ipOrDomain_ = "";
    ipOrDomainIsSet_ = false;
    originType_ = "";
    originTypeIsSet_ = false;
    obsBucketType_ = "";
    obsBucketTypeIsSet_ = false;
    activeStandby_ = 0;
    activeStandbyIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    enableObsWebHosting_ = 0;
    enableObsWebHostingIsSet_ = false;
    httpPort_ = 0;
    httpPortIsSet_ = false;
    httpsPort_ = 0;
    httpsPortIsSet_ = false;
}

SourcesRequestBody::~SourcesRequestBody() = default;

void SourcesRequestBody::validate()
{
}

web::json::value SourcesRequestBody::toJson() const
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
    if(obsBucketTypeIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_type")] = ModelBase::toJson(obsBucketType_);
    }
    if(activeStandbyIsSet_) {
        val[utility::conversions::to_string_t("active_standby")] = ModelBase::toJson(activeStandby_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
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
bool SourcesRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
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


std::string SourcesRequestBody::getDomainId() const
{
    return domainId_;
}

void SourcesRequestBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SourcesRequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SourcesRequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string SourcesRequestBody::getIpOrDomain() const
{
    return ipOrDomain_;
}

void SourcesRequestBody::setIpOrDomain(const std::string& value)
{
    ipOrDomain_ = value;
    ipOrDomainIsSet_ = true;
}

bool SourcesRequestBody::ipOrDomainIsSet() const
{
    return ipOrDomainIsSet_;
}

void SourcesRequestBody::unsetipOrDomain()
{
    ipOrDomainIsSet_ = false;
}

std::string SourcesRequestBody::getOriginType() const
{
    return originType_;
}

void SourcesRequestBody::setOriginType(const std::string& value)
{
    originType_ = value;
    originTypeIsSet_ = true;
}

bool SourcesRequestBody::originTypeIsSet() const
{
    return originTypeIsSet_;
}

void SourcesRequestBody::unsetoriginType()
{
    originTypeIsSet_ = false;
}

std::string SourcesRequestBody::getObsBucketType() const
{
    return obsBucketType_;
}

void SourcesRequestBody::setObsBucketType(const std::string& value)
{
    obsBucketType_ = value;
    obsBucketTypeIsSet_ = true;
}

bool SourcesRequestBody::obsBucketTypeIsSet() const
{
    return obsBucketTypeIsSet_;
}

void SourcesRequestBody::unsetobsBucketType()
{
    obsBucketTypeIsSet_ = false;
}

int32_t SourcesRequestBody::getActiveStandby() const
{
    return activeStandby_;
}

void SourcesRequestBody::setActiveStandby(int32_t value)
{
    activeStandby_ = value;
    activeStandbyIsSet_ = true;
}

bool SourcesRequestBody::activeStandbyIsSet() const
{
    return activeStandbyIsSet_;
}

void SourcesRequestBody::unsetactiveStandby()
{
    activeStandbyIsSet_ = false;
}

int32_t SourcesRequestBody::getPriority() const
{
    return priority_;
}

void SourcesRequestBody::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool SourcesRequestBody::priorityIsSet() const
{
    return priorityIsSet_;
}

void SourcesRequestBody::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t SourcesRequestBody::getWeight() const
{
    return weight_;
}

void SourcesRequestBody::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool SourcesRequestBody::weightIsSet() const
{
    return weightIsSet_;
}

void SourcesRequestBody::unsetweight()
{
    weightIsSet_ = false;
}

std::string SourcesRequestBody::getHostName() const
{
    return hostName_;
}

void SourcesRequestBody::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool SourcesRequestBody::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void SourcesRequestBody::unsethostName()
{
    hostNameIsSet_ = false;
}

int32_t SourcesRequestBody::getEnableObsWebHosting() const
{
    return enableObsWebHosting_;
}

void SourcesRequestBody::setEnableObsWebHosting(int32_t value)
{
    enableObsWebHosting_ = value;
    enableObsWebHostingIsSet_ = true;
}

bool SourcesRequestBody::enableObsWebHostingIsSet() const
{
    return enableObsWebHostingIsSet_;
}

void SourcesRequestBody::unsetenableObsWebHosting()
{
    enableObsWebHostingIsSet_ = false;
}

int32_t SourcesRequestBody::getHttpPort() const
{
    return httpPort_;
}

void SourcesRequestBody::setHttpPort(int32_t value)
{
    httpPort_ = value;
    httpPortIsSet_ = true;
}

bool SourcesRequestBody::httpPortIsSet() const
{
    return httpPortIsSet_;
}

void SourcesRequestBody::unsethttpPort()
{
    httpPortIsSet_ = false;
}

int32_t SourcesRequestBody::getHttpsPort() const
{
    return httpsPort_;
}

void SourcesRequestBody::setHttpsPort(int32_t value)
{
    httpsPort_ = value;
    httpsPortIsSet_ = true;
}

bool SourcesRequestBody::httpsPortIsSet() const
{
    return httpsPortIsSet_;
}

void SourcesRequestBody::unsethttpsPort()
{
    httpsPortIsSet_ = false;
}

}
}
}
}
}


