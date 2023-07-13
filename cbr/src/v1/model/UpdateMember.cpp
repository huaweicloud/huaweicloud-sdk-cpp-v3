

#include "huaweicloud/cbr/v1/model/UpdateMember.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateMember::UpdateMember()
{
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

UpdateMember::~UpdateMember() = default;

void UpdateMember::validate()
{
}

web::json::value UpdateMember::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool UpdateMember::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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

std::string UpdateMember::getStatus() const
{
    return status_;
}

void UpdateMember::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateMember::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateMember::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateMember::getVaultId() const
{
    return vaultId_;
}

void UpdateMember::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool UpdateMember::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void UpdateMember::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


