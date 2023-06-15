

#include "huaweicloud/cbr/v1/model/InstancesResourceDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




InstancesResourceDetail::InstancesResourceDetail()
{
    vaultIsSet_ = false;
}

InstancesResourceDetail::~InstancesResourceDetail() = default;

void InstancesResourceDetail::validate()
{
}

web::json::value InstancesResourceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }

    return val;
}

bool InstancesResourceDetail::fromJson(const web::json::value& val)
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


Vault InstancesResourceDetail::getVault() const
{
    return vault_;
}

void InstancesResourceDetail::setVault(const Vault& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool InstancesResourceDetail::vaultIsSet() const
{
    return vaultIsSet_;
}

void InstancesResourceDetail::unsetvault()
{
    vaultIsSet_ = false;
}

}
}
}
}
}


