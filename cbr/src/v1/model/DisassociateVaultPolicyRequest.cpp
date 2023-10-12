

#include "huaweicloud/cbr/v1/model/DisassociateVaultPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DisassociateVaultPolicyRequest::DisassociateVaultPolicyRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisassociateVaultPolicyRequest::~DisassociateVaultPolicyRequest() = default;

void DisassociateVaultPolicyRequest::validate()
{
}

web::json::value DisassociateVaultPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisassociateVaultPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VaultDissociate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisassociateVaultPolicyRequest::getVaultId() const
{
    return vaultId_;
}

void DisassociateVaultPolicyRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool DisassociateVaultPolicyRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void DisassociateVaultPolicyRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultDissociate DisassociateVaultPolicyRequest::getBody() const
{
    return body_;
}

void DisassociateVaultPolicyRequest::setBody(const VaultDissociate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateVaultPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateVaultPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


