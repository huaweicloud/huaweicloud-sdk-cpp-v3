

#include "huaweicloud/identitycenter/v1/model/GetCustomPolicyForPermissionSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetCustomPolicyForPermissionSetRequest::GetCustomPolicyForPermissionSetRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
}

GetCustomPolicyForPermissionSetRequest::~GetCustomPolicyForPermissionSetRequest() = default;

void GetCustomPolicyForPermissionSetRequest::validate()
{
}

web::json::value GetCustomPolicyForPermissionSetRequest::toJson() const
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

    return val;
}
bool GetCustomPolicyForPermissionSetRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetCustomPolicyForPermissionSetRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetCustomPolicyForPermissionSetRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetCustomPolicyForPermissionSetRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetCustomPolicyForPermissionSetRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string GetCustomPolicyForPermissionSetRequest::getInstanceId() const
{
    return instanceId_;
}

void GetCustomPolicyForPermissionSetRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetCustomPolicyForPermissionSetRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetCustomPolicyForPermissionSetRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string GetCustomPolicyForPermissionSetRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void GetCustomPolicyForPermissionSetRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool GetCustomPolicyForPermissionSetRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void GetCustomPolicyForPermissionSetRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

}
}
}
}
}


