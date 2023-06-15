

#include "huaweicloud/cbr/v1/model/CreateVaultResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateVaultResponse::CreateVaultResponse()
{
    vaultIsSet_ = false;
}

CreateVaultResponse::~CreateVaultResponse() = default;

void CreateVaultResponse::validate()
{
}

web::json::value CreateVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool CreateVaultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultCreateResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    return ok;
}


VaultCreateResource CreateVaultResponse::getVault() const
{
    return vault_;
}

void CreateVaultResponse::setVault(const VaultCreateResource& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool CreateVaultResponse::vaultIsSet() const
{
    return vaultIsSet_;
}

void CreateVaultResponse::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


