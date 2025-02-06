

#include "huaweicloud/identitycenter/v1/model/ListManagedPoliciesInPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListManagedPoliciesInPermissionSetRequest::ListManagedPoliciesInPermissionSetRequest()
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

ListManagedPoliciesInPermissionSetRequest::~ListManagedPoliciesInPermissionSetRequest() = default;

void ListManagedPoliciesInPermissionSetRequest::validate()
{
}

web::json::value ListManagedPoliciesInPermissionSetRequest::toJson() const
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
bool ListManagedPoliciesInPermissionSetRequest::fromJson(const web::json::value& val)
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


std::string ListManagedPoliciesInPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListManagedPoliciesInPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListManagedPoliciesInPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListManagedPoliciesInPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void ListManagedPoliciesInPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListManagedPoliciesInPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListManagedPoliciesInPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void ListManagedPoliciesInPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void ListManagedPoliciesInPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

int32_t ListManagedPoliciesInPermissionSetRequest::getLimit() const
{
    return limit_;
}

void ListManagedPoliciesInPermissionSetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListManagedPoliciesInPermissionSetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListManagedPoliciesInPermissionSetRequest::getMarker() const
{
    return marker_;
}

void ListManagedPoliciesInPermissionSetRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListManagedPoliciesInPermissionSetRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


