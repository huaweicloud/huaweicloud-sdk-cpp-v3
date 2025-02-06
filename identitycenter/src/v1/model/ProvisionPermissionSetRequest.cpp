

#include "huaweicloud/identitycenter/v1/model/ProvisionPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ProvisionPermissionSetRequest::ProvisionPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    bodyIsSet_ = false;
}

ProvisionPermissionSetRequest::~ProvisionPermissionSetRequest() = default;

void ProvisionPermissionSetRequest::validate()
{
}

web::json::value ProvisionPermissionSetRequest::toJson() const
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
bool ProvisionPermissionSetRequest::fromJson(const web::json::value& val)
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
            ProvisionPermissionSetReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ProvisionPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ProvisionPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ProvisionPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ProvisionPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ProvisionPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void ProvisionPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ProvisionPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ProvisionPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ProvisionPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void ProvisionPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool ProvisionPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void ProvisionPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

ProvisionPermissionSetReqBody ProvisionPermissionSetRequest::getBody() const
{
    return body_;
}

void ProvisionPermissionSetRequest::setBody(const ProvisionPermissionSetReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ProvisionPermissionSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ProvisionPermissionSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


