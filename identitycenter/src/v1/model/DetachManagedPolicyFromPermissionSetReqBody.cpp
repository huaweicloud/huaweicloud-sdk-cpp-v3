

#include "huaweicloud/identitycenter/v1/model/DetachManagedPolicyFromPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DetachManagedPolicyFromPermissionSetReqBody::DetachManagedPolicyFromPermissionSetReqBody()
{
    managedPolicyId_ = "";
    managedPolicyIdIsSet_ = false;
}

DetachManagedPolicyFromPermissionSetReqBody::~DetachManagedPolicyFromPermissionSetReqBody() = default;

void DetachManagedPolicyFromPermissionSetReqBody::validate()
{
}

web::json::value DetachManagedPolicyFromPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("managed_policy_id")] = ModelBase::toJson(managedPolicyId_);
    }

    return val;
}
bool DetachManagedPolicyFromPermissionSetReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedPolicyId(refVal);
        }
    }
    return ok;
}


std::string DetachManagedPolicyFromPermissionSetReqBody::getManagedPolicyId() const
{
    return managedPolicyId_;
}

void DetachManagedPolicyFromPermissionSetReqBody::setManagedPolicyId(const std::string& value)
{
    managedPolicyId_ = value;
    managedPolicyIdIsSet_ = true;
}

bool DetachManagedPolicyFromPermissionSetReqBody::managedPolicyIdIsSet() const
{
    return managedPolicyIdIsSet_;
}

void DetachManagedPolicyFromPermissionSetReqBody::unsetmanagedPolicyId()
{
    managedPolicyIdIsSet_ = false;
}

}
}
}
}
}


