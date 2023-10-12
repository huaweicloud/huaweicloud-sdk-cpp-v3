

#include "huaweicloud/cbr/v1/model/PolicyAssociateVault.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyAssociateVault::PolicyAssociateVault()
{
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

PolicyAssociateVault::~PolicyAssociateVault() = default;

void PolicyAssociateVault::validate()
{
}

web::json::value PolicyAssociateVault::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}
bool PolicyAssociateVault::fromJson(const web::json::value& val)
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


std::string PolicyAssociateVault::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void PolicyAssociateVault::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool PolicyAssociateVault::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void PolicyAssociateVault::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

std::string PolicyAssociateVault::getVaultId() const
{
    return vaultId_;
}

void PolicyAssociateVault::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool PolicyAssociateVault::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void PolicyAssociateVault::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


