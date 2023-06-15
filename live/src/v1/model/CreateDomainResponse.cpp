

#include "huaweicloud/live/v1/model/CreateDomainResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateDomainResponse::CreateDomainResponse()
{
    domain_ = "";
    domainIsSet_ = false;
    domainType_ = "";
    domainTypeIsSet_ = false;
    domainCname_ = "";
    domainCnameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    statusDescribe_ = "";
    statusDescribeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreateDomainResponse::~CreateDomainResponse() = default;

void CreateDomainResponse::validate()
{
}

web::json::value CreateDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(domainTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_type")] = ModelBase::toJson(domainType_);
    }
    if(domainCnameIsSet_) {
        val[utility::conversions::to_string_t("domain_cname")] = ModelBase::toJson(domainCname_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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

    return val;
}

bool CreateDomainResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_cname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_cname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainCname(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string CreateDomainResponse::getDomain() const
{
    return domain_;
}

void CreateDomainResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateDomainResponse::domainIsSet() const
{
    return domainIsSet_;
}

void CreateDomainResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateDomainResponse::getDomainType() const
{
    return domainType_;
}

void CreateDomainResponse::setDomainType(const std::string& value)
{
    domainType_ = value;
    domainTypeIsSet_ = true;
}

bool CreateDomainResponse::domainTypeIsSet() const
{
    return domainTypeIsSet_;
}

void CreateDomainResponse::unsetdomainType()
{
    domainTypeIsSet_ = false;
}

std::string CreateDomainResponse::getDomainCname() const
{
    return domainCname_;
}

void CreateDomainResponse::setDomainCname(const std::string& value)
{
    domainCname_ = value;
    domainCnameIsSet_ = true;
}

bool CreateDomainResponse::domainCnameIsSet() const
{
    return domainCnameIsSet_;
}

void CreateDomainResponse::unsetdomainCname()
{
    domainCnameIsSet_ = false;
}

std::string CreateDomainResponse::getRegion() const
{
    return region_;
}

void CreateDomainResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateDomainResponse::regionIsSet() const
{
    return regionIsSet_;
}

void CreateDomainResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateDomainResponse::getStatus() const
{
    return status_;
}

void CreateDomainResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateDomainResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateDomainResponse::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime CreateDomainResponse::getCreateTime() const
{
    return createTime_;
}

void CreateDomainResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDomainResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDomainResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateDomainResponse::getStatusDescribe() const
{
    return statusDescribe_;
}

void CreateDomainResponse::setStatusDescribe(const std::string& value)
{
    statusDescribe_ = value;
    statusDescribeIsSet_ = true;
}

bool CreateDomainResponse::statusDescribeIsSet() const
{
    return statusDescribeIsSet_;
}

void CreateDomainResponse::unsetstatusDescribe()
{
    statusDescribeIsSet_ = false;
}

std::string CreateDomainResponse::getServiceArea() const
{
    return serviceArea_;
}

void CreateDomainResponse::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool CreateDomainResponse::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void CreateDomainResponse::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string CreateDomainResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateDomainResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateDomainResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateDomainResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


