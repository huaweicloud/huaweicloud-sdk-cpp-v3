

#include "huaweicloud/cbr/v1/model/UpdateVaultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateVaultRequest::UpdateVaultRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVaultRequest::~UpdateVaultRequest() = default;

void UpdateVaultRequest::validate()
{
}

web::json::value UpdateVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateVaultRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VaultUpdateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVaultRequest::getVaultId() const
{
    return vaultId_;
}

void UpdateVaultRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool UpdateVaultRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void UpdateVaultRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultUpdateReq UpdateVaultRequest::getBody() const
{
    return body_;
}

void UpdateVaultRequest::setBody(const VaultUpdateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVaultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVaultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


