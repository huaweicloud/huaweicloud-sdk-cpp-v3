

#include "huaweicloud/cbr/v1/model/ShowVaultResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowVaultResponse::ShowVaultResponse()
{
    vaultIsSet_ = false;
}

ShowVaultResponse::~ShowVaultResponse() = default;

void ShowVaultResponse::validate()
{
}

web::json::value ShowVaultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool ShowVaultResponse::fromJson(const web::json::value& val)
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


Vault ShowVaultResponse::getVault() const
{
    return vault_;
}

void ShowVaultResponse::setVault(const Vault& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool ShowVaultResponse::vaultIsSet() const
{
    return vaultIsSet_;
}

void ShowVaultResponse::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


