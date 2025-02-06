

#include "huaweicloud/identitycenter/v1/model/ListAccountsForProvisionedPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountsForProvisionedPermissionSetRequest::ListAccountsForProvisionedPermissionSetRequest()
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
    provisioningStatus_ = "";
    provisioningStatusIsSet_ = false;
}

ListAccountsForProvisionedPermissionSetRequest::~ListAccountsForProvisionedPermissionSetRequest() = default;

void ListAccountsForProvisionedPermissionSetRequest::validate()
{
}

web::json::value ListAccountsForProvisionedPermissionSetRequest::toJson() const
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
    if(provisioningStatusIsSet_) {
        val[utility::conversions::to_string_t("provisioning_status")] = ModelBase::toJson(provisioningStatus_);
    }

    return val;
}
bool ListAccountsForProvisionedPermissionSetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("provisioning_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provisioning_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvisioningStatus(refVal);
        }
    }
    return ok;
}


std::string ListAccountsForProvisionedPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListAccountsForProvisionedPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListAccountsForProvisionedPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListAccountsForProvisionedPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAccountsForProvisionedPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAccountsForProvisionedPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAccountsForProvisionedPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void ListAccountsForProvisionedPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void ListAccountsForProvisionedPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

int32_t ListAccountsForProvisionedPermissionSetRequest::getLimit() const
{
    return limit_;
}

void ListAccountsForProvisionedPermissionSetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountsForProvisionedPermissionSetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccountsForProvisionedPermissionSetRequest::getMarker() const
{
    return marker_;
}

void ListAccountsForProvisionedPermissionSetRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccountsForProvisionedPermissionSetRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAccountsForProvisionedPermissionSetRequest::getProvisioningStatus() const
{
    return provisioningStatus_;
}

void ListAccountsForProvisionedPermissionSetRequest::setProvisioningStatus(const std::string& value)
{
    provisioningStatus_ = value;
    provisioningStatusIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetRequest::provisioningStatusIsSet() const
{
    return provisioningStatusIsSet_;
}

void ListAccountsForProvisionedPermissionSetRequest::unsetprovisioningStatus()
{
    provisioningStatusIsSet_ = false;
}

}
}
}
}
}


