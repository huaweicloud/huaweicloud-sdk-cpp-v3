

#include "huaweicloud/cbr/v1/model/DisassociateVaultPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DisassociateVaultPolicyResponse::DisassociateVaultPolicyResponse()
{
    dissociatePolicyIsSet_ = false;
}

DisassociateVaultPolicyResponse::~DisassociateVaultPolicyResponse() = default;

void DisassociateVaultPolicyResponse::validate()
{
}

web::json::value DisassociateVaultPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dissociatePolicyIsSet_) {
        val[utility::conversions::to_string_t("dissociate_policy")] = ModelBase::toJson(dissociatePolicy_);
    }

    return val;
}
bool DisassociateVaultPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dissociate_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dissociate_policy"));
        if(!fieldValue.is_null())
        {
            VaultPolicyResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDissociatePolicy(refVal);
        }
    }
    return ok;
}


VaultPolicyResp DisassociateVaultPolicyResponse::getDissociatePolicy() const
{
    return dissociatePolicy_;
}

void DisassociateVaultPolicyResponse::setDissociatePolicy(const VaultPolicyResp& value)
{
    dissociatePolicy_ = value;
    dissociatePolicyIsSet_ = true;
}

bool DisassociateVaultPolicyResponse::dissociatePolicyIsSet() const
{
    return dissociatePolicyIsSet_;
}

void DisassociateVaultPolicyResponse::unsetdissociatePolicy()
{
    dissociatePolicyIsSet_ = false;
}

}
}
}
}
}


