

#include "huaweicloud/identitycenter/v1/model/UpdatePermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdatePermissionSetRequest::UpdatePermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePermissionSetRequest::~UpdatePermissionSetRequest() = default;

void UpdatePermissionSetRequest::validate()
{
}

web::json::value UpdatePermissionSetRequest::toJson() const
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
bool UpdatePermissionSetRequest::fromJson(const web::json::value& val)
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
            UpdatePermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdatePermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdatePermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdatePermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdatePermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdatePermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void UpdatePermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool UpdatePermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void UpdatePermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

UpdatePermissionSetReqBody UpdatePermissionSetRequest::getBody() const
{
    return body_;
}

void UpdatePermissionSetRequest::setBody(const UpdatePermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


