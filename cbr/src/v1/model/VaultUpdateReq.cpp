

#include "huaweicloud/cbr/v1/model/VaultUpdateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultUpdateReq::VaultUpdateReq()
{
    vaultIsSet_ = false;
}

VaultUpdateReq::~VaultUpdateReq() = default;

void VaultUpdateReq::validate()
{
}

web::json::value VaultUpdateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool VaultUpdateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    return ok;
}

VaultUpdate VaultUpdateReq::getVault() const
{
    return vault_;
}

void VaultUpdateReq::setVault(const VaultUpdate& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool VaultUpdateReq::vaultIsSet() const
{
    return vaultIsSet_;
}

void VaultUpdateReq::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


