

#include "huaweicloud/identitycenter/v1/model/ResourceDetachManagedPolicyFromPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResourceDetachManagedPolicyFromPermissionSetReqBody::ResourceDetachManagedPolicyFromPermissionSetReqBody()
{
    managedRoleId_ = "";
    managedRoleIdIsSet_ = false;
}

ResourceDetachManagedPolicyFromPermissionSetReqBody::~ResourceDetachManagedPolicyFromPermissionSetReqBody() = default;

void ResourceDetachManagedPolicyFromPermissionSetReqBody::validate()
{
}

web::json::value ResourceDetachManagedPolicyFromPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedRoleIdIsSet_) {
        val[utility::conversions::to_string_t("managed_role_id")] = ModelBase::toJson(managedRoleId_);
    }

    return val;
}
bool ResourceDetachManagedPolicyFromPermissionSetReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ResourceDetachManagedPolicyFromPermissionSetReqBody::getManagedRoleId() const
{
    return managedRoleId_;
}

void ResourceDetachManagedPolicyFromPermissionSetReqBody::setManagedRoleId(const std::string& value)
{
    managedRoleId_ = value;
    managedRoleIdIsSet_ = true;
}

bool ResourceDetachManagedPolicyFromPermissionSetReqBody::managedRoleIdIsSet() const
{
    return managedRoleIdIsSet_;
}

void ResourceDetachManagedPolicyFromPermissionSetReqBody::unsetmanagedRoleId()
{
    managedRoleIdIsSet_ = false;
}

}
}
}
}
}


