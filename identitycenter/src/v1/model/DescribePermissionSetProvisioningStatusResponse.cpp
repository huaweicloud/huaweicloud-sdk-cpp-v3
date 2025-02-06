

#include "huaweicloud/identitycenter/v1/model/DescribePermissionSetProvisioningStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribePermissionSetProvisioningStatusResponse::DescribePermissionSetProvisioningStatusResponse()
{
    permissionSetProvisioningStatusIsSet_ = false;
}

DescribePermissionSetProvisioningStatusResponse::~DescribePermissionSetProvisioningStatusResponse() = default;

void DescribePermissionSetProvisioningStatusResponse::validate()
{
}

web::json::value DescribePermissionSetProvisioningStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetProvisioningStatusIsSet_) {
        val[utility::conversions::to_string_t("permission_set_provisioning_status")] = ModelBase::toJson(permissionSetProvisioningStatus_);
    }

    return val;
}
bool DescribePermissionSetProvisioningStatusResponse::fromJson(const web::json::value& val)
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


PermissionSetProvisioningStatusDto DescribePermissionSetProvisioningStatusResponse::getPermissionSetProvisioningStatus() const
{
    return permissionSetProvisioningStatus_;
}

void DescribePermissionSetProvisioningStatusResponse::setPermissionSetProvisioningStatus(const PermissionSetProvisioningStatusDto& value)
{
    permissionSetProvisioningStatus_ = value;
    permissionSetProvisioningStatusIsSet_ = true;
}

bool DescribePermissionSetProvisioningStatusResponse::permissionSetProvisioningStatusIsSet() const
{
    return permissionSetProvisioningStatusIsSet_;
}

void DescribePermissionSetProvisioningStatusResponse::unsetpermissionSetProvisioningStatus()
{
    permissionSetProvisioningStatusIsSet_ = false;
}

}
}
}
}
}


