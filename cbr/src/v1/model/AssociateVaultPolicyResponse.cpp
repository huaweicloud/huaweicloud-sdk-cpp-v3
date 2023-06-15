

#include "huaweicloud/cbr/v1/model/AssociateVaultPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AssociateVaultPolicyResponse::AssociateVaultPolicyResponse()
{
    associatePolicyIsSet_ = false;
}

AssociateVaultPolicyResponse::~AssociateVaultPolicyResponse() = default;

void AssociateVaultPolicyResponse::validate()
{
}

web::json::value AssociateVaultPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associatePolicyIsSet_) {
        val[utility::conversions::to_string_t("associate_policy")] = ModelBase::toJson(associatePolicy_);
    }

    return val;
}

bool AssociateVaultPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associate_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_policy"));
        if(!fieldValue.is_null())
        {
            VaultPolicyResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatePolicy(refVal);
        }
    }
    return ok;
}


VaultPolicyResp AssociateVaultPolicyResponse::getAssociatePolicy() const
{
    return associatePolicy_;
}

void AssociateVaultPolicyResponse::setAssociatePolicy(const VaultPolicyResp& value)
{
    associatePolicy_ = value;
    associatePolicyIsSet_ = true;
}

bool AssociateVaultPolicyResponse::associatePolicyIsSet() const
{
    return associatePolicyIsSet_;
}

void AssociateVaultPolicyResponse::unsetassociatePolicy()
{
    associatePolicyIsSet_ = false;
}

}
}
}
}
}


