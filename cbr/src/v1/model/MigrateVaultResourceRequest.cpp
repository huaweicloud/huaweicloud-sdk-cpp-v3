

#include "huaweicloud/cbr/v1/model/MigrateVaultResourceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




MigrateVaultResourceRequest::MigrateVaultResourceRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateVaultResourceRequest::~MigrateVaultResourceRequest() = default;

void MigrateVaultResourceRequest::validate()
{
}

web::json::value MigrateVaultResourceRequest::toJson() const
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

bool MigrateVaultResourceRequest::fromJson(const web::json::value& val)
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
            VaultMigrateResourceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MigrateVaultResourceRequest::getVaultId() const
{
    return vaultId_;
}

void MigrateVaultResourceRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool MigrateVaultResourceRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void MigrateVaultResourceRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultMigrateResourceReq MigrateVaultResourceRequest::getBody() const
{
    return body_;
}

void MigrateVaultResourceRequest::setBody(const VaultMigrateResourceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateVaultResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateVaultResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


