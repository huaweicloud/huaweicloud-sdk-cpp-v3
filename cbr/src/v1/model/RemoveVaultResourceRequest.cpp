

#include "huaweicloud/cbr/v1/model/RemoveVaultResourceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RemoveVaultResourceRequest::RemoveVaultResourceRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

RemoveVaultResourceRequest::~RemoveVaultResourceRequest() = default;

void RemoveVaultResourceRequest::validate()
{
}

web::json::value RemoveVaultResourceRequest::toJson() const
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

bool RemoveVaultResourceRequest::fromJson(const web::json::value& val)
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
            VaultRemoveResourceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RemoveVaultResourceRequest::getVaultId() const
{
    return vaultId_;
}

void RemoveVaultResourceRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool RemoveVaultResourceRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void RemoveVaultResourceRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultRemoveResourceReq RemoveVaultResourceRequest::getBody() const
{
    return body_;
}

void RemoveVaultResourceRequest::setBody(const VaultRemoveResourceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RemoveVaultResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RemoveVaultResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


