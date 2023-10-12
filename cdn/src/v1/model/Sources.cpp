

#include "huaweicloud/cdn/v1/model/Sources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Sources::Sources()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    originType_ = "";
    originTypeIsSet_ = false;
    ipOrDomain_ = "";
    ipOrDomainIsSet_ = false;
    activeStandby_ = 0;
    activeStandbyIsSet_ = false;
    enableObsWebHosting_ = 0;
    enableObsWebHostingIsSet_ = false;
}

Sources::~Sources() = default;

void Sources::validate()
{
}

web::json::value Sources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(originTypeIsSet_) {
        val[utility::conversions::to_string_t("origin_type")] = ModelBase::toJson(originType_);
    }
    if(ipOrDomainIsSet_) {
        val[utility::conversions::to_string_t("ip_or_domain")] = ModelBase::toJson(ipOrDomain_);
    }
    if(activeStandbyIsSet_) {
        val[utility::conversions::to_string_t("active_standby")] = ModelBase::toJson(activeStandby_);
    }
    if(enableObsWebHostingIsSet_) {
        val[utility::conversions::to_string_t("enable_obs_web_hosting")] = ModelBase::toJson(enableObsWebHosting_);
    }

    return val;
}
bool Sources::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("origin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginType(refVal);
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


std::string Sources::getDomainId() const
{
    return domainId_;
}

void Sources::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool Sources::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void Sources::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string Sources::getOriginType() const
{
    return originType_;
}

void Sources::setOriginType(const std::string& value)
{
    originType_ = value;
    originTypeIsSet_ = true;
}

bool Sources::originTypeIsSet() const
{
    return originTypeIsSet_;
}

void Sources::unsetoriginType()
{
    originTypeIsSet_ = false;
}

std::string Sources::getIpOrDomain() const
{
    return ipOrDomain_;
}

void Sources::setIpOrDomain(const std::string& value)
{
    ipOrDomain_ = value;
    ipOrDomainIsSet_ = true;
}

bool Sources::ipOrDomainIsSet() const
{
    return ipOrDomainIsSet_;
}

void Sources::unsetipOrDomain()
{
    ipOrDomainIsSet_ = false;
}

int32_t Sources::getActiveStandby() const
{
    return activeStandby_;
}

void Sources::setActiveStandby(int32_t value)
{
    activeStandby_ = value;
    activeStandbyIsSet_ = true;
}

bool Sources::activeStandbyIsSet() const
{
    return activeStandbyIsSet_;
}

void Sources::unsetactiveStandby()
{
    activeStandbyIsSet_ = false;
}

int32_t Sources::getEnableObsWebHosting() const
{
    return enableObsWebHosting_;
}

void Sources::setEnableObsWebHosting(int32_t value)
{
    enableObsWebHosting_ = value;
    enableObsWebHostingIsSet_ = true;
}

bool Sources::enableObsWebHostingIsSet() const
{
    return enableObsWebHostingIsSet_;
}

void Sources::unsetenableObsWebHosting()
{
    enableObsWebHostingIsSet_ = false;
}

}
}
}
}
}


