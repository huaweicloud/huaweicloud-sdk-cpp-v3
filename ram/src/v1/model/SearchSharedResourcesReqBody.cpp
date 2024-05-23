

#include "huaweicloud/ram/v1/model/SearchSharedResourcesReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchSharedResourcesReqBody::SearchSharedResourcesReqBody()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    principal_ = "";
    principalIsSet_ = false;
    resourceIdsIsSet_ = false;
    resourceUrnsIsSet_ = false;
    resourceOwner_ = "";
    resourceOwnerIsSet_ = false;
    resourceShareIdsIsSet_ = false;
    resourceRegion_ = "";
    resourceRegionIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

SearchSharedResourcesReqBody::~SearchSharedResourcesReqBody() = default;

void SearchSharedResourcesReqBody::validate()
{
}

web::json::value SearchSharedResourcesReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(principalIsSet_) {
        val[utility::conversions::to_string_t("principal")] = ModelBase::toJson(principal_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }
    if(resourceUrnsIsSet_) {
        val[utility::conversions::to_string_t("resource_urns")] = ModelBase::toJson(resourceUrns_);
    }
    if(resourceOwnerIsSet_) {
        val[utility::conversions::to_string_t("resource_owner")] = ModelBase::toJson(resourceOwner_);
    }
    if(resourceShareIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_ids")] = ModelBase::toJson(resourceShareIds_);
    }
    if(resourceRegionIsSet_) {
        val[utility::conversions::to_string_t("resource_region")] = ModelBase::toJson(resourceRegion_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool SearchSharedResourcesReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_urns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_urns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUrns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_share_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRegion(refVal);
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
    return ok;
}


int32_t SearchSharedResourcesReqBody::getLimit() const
{
    return limit_;
}

void SearchSharedResourcesReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchSharedResourcesReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchSharedResourcesReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchSharedResourcesReqBody::getMarker() const
{
    return marker_;
}

void SearchSharedResourcesReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchSharedResourcesReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchSharedResourcesReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::string SearchSharedResourcesReqBody::getPrincipal() const
{
    return principal_;
}

void SearchSharedResourcesReqBody::setPrincipal(const std::string& value)
{
    principal_ = value;
    principalIsSet_ = true;
}

bool SearchSharedResourcesReqBody::principalIsSet() const
{
    return principalIsSet_;
}

void SearchSharedResourcesReqBody::unsetprincipal()
{
    principalIsSet_ = false;
}

std::vector<std::string>& SearchSharedResourcesReqBody::getResourceIds()
{
    return resourceIds_;
}

void SearchSharedResourcesReqBody::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool SearchSharedResourcesReqBody::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void SearchSharedResourcesReqBody::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

std::vector<std::string>& SearchSharedResourcesReqBody::getResourceUrns()
{
    return resourceUrns_;
}

void SearchSharedResourcesReqBody::setResourceUrns(const std::vector<std::string>& value)
{
    resourceUrns_ = value;
    resourceUrnsIsSet_ = true;
}

bool SearchSharedResourcesReqBody::resourceUrnsIsSet() const
{
    return resourceUrnsIsSet_;
}

void SearchSharedResourcesReqBody::unsetresourceUrns()
{
    resourceUrnsIsSet_ = false;
}

std::string SearchSharedResourcesReqBody::getResourceOwner() const
{
    return resourceOwner_;
}

void SearchSharedResourcesReqBody::setResourceOwner(const std::string& value)
{
    resourceOwner_ = value;
    resourceOwnerIsSet_ = true;
}

bool SearchSharedResourcesReqBody::resourceOwnerIsSet() const
{
    return resourceOwnerIsSet_;
}

void SearchSharedResourcesReqBody::unsetresourceOwner()
{
    resourceOwnerIsSet_ = false;
}

std::vector<std::string>& SearchSharedResourcesReqBody::getResourceShareIds()
{
    return resourceShareIds_;
}

void SearchSharedResourcesReqBody::setResourceShareIds(const std::vector<std::string>& value)
{
    resourceShareIds_ = value;
    resourceShareIdsIsSet_ = true;
}

bool SearchSharedResourcesReqBody::resourceShareIdsIsSet() const
{
    return resourceShareIdsIsSet_;
}

void SearchSharedResourcesReqBody::unsetresourceShareIds()
{
    resourceShareIdsIsSet_ = false;
}

std::string SearchSharedResourcesReqBody::getResourceRegion() const
{
    return resourceRegion_;
}

void SearchSharedResourcesReqBody::setResourceRegion(const std::string& value)
{
    resourceRegion_ = value;
    resourceRegionIsSet_ = true;
}

bool SearchSharedResourcesReqBody::resourceRegionIsSet() const
{
    return resourceRegionIsSet_;
}

void SearchSharedResourcesReqBody::unsetresourceRegion()
{
    resourceRegionIsSet_ = false;
}

std::string SearchSharedResourcesReqBody::getResourceType() const
{
    return resourceType_;
}

void SearchSharedResourcesReqBody::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool SearchSharedResourcesReqBody::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void SearchSharedResourcesReqBody::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


