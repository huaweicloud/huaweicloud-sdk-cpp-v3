

#include "huaweicloud/identitycenter/v1/model/DetachManagedPolicyFromPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DetachManagedPolicyFromPermissionSetRequest::DetachManagedPolicyFromPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

DetachManagedPolicyFromPermissionSetRequest::~DetachManagedPolicyFromPermissionSetRequest() = default;

void DetachManagedPolicyFromPermissionSetRequest::validate()
{
}

web::json::value DetachManagedPolicyFromPermissionSetRequest::toJson() const
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
bool DetachManagedPolicyFromPermissionSetRequest::fromJson(const web::json::value& val)
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
            DetachManagedPolicyFromPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DetachManagedPolicyFromPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DetachManagedPolicyFromPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DetachManagedPolicyFromPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DetachManagedPolicyFromPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DetachManagedPolicyFromPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void DetachManagedPolicyFromPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DetachManagedPolicyFromPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DetachManagedPolicyFromPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DetachManagedPolicyFromPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void DetachManagedPolicyFromPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool DetachManagedPolicyFromPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void DetachManagedPolicyFromPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

DetachManagedPolicyFromPermissionSetReqBody DetachManagedPolicyFromPermissionSetRequest::getBody() const
{
    return body_;
}

void DetachManagedPolicyFromPermissionSetRequest::setBody(const DetachManagedPolicyFromPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetachManagedPolicyFromPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetachManagedPolicyFromPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


