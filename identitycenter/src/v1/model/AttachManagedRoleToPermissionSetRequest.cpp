

#include "huaweicloud/identitycenter/v1/model/AttachManagedRoleToPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AttachManagedRoleToPermissionSetRequest::AttachManagedRoleToPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachManagedRoleToPermissionSetRequest::~AttachManagedRoleToPermissionSetRequest() = default;

void AttachManagedRoleToPermissionSetRequest::validate()
{
}

web::json::value AttachManagedRoleToPermissionSetRequest::toJson() const
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
bool AttachManagedRoleToPermissionSetRequest::fromJson(const web::json::value& val)
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
            ResourceAttachManagedPolicyToPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachManagedRoleToPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void AttachManagedRoleToPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool AttachManagedRoleToPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void AttachManagedRoleToPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string AttachManagedRoleToPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void AttachManagedRoleToPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AttachManagedRoleToPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AttachManagedRoleToPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AttachManagedRoleToPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void AttachManagedRoleToPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool AttachManagedRoleToPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void AttachManagedRoleToPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

ResourceAttachManagedPolicyToPermissionSetReqBody AttachManagedRoleToPermissionSetRequest::getBody() const
{
    return body_;
}

void AttachManagedRoleToPermissionSetRequest::setBody(const ResourceAttachManagedPolicyToPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachManagedRoleToPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachManagedRoleToPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


