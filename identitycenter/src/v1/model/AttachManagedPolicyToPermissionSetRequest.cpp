

#include "huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AttachManagedPolicyToPermissionSetRequest::AttachManagedPolicyToPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachManagedPolicyToPermissionSetRequest::~AttachManagedPolicyToPermissionSetRequest() = default;

void AttachManagedPolicyToPermissionSetRequest::validate()
{
}

web::json::value AttachManagedPolicyToPermissionSetRequest::toJson() const
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
bool AttachManagedPolicyToPermissionSetRequest::fromJson(const web::json::value& val)
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
            AttachManagedPolicyToPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachManagedPolicyToPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void AttachManagedPolicyToPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool AttachManagedPolicyToPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void AttachManagedPolicyToPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string AttachManagedPolicyToPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void AttachManagedPolicyToPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AttachManagedPolicyToPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AttachManagedPolicyToPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AttachManagedPolicyToPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void AttachManagedPolicyToPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool AttachManagedPolicyToPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void AttachManagedPolicyToPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

AttachManagedPolicyToPermissionSetReqBody AttachManagedPolicyToPermissionSetRequest::getBody() const
{
    return body_;
}

void AttachManagedPolicyToPermissionSetRequest::setBody(const AttachManagedPolicyToPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachManagedPolicyToPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachManagedPolicyToPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


