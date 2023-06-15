

#include "huaweicloud/cbr/v1/model/AddVaultResourceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddVaultResourceRequest::AddVaultResourceRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddVaultResourceRequest::~AddVaultResourceRequest() = default;

void AddVaultResourceRequest::validate()
{
}

web::json::value AddVaultResourceRequest::toJson() const
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

bool AddVaultResourceRequest::fromJson(const web::json::value& val)
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
            VaultAddResourceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddVaultResourceRequest::getVaultId() const
{
    return vaultId_;
}

void AddVaultResourceRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool AddVaultResourceRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void AddVaultResourceRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultAddResourceReq AddVaultResourceRequest::getBody() const
{
    return body_;
}

void AddVaultResourceRequest::setBody(const VaultAddResourceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddVaultResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddVaultResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


