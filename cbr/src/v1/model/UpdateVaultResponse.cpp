

#include "huaweicloud/cbr/v1/model/UpdateVaultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateVaultResponse::UpdateVaultResponse()
{
    vaultIsSet_ = false;
}

UpdateVaultResponse::~UpdateVaultResponse() = default;

void UpdateVaultResponse::validate()
{
}

web::json::value UpdateVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}
bool UpdateVaultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            Vault refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    return ok;
}


Vault UpdateVaultResponse::getVault() const
{
    return vault_;
}

void UpdateVaultResponse::setVault(const Vault& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool UpdateVaultResponse::vaultIsSet() const
{
    return vaultIsSet_;
}

void UpdateVaultResponse::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


