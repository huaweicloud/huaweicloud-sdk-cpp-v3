

#include "huaweicloud/identitycenter/v1/model/AttachManagedPolicyToPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AttachManagedPolicyToPermissionSetReqBody::AttachManagedPolicyToPermissionSetReqBody()
{
    managedPolicyId_ = "";
    managedPolicyIdIsSet_ = false;
    managedPolicyName_ = "";
    managedPolicyNameIsSet_ = false;
}

AttachManagedPolicyToPermissionSetReqBody::~AttachManagedPolicyToPermissionSetReqBody() = default;

void AttachManagedPolicyToPermissionSetReqBody::validate()
{
}

web::json::value AttachManagedPolicyToPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("managed_policy_id")] = ModelBase::toJson(managedPolicyId_);
    }
    if(managedPolicyNameIsSet_) {
        val[utility::conversions::to_string_t("managed_policy_name")] = ModelBase::toJson(managedPolicyName_);
    }

    return val;
}
bool AttachManagedPolicyToPermissionSetReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("managed_policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedPolicyName(refVal);
        }
    }
    return ok;
}


std::string AttachManagedPolicyToPermissionSetReqBody::getManagedPolicyId() const
{
    return managedPolicyId_;
}

void AttachManagedPolicyToPermissionSetReqBody::setManagedPolicyId(const std::string& value)
{
    managedPolicyId_ = value;
    managedPolicyIdIsSet_ = true;
}

bool AttachManagedPolicyToPermissionSetReqBody::managedPolicyIdIsSet() const
{
    return managedPolicyIdIsSet_;
}

void AttachManagedPolicyToPermissionSetReqBody::unsetmanagedPolicyId()
{
    managedPolicyIdIsSet_ = false;
}

std::string AttachManagedPolicyToPermissionSetReqBody::getManagedPolicyName() const
{
    return managedPolicyName_;
}

void AttachManagedPolicyToPermissionSetReqBody::setManagedPolicyName(const std::string& value)
{
    managedPolicyName_ = value;
    managedPolicyNameIsSet_ = true;
}

bool AttachManagedPolicyToPermissionSetReqBody::managedPolicyNameIsSet() const
{
    return managedPolicyNameIsSet_;
}

void AttachManagedPolicyToPermissionSetReqBody::unsetmanagedPolicyName()
{
    managedPolicyNameIsSet_ = false;
}

}
}
}
}
}


