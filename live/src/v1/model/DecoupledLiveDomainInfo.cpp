

#include "huaweicloud/live/v1/model/DecoupledLiveDomainInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DecoupledLiveDomainInfo::DecoupledLiveDomainInfo()
{
    domain_ = "";
    domainIsSet_ = false;
    domainType_ = "";
    domainTypeIsSet_ = false;
    vendor_ = "";
    vendorIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    domainCname_ = "";
    domainCnameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    relatedDomain_ = "";
    relatedDomainIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    statusDescribe_ = "";
    statusDescribeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    isIpv6_ = false;
    isIpv6IsSet_ = false;
}

DecoupledLiveDomainInfo::~DecoupledLiveDomainInfo() = default;

void DecoupledLiveDomainInfo::validate()
{
}

web::json::value DecoupledLiveDomainInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(domainTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_type")] = ModelBase::toJson(domainType_);
    }
    if(vendorIsSet_) {
        val[utility::conversions::to_string_t("vendor")] = ModelBase::toJson(vendor_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(domainCnameIsSet_) {
        val[utility::conversions::to_string_t("domain_cname")] = ModelBase::toJson(domainCname_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(relatedDomainIsSet_) {
        val[utility::conversions::to_string_t("related_domain")] = ModelBase::toJson(relatedDomain_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(statusDescribeIsSet_) {
        val[utility::conversions::to_string_t("status_describe")] = ModelBase::toJson(statusDescribe_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(isIpv6IsSet_) {
        val[utility::conversions::to_string_t("is_ipv6")] = ModelBase::toJson(isIpv6_);
    }

    return val;
}
bool DecoupledLiveDomainInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vendor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vendor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVendor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_cname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_cname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainCname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_describe"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_describe"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDescribe(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ipv6"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIpv6(refVal);
        }
    }
    return ok;
}


std::string DecoupledLiveDomainInfo::getDomain() const
{
    return domain_;
}

void DecoupledLiveDomainInfo::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DecoupledLiveDomainInfo::domainIsSet() const
{
    return domainIsSet_;
}

void DecoupledLiveDomainInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getDomainType() const
{
    return domainType_;
}

void DecoupledLiveDomainInfo::setDomainType(const std::string& value)
{
    domainType_ = value;
    domainTypeIsSet_ = true;
}

bool DecoupledLiveDomainInfo::domainTypeIsSet() const
{
    return domainTypeIsSet_;
}

void DecoupledLiveDomainInfo::unsetdomainType()
{
    domainTypeIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getVendor() const
{
    return vendor_;
}

void DecoupledLiveDomainInfo::setVendor(const std::string& value)
{
    vendor_ = value;
    vendorIsSet_ = true;
}

bool DecoupledLiveDomainInfo::vendorIsSet() const
{
    return vendorIsSet_;
}

void DecoupledLiveDomainInfo::unsetvendor()
{
    vendorIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getRegion() const
{
    return region_;
}

void DecoupledLiveDomainInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DecoupledLiveDomainInfo::regionIsSet() const
{
    return regionIsSet_;
}

void DecoupledLiveDomainInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getDomainCname() const
{
    return domainCname_;
}

void DecoupledLiveDomainInfo::setDomainCname(const std::string& value)
{
    domainCname_ = value;
    domainCnameIsSet_ = true;
}

bool DecoupledLiveDomainInfo::domainCnameIsSet() const
{
    return domainCnameIsSet_;
}

void DecoupledLiveDomainInfo::unsetdomainCname()
{
    domainCnameIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getStatus() const
{
    return status_;
}

void DecoupledLiveDomainInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DecoupledLiveDomainInfo::statusIsSet() const
{
    return statusIsSet_;
}

void DecoupledLiveDomainInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getRelatedDomain() const
{
    return relatedDomain_;
}

void DecoupledLiveDomainInfo::setRelatedDomain(const std::string& value)
{
    relatedDomain_ = value;
    relatedDomainIsSet_ = true;
}

bool DecoupledLiveDomainInfo::relatedDomainIsSet() const
{
    return relatedDomainIsSet_;
}

void DecoupledLiveDomainInfo::unsetrelatedDomain()
{
    relatedDomainIsSet_ = false;
}

utility::datetime DecoupledLiveDomainInfo::getCreateTime() const
{
    return createTime_;
}

void DecoupledLiveDomainInfo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DecoupledLiveDomainInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DecoupledLiveDomainInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getStatusDescribe() const
{
    return statusDescribe_;
}

void DecoupledLiveDomainInfo::setStatusDescribe(const std::string& value)
{
    statusDescribe_ = value;
    statusDescribeIsSet_ = true;
}

bool DecoupledLiveDomainInfo::statusDescribeIsSet() const
{
    return statusDescribeIsSet_;
}

void DecoupledLiveDomainInfo::unsetstatusDescribe()
{
    statusDescribeIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getServiceArea() const
{
    return serviceArea_;
}

void DecoupledLiveDomainInfo::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool DecoupledLiveDomainInfo::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void DecoupledLiveDomainInfo::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string DecoupledLiveDomainInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DecoupledLiveDomainInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DecoupledLiveDomainInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DecoupledLiveDomainInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool DecoupledLiveDomainInfo::isIsIpv6() const
{
    return isIpv6_;
}

void DecoupledLiveDomainInfo::setIsIpv6(bool value)
{
    isIpv6_ = value;
    isIpv6IsSet_ = true;
}

bool DecoupledLiveDomainInfo::isIpv6IsSet() const
{
    return isIpv6IsSet_;
}

void DecoupledLiveDomainInfo::unsetisIpv6()
{
    isIpv6IsSet_ = false;
}

}
}
}
}
}


