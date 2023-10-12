

#include "huaweicloud/cbr/v1/model/VaultAssociate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultAssociate::VaultAssociate()
{
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    addPolicyIdsIsSet_ = false;
}

VaultAssociate::~VaultAssociate() = default;

void VaultAssociate::validate()
{
}

web::json::value VaultAssociate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(addPolicyIdsIsSet_) {
        val[utility::conversions::to_string_t("add_policy_ids")] = ModelBase::toJson(addPolicyIds_);
    }

    return val;
}
bool VaultAssociate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("add_policy_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_policy_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddPolicyIds(refVal);
        }
    }
    return ok;
}


std::string VaultAssociate::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void VaultAssociate::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool VaultAssociate::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void VaultAssociate::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

std::string VaultAssociate::getPolicyId() const
{
    return policyId_;
}

void VaultAssociate::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool VaultAssociate::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void VaultAssociate::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::vector<std::string>& VaultAssociate::getAddPolicyIds()
{
    return addPolicyIds_;
}

void VaultAssociate::setAddPolicyIds(const std::vector<std::string>& value)
{
    addPolicyIds_ = value;
    addPolicyIdsIsSet_ = true;
}

bool VaultAssociate::addPolicyIdsIsSet() const
{
    return addPolicyIdsIsSet_;
}

void VaultAssociate::unsetaddPolicyIds()
{
    addPolicyIdsIsSet_ = false;
}

}
}
}
}
}


