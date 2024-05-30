

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
    enableObsWebHosting_ = 0;
    enableObsWebHostingIsSet_ = false;
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
    if(enableObsWebHostingIsSet_) {
        val[utility::conversions::to_string_t("enable_obs_web_hosting")] = ModelBase::toJson(enableObsWebHosting_);
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
    if(val.has_field(utility::conversions::to_string_t("enable_obs_web_hosting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_obs_web_hosting"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableObsWebHosting(refVal);
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

}
}
}
}
}


