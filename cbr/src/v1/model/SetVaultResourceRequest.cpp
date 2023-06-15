

#include "huaweicloud/cbr/v1/model/SetVaultResourceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SetVaultResourceRequest::SetVaultResourceRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetVaultResourceRequest::~SetVaultResourceRequest() = default;

void SetVaultResourceRequest::validate()
{
}

web::json::value SetVaultResourceRequest::toJson() const
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

bool SetVaultResourceRequest::fromJson(const web::json::value& val)
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
            VaultSetResourceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetVaultResourceRequest::getVaultId() const
{
    return vaultId_;
}

void SetVaultResourceRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool SetVaultResourceRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void SetVaultResourceRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultSetResourceReq SetVaultResourceRequest::getBody() const
{
    return body_;
}

void SetVaultResourceRequest::setBody(const VaultSetResourceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetVaultResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetVaultResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


