

#include "huaweicloud/cbr/v1/model/VaultPolicyResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultPolicyResp::VaultPolicyResp()
{
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

VaultPolicyResp::~VaultPolicyResp() = default;

void VaultPolicyResp::validate()
{
}

web::json::value VaultPolicyResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool VaultPolicyResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination_vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}


std::string VaultPolicyResp::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void VaultPolicyResp::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool VaultPolicyResp::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void VaultPolicyResp::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

std::string VaultPolicyResp::getPolicyId() const
{
    return policyId_;
}

void VaultPolicyResp::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool VaultPolicyResp::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void VaultPolicyResp::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string VaultPolicyResp::getVaultId() const
{
    return vaultId_;
}

void VaultPolicyResp::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool VaultPolicyResp::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void VaultPolicyResp::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


