

#include "huaweicloud/cbr/v1/model/ShowVaultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowVaultRequest::ShowVaultRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

ShowVaultRequest::~ShowVaultRequest() = default;

void ShowVaultRequest::validate()
{
}

web::json::value ShowVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool ShowVaultRequest::fromJson(const web::json::value& val)
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


std::string ShowVaultRequest::getVaultId() const
{
    return vaultId_;
}

void ShowVaultRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ShowVaultRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ShowVaultRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


