

#include "huaweicloud/ram/v1/model/ListResourceSharePermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceSharePermissionsRequest::ListResourceSharePermissionsRequest()
{
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    permissionName_ = "";
    permissionNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListResourceSharePermissionsRequest::~ListResourceSharePermissionsRequest() = default;

void ListResourceSharePermissionsRequest::validate()
{
}

web::json::value ListResourceSharePermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(permissionNameIsSet_) {
        val[utility::conversions::to_string_t("permission_name")] = ModelBase::toJson(permissionName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListResourceSharePermissionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionName(refVal);
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


std::string ListResourceSharePermissionsRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void ListResourceSharePermissionsRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool ListResourceSharePermissionsRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void ListResourceSharePermissionsRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

std::string ListResourceSharePermissionsRequest::getPermissionName() const
{
    return permissionName_;
}

void ListResourceSharePermissionsRequest::setPermissionName(const std::string& value)
{
    permissionName_ = value;
    permissionNameIsSet_ = true;
}

bool ListResourceSharePermissionsRequest::permissionNameIsSet() const
{
    return permissionNameIsSet_;
}

void ListResourceSharePermissionsRequest::unsetpermissionName()
{
    permissionNameIsSet_ = false;
}

int32_t ListResourceSharePermissionsRequest::getLimit() const
{
    return limit_;
}

void ListResourceSharePermissionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceSharePermissionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceSharePermissionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceSharePermissionsRequest::getMarker() const
{
    return marker_;
}

void ListResourceSharePermissionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListResourceSharePermissionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListResourceSharePermissionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


