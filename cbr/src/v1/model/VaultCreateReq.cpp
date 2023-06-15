

#include "huaweicloud/cbr/v1/model/VaultCreateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultCreateReq::VaultCreateReq()
{
    vaultIsSet_ = false;
}

VaultCreateReq::~VaultCreateReq() = default;

void VaultCreateReq::validate()
{
}

web::json::value VaultCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool VaultCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    return ok;
}


VaultCreate VaultCreateReq::getVault() const
{
    return vault_;
}

void VaultCreateReq::setVault(const VaultCreate& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool VaultCreateReq::vaultIsSet() const
{
    return vaultIsSet_;
}

void VaultCreateReq::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


