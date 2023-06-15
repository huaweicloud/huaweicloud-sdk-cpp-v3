

#include "huaweicloud/cbr/v1/model/DeleteVaultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DeleteVaultRequest::DeleteVaultRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

DeleteVaultRequest::~DeleteVaultRequest() = default;

void DeleteVaultRequest::validate()
{
}

web::json::value DeleteVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool DeleteVaultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DeleteVaultRequest::getVaultId() const
{
    return vaultId_;
}

void DeleteVaultRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool DeleteVaultRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void DeleteVaultRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


