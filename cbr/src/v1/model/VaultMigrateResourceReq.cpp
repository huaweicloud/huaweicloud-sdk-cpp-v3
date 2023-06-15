

#include "huaweicloud/cbr/v1/model/VaultMigrateResourceReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultMigrateResourceReq::VaultMigrateResourceReq()
{
    destinationVaultId_ = "";
    destinationVaultIdIsSet_ = false;
    resourceIdsIsSet_ = false;
}

VaultMigrateResourceReq::~VaultMigrateResourceReq() = default;

void VaultMigrateResourceReq::validate()
{
}

web::json::value VaultMigrateResourceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationVaultIdIsSet_) {
        val[utility::conversions::to_string_t("destination_vault_id")] = ModelBase::toJson(destinationVaultId_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }

    return val;
}

bool VaultMigrateResourceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination_vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    return ok;
}


std::string VaultMigrateResourceReq::getDestinationVaultId() const
{
    return destinationVaultId_;
}

void VaultMigrateResourceReq::setDestinationVaultId(const std::string& value)
{
    destinationVaultId_ = value;
    destinationVaultIdIsSet_ = true;
}

bool VaultMigrateResourceReq::destinationVaultIdIsSet() const
{
    return destinationVaultIdIsSet_;
}

void VaultMigrateResourceReq::unsetdestinationVaultId()
{
    destinationVaultIdIsSet_ = false;
}

std::vector<std::string>& VaultMigrateResourceReq::getResourceIds()
{
    return resourceIds_;
}

void VaultMigrateResourceReq::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool VaultMigrateResourceReq::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void VaultMigrateResourceReq::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

}
}
}
}
}


