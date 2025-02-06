

#include "huaweicloud/identitycenter/v1/model/ProvisionPermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ProvisionPermissionSetResponse::ProvisionPermissionSetResponse()
{
    permissionSetProvisioningStatusIsSet_ = false;
}

ProvisionPermissionSetResponse::~ProvisionPermissionSetResponse() = default;

void ProvisionPermissionSetResponse::validate()
{
}

web::json::value ProvisionPermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetProvisioningStatusIsSet_) {
        val[utility::conversions::to_string_t("permission_set_provisioning_status")] = ModelBase::toJson(permissionSetProvisioningStatus_);
    }

    return val;
}
bool ProvisionPermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_set_provisioning_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_provisioning_status"));
        if(!fieldValue.is_null())
        {
            PermissionSetProvisioningStatusDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetProvisioningStatus(refVal);
        }
    }
    return ok;
}


PermissionSetProvisioningStatusDto ProvisionPermissionSetResponse::getPermissionSetProvisioningStatus() const
{
    return permissionSetProvisioningStatus_;
}

void ProvisionPermissionSetResponse::setPermissionSetProvisioningStatus(const PermissionSetProvisioningStatusDto& value)
{
    permissionSetProvisioningStatus_ = value;
    permissionSetProvisioningStatusIsSet_ = true;
}

bool ProvisionPermissionSetResponse::permissionSetProvisioningStatusIsSet() const
{
    return permissionSetProvisioningStatusIsSet_;
}

void ProvisionPermissionSetResponse::unsetpermissionSetProvisioningStatus()
{
    permissionSetProvisioningStatusIsSet_ = false;
}

}
}
}
}
}


