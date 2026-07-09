

#include "huaweicloud/dbss/v1/model/ShowDomainAllResourceCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowDomainAllResourceCountRequest::ShowDomainAllResourceCountRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

ShowDomainAllResourceCountRequest::~ShowDomainAllResourceCountRequest() = default;

void ShowDomainAllResourceCountRequest::validate()
{
}

web::json::value ShowDomainAllResourceCountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool ShowDomainAllResourceCountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string ShowDomainAllResourceCountRequest::getDomainId() const
{
    return domainId_;
}

void ShowDomainAllResourceCountRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainAllResourceCountRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainAllResourceCountRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowDomainAllResourceCountRequest::getResourceType() const
{
    return resourceType_;
}

void ShowDomainAllResourceCountRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowDomainAllResourceCountRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowDomainAllResourceCountRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowDomainAllResourceCountRequest::getRegionId() const
{
    return regionId_;
}

void ShowDomainAllResourceCountRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ShowDomainAllResourceCountRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ShowDomainAllResourceCountRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


