

#include "huaweicloud/cbr/v1/model/CreateVaultTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateVaultTagsRequest::CreateVaultTagsRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVaultTagsRequest::~CreateVaultTagsRequest() = default;

void CreateVaultTagsRequest::validate()
{
}

web::json::value CreateVaultTagsRequest::toJson() const
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

bool CreateVaultTagsRequest::fromJson(const web::json::value& val)
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
            VaultTagsCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVaultTagsRequest::getVaultId() const
{
    return vaultId_;
}

void CreateVaultTagsRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool CreateVaultTagsRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void CreateVaultTagsRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

VaultTagsCreateReq CreateVaultTagsRequest::getBody() const
{
    return body_;
}

void CreateVaultTagsRequest::setBody(const VaultTagsCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVaultTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVaultTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


