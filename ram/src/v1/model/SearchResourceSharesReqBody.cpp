

#include "huaweicloud/ram/v1/model/SearchResourceSharesReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceSharesReqBody::SearchResourceSharesReqBody()
{
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    permissionId_ = "";
    permissionIdIsSet_ = false;
    resourceOwner_ = "";
    resourceOwnerIsSet_ = false;
    resourceShareIdsIsSet_ = false;
    resourceShareStatus_ = "";
    resourceShareStatusIsSet_ = false;
    tagFiltersIsSet_ = false;
}

SearchResourceSharesReqBody::~SearchResourceSharesReqBody() = default;

void SearchResourceSharesReqBody::validate()
{
}

web::json::value SearchResourceSharesReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }
    if(resourceOwnerIsSet_) {
        val[utility::conversions::to_string_t("resource_owner")] = ModelBase::toJson(resourceOwner_);
    }
    if(resourceShareIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_ids")] = ModelBase::toJson(resourceShareIds_);
    }
    if(resourceShareStatusIsSet_) {
        val[utility::conversions::to_string_t("resource_share_status")] = ModelBase::toJson(resourceShareStatus_);
    }
    if(tagFiltersIsSet_) {
        val[utility::conversions::to_string_t("tag_filters")] = ModelBase::toJson(tagFilters_);
    }

    return val;
}
bool SearchResourceSharesReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_share_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_filters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_filters"));
        if(!fieldValue.is_null())
        {
            std::vector<TagFilter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagFilters(refVal);
        }
    }
    return ok;
}


int32_t SearchResourceSharesReqBody::getLimit() const
{
    return limit_;
}

void SearchResourceSharesReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchResourceSharesReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchResourceSharesReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchResourceSharesReqBody::getName() const
{
    return name_;
}

void SearchResourceSharesReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SearchResourceSharesReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void SearchResourceSharesReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string SearchResourceSharesReqBody::getMarker() const
{
    return marker_;
}

void SearchResourceSharesReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchResourceSharesReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchResourceSharesReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::string SearchResourceSharesReqBody::getPermissionId() const
{
    return permissionId_;
}

void SearchResourceSharesReqBody::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool SearchResourceSharesReqBody::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void SearchResourceSharesReqBody::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

std::string SearchResourceSharesReqBody::getResourceOwner() const
{
    return resourceOwner_;
}

void SearchResourceSharesReqBody::setResourceOwner(const std::string& value)
{
    resourceOwner_ = value;
    resourceOwnerIsSet_ = true;
}

bool SearchResourceSharesReqBody::resourceOwnerIsSet() const
{
    return resourceOwnerIsSet_;
}

void SearchResourceSharesReqBody::unsetresourceOwner()
{
    resourceOwnerIsSet_ = false;
}

std::vector<std::string>& SearchResourceSharesReqBody::getResourceShareIds()
{
    return resourceShareIds_;
}

void SearchResourceSharesReqBody::setResourceShareIds(const std::vector<std::string>& value)
{
    resourceShareIds_ = value;
    resourceShareIdsIsSet_ = true;
}

bool SearchResourceSharesReqBody::resourceShareIdsIsSet() const
{
    return resourceShareIdsIsSet_;
}

void SearchResourceSharesReqBody::unsetresourceShareIds()
{
    resourceShareIdsIsSet_ = false;
}

std::string SearchResourceSharesReqBody::getResourceShareStatus() const
{
    return resourceShareStatus_;
}

void SearchResourceSharesReqBody::setResourceShareStatus(const std::string& value)
{
    resourceShareStatus_ = value;
    resourceShareStatusIsSet_ = true;
}

bool SearchResourceSharesReqBody::resourceShareStatusIsSet() const
{
    return resourceShareStatusIsSet_;
}

void SearchResourceSharesReqBody::unsetresourceShareStatus()
{
    resourceShareStatusIsSet_ = false;
}

std::vector<TagFilter>& SearchResourceSharesReqBody::getTagFilters()
{
    return tagFilters_;
}

void SearchResourceSharesReqBody::setTagFilters(const std::vector<TagFilter>& value)
{
    tagFilters_ = value;
    tagFiltersIsSet_ = true;
}

bool SearchResourceSharesReqBody::tagFiltersIsSet() const
{
    return tagFiltersIsSet_;
}

void SearchResourceSharesReqBody::unsettagFilters()
{
    tagFiltersIsSet_ = false;
}

}
}
}
}
}


