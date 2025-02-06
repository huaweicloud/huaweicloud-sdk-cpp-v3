

#include "huaweicloud/identitycenter/v1/model/PutCustomPolicyToPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PutCustomPolicyToPermissionSetRequest::PutCustomPolicyToPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

PutCustomPolicyToPermissionSetRequest::~PutCustomPolicyToPermissionSetRequest() = default;

void PutCustomPolicyToPermissionSetRequest::validate()
{
}

web::json::value PutCustomPolicyToPermissionSetRequest::toJson() const
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
bool PutCustomPolicyToPermissionSetRequest::fromJson(const web::json::value& val)
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
            PutCustomPolicyToPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PutCustomPolicyToPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void PutCustomPolicyToPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool PutCustomPolicyToPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void PutCustomPolicyToPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string PutCustomPolicyToPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void PutCustomPolicyToPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PutCustomPolicyToPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PutCustomPolicyToPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string PutCustomPolicyToPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void PutCustomPolicyToPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool PutCustomPolicyToPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void PutCustomPolicyToPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

PutCustomPolicyToPermissionSetReqBody PutCustomPolicyToPermissionSetRequest::getBody() const
{
    return body_;
}

void PutCustomPolicyToPermissionSetRequest::setBody(const PutCustomPolicyToPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PutCustomPolicyToPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PutCustomPolicyToPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


