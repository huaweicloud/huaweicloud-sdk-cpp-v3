

#include "huaweicloud/cbr/v1/model/BatchUpdateVaultRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BatchUpdateVaultRequestBody::BatchUpdateVaultRequestBody()
{
    vaultIsSet_ = false;
}

BatchUpdateVaultRequestBody::~BatchUpdateVaultRequestBody() = default;

void BatchUpdateVaultRequestBody::validate()
{
}

web::json::value BatchUpdateVaultRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool BatchUpdateVaultRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultBatchUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    return ok;
}

VaultBatchUpdate BatchUpdateVaultRequestBody::getVault() const
{
    return vault_;
}

void BatchUpdateVaultRequestBody::setVault(const VaultBatchUpdate& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool BatchUpdateVaultRequestBody::vaultIsSet() const
{
    return vaultIsSet_;
}

void BatchUpdateVaultRequestBody::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


