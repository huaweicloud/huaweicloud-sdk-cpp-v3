

#include "huaweicloud/cbr/v1/model/AssociateVaultPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AssociateVaultPolicyRequest::AssociateVaultPolicyRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateVaultPolicyRequest::~AssociateVaultPolicyRequest() = default;

void AssociateVaultPolicyRequest::validate()
{
}

web::json::value AssociateVaultPolicyRequest::toJson() const
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

bool AssociateVaultPolicyRequest::fromJson(const web::json::value& val)
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
            VaultAssociate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AssociateVaultPolicyRequest::getVaultId() const
{
    return vaultId_;
}

void AssociateVaultPolicyRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool AssociateVaultPolicyRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void AssociateVaultPolicyRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultAssociate AssociateVaultPolicyRequest::getBody() const
{
    return body_;
}

void AssociateVaultPolicyRequest::setBody(const VaultAssociate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateVaultPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateVaultPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


