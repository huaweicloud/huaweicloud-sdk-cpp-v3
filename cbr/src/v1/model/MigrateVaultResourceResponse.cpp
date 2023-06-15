

#include "huaweicloud/cbr/v1/model/MigrateVaultResourceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




MigrateVaultResourceResponse::MigrateVaultResourceResponse()
{
    migratedResourcesIsSet_ = false;
}

MigrateVaultResourceResponse::~MigrateVaultResourceResponse() = default;

void MigrateVaultResourceResponse::validate()
{
}

web::json::value MigrateVaultResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(migratedResourcesIsSet_) {
        val[utility::conversions::to_string_t("migrated_resources")] = ModelBase::toJson(migratedResources_);
    }

    return val;
}

bool MigrateVaultResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("migrated_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrated_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigratedResources(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& MigrateVaultResourceResponse::getMigratedResources()
{
    return migratedResources_;
}

void MigrateVaultResourceResponse::setMigratedResources(const std::vector<std::string>& value)
{
    migratedResources_ = value;
    migratedResourcesIsSet_ = true;
}

bool MigrateVaultResourceResponse::migratedResourcesIsSet() const
{
    return migratedResourcesIsSet_;
}

void MigrateVaultResourceResponse::unsetmigratedResources()
{
    migratedResourcesIsSet_ = false;
}

}
}
}
}
}


