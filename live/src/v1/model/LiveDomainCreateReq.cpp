

#include "huaweicloud/live/v1/model/LiveDomainCreateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LiveDomainCreateReq::LiveDomainCreateReq()
{
    domain_ = "";
    domainIsSet_ = false;
    domainType_ = "";
    domainTypeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

LiveDomainCreateReq::~LiveDomainCreateReq() = default;

void LiveDomainCreateReq::validate()
{
}

web::json::value LiveDomainCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(domainTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_type")] = ModelBase::toJson(domainType_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool LiveDomainCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}

std::string LiveDomainCreateReq::getDomain() const
{
    return domain_;
}

void LiveDomainCreateReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool LiveDomainCreateReq::domainIsSet() const
{
    return domainIsSet_;
}

void LiveDomainCreateReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string LiveDomainCreateReq::getDomainType() const
{
    return domainType_;
}

void LiveDomainCreateReq::setDomainType(const std::string& value)
{
    domainType_ = value;
    domainTypeIsSet_ = true;
}

bool LiveDomainCreateReq::domainTypeIsSet() const
{
    return domainTypeIsSet_;
}

void LiveDomainCreateReq::unsetdomainType()
{
    domainTypeIsSet_ = false;
}

std::string LiveDomainCreateReq::getRegion() const
{
    return region_;
}

void LiveDomainCreateReq::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool LiveDomainCreateReq::regionIsSet() const
{
    return regionIsSet_;
}

void LiveDomainCreateReq::unsetregion()
{
    regionIsSet_ = false;
}

std::string LiveDomainCreateReq::getServiceArea() const
{
    return serviceArea_;
}

void LiveDomainCreateReq::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool LiveDomainCreateReq::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void LiveDomainCreateReq::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string LiveDomainCreateReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void LiveDomainCreateReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool LiveDomainCreateReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void LiveDomainCreateReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


