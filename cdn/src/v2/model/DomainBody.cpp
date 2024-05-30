

#include "huaweicloud/cdn/v2/model/DomainBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DomainBody::DomainBody()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    sourcesIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

DomainBody::~DomainBody() = default;

void DomainBody::validate()
{
}

web::json::value DomainBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool DomainBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SourcesRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
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


std::string DomainBody::getDomainName() const
{
    return domainName_;
}

void DomainBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DomainBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DomainBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DomainBody::getBusinessType() const
{
    return businessType_;
}

void DomainBody::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool DomainBody::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void DomainBody::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::vector<SourcesRequestBody>& DomainBody::getSources()
{
    return sources_;
}

void DomainBody::setSources(const std::vector<SourcesRequestBody>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool DomainBody::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void DomainBody::unsetsources()
{
    sourcesIsSet_ = false;
}

std::string DomainBody::getServiceArea() const
{
    return serviceArea_;
}

void DomainBody::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool DomainBody::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void DomainBody::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string DomainBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DomainBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DomainBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DomainBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


