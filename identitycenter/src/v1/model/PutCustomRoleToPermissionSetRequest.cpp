

#include "huaweicloud/identitycenter/v1/model/PutCustomRoleToPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PutCustomRoleToPermissionSetRequest::PutCustomRoleToPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

PutCustomRoleToPermissionSetRequest::~PutCustomRoleToPermissionSetRequest() = default;

void PutCustomRoleToPermissionSetRequest::validate()
{
}

web::json::value PutCustomRoleToPermissionSetRequest::toJson() const
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
bool PutCustomRoleToPermissionSetRequest::fromJson(const web::json::value& val)
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
            PutCustomRoleToPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PutCustomRoleToPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void PutCustomRoleToPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool PutCustomRoleToPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void PutCustomRoleToPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string PutCustomRoleToPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void PutCustomRoleToPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PutCustomRoleToPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PutCustomRoleToPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string PutCustomRoleToPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void PutCustomRoleToPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool PutCustomRoleToPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void PutCustomRoleToPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

PutCustomRoleToPermissionSetReqBody PutCustomRoleToPermissionSetRequest::getBody() const
{
    return body_;
}

void PutCustomRoleToPermissionSetRequest::setBody(const PutCustomRoleToPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PutCustomRoleToPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PutCustomRoleToPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


