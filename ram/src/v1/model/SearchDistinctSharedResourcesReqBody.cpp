

#include "huaweicloud/ram/v1/model/SearchDistinctSharedResourcesReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchDistinctSharedResourcesReqBody::SearchDistinctSharedResourcesReqBody()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    resourceIdsIsSet_ = false;
    principal_ = "";
    principalIsSet_ = false;
    resourceRegion_ = "";
    resourceRegionIsSet_ = false;
    resourceUrnsIsSet_ = false;
    resourceOwner_ = "";
    resourceOwnerIsSet_ = false;
}

SearchDistinctSharedResourcesReqBody::~SearchDistinctSharedResourcesReqBody() = default;

void SearchDistinctSharedResourcesReqBody::validate()
{
}

web::json::value SearchDistinctSharedResourcesReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }
    if(principalIsSet_) {
        val[utility::conversions::to_string_t("principal")] = ModelBase::toJson(principal_);
    }
    if(resourceRegionIsSet_) {
        val[utility::conversions::to_string_t("resource_region")] = ModelBase::toJson(resourceRegion_);
    }
    if(resourceUrnsIsSet_) {
        val[utility::conversions::to_string_t("resource_urns")] = ModelBase::toJson(resourceUrns_);
    }
    if(resourceOwnerIsSet_) {
        val[utility::conversions::to_string_t("resource_owner")] = ModelBase::toJson(resourceOwner_);
    }

    return val;
}
bool SearchDistinctSharedResourcesReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRegion(refVal);
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
    return ok;
}


int32_t SearchDistinctSharedResourcesReqBody::getLimit() const
{
    return limit_;
}

void SearchDistinctSharedResourcesReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchDistinctSharedResourcesReqBody::getMarker() const
{
    return marker_;
}

void SearchDistinctSharedResourcesReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<std::string>& SearchDistinctSharedResourcesReqBody::getResourceIds()
{
    return resourceIds_;
}

void SearchDistinctSharedResourcesReqBody::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

std::string SearchDistinctSharedResourcesReqBody::getPrincipal() const
{
    return principal_;
}

void SearchDistinctSharedResourcesReqBody::setPrincipal(const std::string& value)
{
    principal_ = value;
    principalIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::principalIsSet() const
{
    return principalIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetprincipal()
{
    principalIsSet_ = false;
}

std::string SearchDistinctSharedResourcesReqBody::getResourceRegion() const
{
    return resourceRegion_;
}

void SearchDistinctSharedResourcesReqBody::setResourceRegion(const std::string& value)
{
    resourceRegion_ = value;
    resourceRegionIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::resourceRegionIsSet() const
{
    return resourceRegionIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetresourceRegion()
{
    resourceRegionIsSet_ = false;
}

std::vector<std::string>& SearchDistinctSharedResourcesReqBody::getResourceUrns()
{
    return resourceUrns_;
}

void SearchDistinctSharedResourcesReqBody::setResourceUrns(const std::vector<std::string>& value)
{
    resourceUrns_ = value;
    resourceUrnsIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::resourceUrnsIsSet() const
{
    return resourceUrnsIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetresourceUrns()
{
    resourceUrnsIsSet_ = false;
}

std::string SearchDistinctSharedResourcesReqBody::getResourceOwner() const
{
    return resourceOwner_;
}

void SearchDistinctSharedResourcesReqBody::setResourceOwner(const std::string& value)
{
    resourceOwner_ = value;
    resourceOwnerIsSet_ = true;
}

bool SearchDistinctSharedResourcesReqBody::resourceOwnerIsSet() const
{
    return resourceOwnerIsSet_;
}

void SearchDistinctSharedResourcesReqBody::unsetresourceOwner()
{
    resourceOwnerIsSet_ = false;
}

}
}
}
}
}


