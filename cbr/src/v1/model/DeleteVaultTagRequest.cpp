

#include "huaweicloud/cbr/v1/model/DeleteVaultTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DeleteVaultTagRequest::DeleteVaultTagRequest()
{
    key_ = "";
    keyIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

DeleteVaultTagRequest::~DeleteVaultTagRequest() = default;

void DeleteVaultTagRequest::validate()
{
}

web::json::value DeleteVaultTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}
bool DeleteVaultTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
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


std::string DeleteVaultTagRequest::getKey() const
{
    return key_;
}

void DeleteVaultTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteVaultTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteVaultTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteVaultTagRequest::getVaultId() const
{
    return vaultId_;
}

void DeleteVaultTagRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool DeleteVaultTagRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void DeleteVaultTagRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


