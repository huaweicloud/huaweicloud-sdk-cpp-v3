

#include "huaweicloud/ram/v1/model/ListPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListPermissionsRequest::ListPermissionsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    permissionType_ = "";
    permissionTypeIsSet_ = false;
}

ListPermissionsRequest::~ListPermissionsRequest() = default;

void ListPermissionsRequest::validate()
{
}

web::json::value ListPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(permissionTypeIsSet_) {
        val[utility::conversions::to_string_t("permission_type")] = ModelBase::toJson(permissionType_);
    }

    return val;
}
bool ListPermissionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionType(refVal);
        }
    }
    return ok;
}


int32_t ListPermissionsRequest::getLimit() const
{
    return limit_;
}

void ListPermissionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPermissionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPermissionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPermissionsRequest::getMarker() const
{
    return marker_;
}

void ListPermissionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPermissionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPermissionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPermissionsRequest::getResourceType() const
{
    return resourceType_;
}

void ListPermissionsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListPermissionsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListPermissionsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListPermissionsRequest::getPermissionType() const
{
    return permissionType_;
}

void ListPermissionsRequest::setPermissionType(const std::string& value)
{
    permissionType_ = value;
    permissionTypeIsSet_ = true;
}

bool ListPermissionsRequest::permissionTypeIsSet() const
{
    return permissionTypeIsSet_;
}

void ListPermissionsRequest::unsetpermissionType()
{
    permissionTypeIsSet_ = false;
}

}
}
}
}
}


