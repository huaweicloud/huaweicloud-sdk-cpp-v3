

#include "huaweicloud/cdn/v1/model/DomainOriginHost.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




DomainOriginHost::DomainOriginHost()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    originHostType_ = "";
    originHostTypeIsSet_ = false;
    customizeDomain_ = "";
    customizeDomainIsSet_ = false;
}

DomainOriginHost::~DomainOriginHost() = default;

void DomainOriginHost::validate()
{
}

web::json::value DomainOriginHost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(originHostTypeIsSet_) {
        val[utility::conversions::to_string_t("origin_host_type")] = ModelBase::toJson(originHostType_);
    }
    if(customizeDomainIsSet_) {
        val[utility::conversions::to_string_t("customize_domain")] = ModelBase::toJson(customizeDomain_);
    }

    return val;
}
bool DomainOriginHost::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("origin_host_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_host_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginHostType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customize_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customize_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomizeDomain(refVal);
        }
    }
    return ok;
}


std::string DomainOriginHost::getDomainId() const
{
    return domainId_;
}

void DomainOriginHost::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DomainOriginHost::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DomainOriginHost::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DomainOriginHost::getOriginHostType() const
{
    return originHostType_;
}

void DomainOriginHost::setOriginHostType(const std::string& value)
{
    originHostType_ = value;
    originHostTypeIsSet_ = true;
}

bool DomainOriginHost::originHostTypeIsSet() const
{
    return originHostTypeIsSet_;
}

void DomainOriginHost::unsetoriginHostType()
{
    originHostTypeIsSet_ = false;
}

std::string DomainOriginHost::getCustomizeDomain() const
{
    return customizeDomain_;
}

void DomainOriginHost::setCustomizeDomain(const std::string& value)
{
    customizeDomain_ = value;
    customizeDomainIsSet_ = true;
}

bool DomainOriginHost::customizeDomainIsSet() const
{
    return customizeDomainIsSet_;
}

void DomainOriginHost::unsetcustomizeDomain()
{
    customizeDomainIsSet_ = false;
}

}
}
}
}
}


