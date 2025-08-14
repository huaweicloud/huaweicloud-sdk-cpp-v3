

#include "huaweicloud/identitycenter/v1/model/ListManagedRolesInPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListManagedRolesInPermissionSetRequest::ListManagedRolesInPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListManagedRolesInPermissionSetRequest::~ListManagedRolesInPermissionSetRequest() = default;

void ListManagedRolesInPermissionSetRequest::validate()
{
}

web::json::value ListManagedRolesInPermissionSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListManagedRolesInPermissionSetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
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


std::string ListManagedRolesInPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListManagedRolesInPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListManagedRolesInPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListManagedRolesInPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListManagedRolesInPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void ListManagedRolesInPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListManagedRolesInPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListManagedRolesInPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListManagedRolesInPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void ListManagedRolesInPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool ListManagedRolesInPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void ListManagedRolesInPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

int32_t ListManagedRolesInPermissionSetRequest::getLimit() const
{
    return limit_;
}

void ListManagedRolesInPermissionSetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListManagedRolesInPermissionSetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListManagedRolesInPermissionSetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListManagedRolesInPermissionSetRequest::getMarker() const
{
    return marker_;
}

void ListManagedRolesInPermissionSetRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListManagedRolesInPermissionSetRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListManagedRolesInPermissionSetRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


