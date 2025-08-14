

#include "huaweicloud/identitycenter/v1/model/DetachManagedRoleFromPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DetachManagedRoleFromPermissionSetRequest::DetachManagedRoleFromPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetachManagedRoleFromPermissionSetRequest::~DetachManagedRoleFromPermissionSetRequest() = default;

void DetachManagedRoleFromPermissionSetRequest::validate()
{
}

web::json::value DetachManagedRoleFromPermissionSetRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DetachManagedRoleFromPermissionSetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResourceDetachManagedPolicyFromPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetachManagedRoleFromPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DetachManagedRoleFromPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DetachManagedRoleFromPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DetachManagedRoleFromPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DetachManagedRoleFromPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void DetachManagedRoleFromPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DetachManagedRoleFromPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DetachManagedRoleFromPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DetachManagedRoleFromPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void DetachManagedRoleFromPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool DetachManagedRoleFromPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void DetachManagedRoleFromPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

ResourceDetachManagedPolicyFromPermissionSetReqBody DetachManagedRoleFromPermissionSetRequest::getBody() const
{
    return body_;
}

void DetachManagedRoleFromPermissionSetRequest::setBody(const ResourceDetachManagedPolicyFromPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetachManagedRoleFromPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetachManagedRoleFromPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


