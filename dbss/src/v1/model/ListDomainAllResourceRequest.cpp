

#include "huaweicloud/dbss/v1/model/ListDomainAllResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListDomainAllResourceRequest::ListDomainAllResourceRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListDomainAllResourceRequest::~ListDomainAllResourceRequest() = default;

void ListDomainAllResourceRequest::validate()
{
}

web::json::value ListDomainAllResourceRequest::toJson() const
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListDomainAllResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListDomainAllResourceRequest::getDomainId() const
{
    return domainId_;
}

void ListDomainAllResourceRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListDomainAllResourceRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListDomainAllResourceRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListDomainAllResourceRequest::getResourceType() const
{
    return resourceType_;
}

void ListDomainAllResourceRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListDomainAllResourceRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListDomainAllResourceRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListDomainAllResourceRequest::getRegionId() const
{
    return regionId_;
}

void ListDomainAllResourceRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListDomainAllResourceRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListDomainAllResourceRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t ListDomainAllResourceRequest::getLimit() const
{
    return limit_;
}

void ListDomainAllResourceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainAllResourceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainAllResourceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDomainAllResourceRequest::getMarker() const
{
    return marker_;
}

void ListDomainAllResourceRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDomainAllResourceRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDomainAllResourceRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


