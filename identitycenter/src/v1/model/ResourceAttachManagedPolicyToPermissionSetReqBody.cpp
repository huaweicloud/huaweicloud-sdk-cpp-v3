

#include "huaweicloud/identitycenter/v1/model/ResourceAttachManagedPolicyToPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResourceAttachManagedPolicyToPermissionSetReqBody::ResourceAttachManagedPolicyToPermissionSetReqBody()
{
    managedRoleId_ = "";
    managedRoleIdIsSet_ = false;
    managedRoleName_ = "";
    managedRoleNameIsSet_ = false;
}

ResourceAttachManagedPolicyToPermissionSetReqBody::~ResourceAttachManagedPolicyToPermissionSetReqBody() = default;

void ResourceAttachManagedPolicyToPermissionSetReqBody::validate()
{
}

web::json::value ResourceAttachManagedPolicyToPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedRoleIdIsSet_) {
        val[utility::conversions::to_string_t("managed_role_id")] = ModelBase::toJson(managedRoleId_);
    }
    if(managedRoleNameIsSet_) {
        val[utility::conversions::to_string_t("managed_role_name")] = ModelBase::toJson(managedRoleName_);
    }

    return val;
}
bool ResourceAttachManagedPolicyToPermissionSetReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managed_role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedRoleName(refVal);
        }
    }
    return ok;
}


std::string ResourceAttachManagedPolicyToPermissionSetReqBody::getManagedRoleId() const
{
    return managedRoleId_;
}

void ResourceAttachManagedPolicyToPermissionSetReqBody::setManagedRoleId(const std::string& value)
{
    managedRoleId_ = value;
    managedRoleIdIsSet_ = true;
}

bool ResourceAttachManagedPolicyToPermissionSetReqBody::managedRoleIdIsSet() const
{
    return managedRoleIdIsSet_;
}

void ResourceAttachManagedPolicyToPermissionSetReqBody::unsetmanagedRoleId()
{
    managedRoleIdIsSet_ = false;
}

std::string ResourceAttachManagedPolicyToPermissionSetReqBody::getManagedRoleName() const
{
    return managedRoleName_;
}

void ResourceAttachManagedPolicyToPermissionSetReqBody::setManagedRoleName(const std::string& value)
{
    managedRoleName_ = value;
    managedRoleNameIsSet_ = true;
}

bool ResourceAttachManagedPolicyToPermissionSetReqBody::managedRoleNameIsSet() const
{
    return managedRoleNameIsSet_;
}

void ResourceAttachManagedPolicyToPermissionSetReqBody::unsetmanagedRoleName()
{
    managedRoleNameIsSet_ = false;
}

}
}
}
}
}


