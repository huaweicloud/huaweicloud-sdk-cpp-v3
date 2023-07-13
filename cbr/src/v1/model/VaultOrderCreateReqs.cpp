

#include "huaweicloud/cbr/v1/model/VaultOrderCreateReqs.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultOrderCreateReqs::VaultOrderCreateReqs()
{
    vaultIsSet_ = false;
}

VaultOrderCreateReqs::~VaultOrderCreateReqs() = default;

void VaultOrderCreateReqs::validate()
{
}

web::json::value VaultOrderCreateReqs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool VaultOrderCreateReqs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultOrder refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    return ok;
}

VaultOrder VaultOrderCreateReqs::getVault() const
{
    return vault_;
}

void VaultOrderCreateReqs::setVault(const VaultOrder& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool VaultOrderCreateReqs::vaultIsSet() const
{
    return vaultIsSet_;
}

void VaultOrderCreateReqs::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


