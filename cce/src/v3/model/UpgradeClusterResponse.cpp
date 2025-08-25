

#include "huaweicloud/cce/v3/model/UpgradeClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeClusterResponse::UpgradeClusterResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

UpgradeClusterResponse::~UpgradeClusterResponse() = default;

void UpgradeClusterResponse::validate()
{
}

web::json::value UpgradeClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool UpgradeClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            UpgradeCluserResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            UpgradeResponseSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


UpgradeCluserResponseMetadata UpgradeClusterResponse::getMetadata() const
{
    return metadata_;
}

void UpgradeClusterResponse::setMetadata(const UpgradeCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeClusterResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeClusterResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeResponseSpec UpgradeClusterResponse::getSpec() const
{
    return spec_;
}

void UpgradeClusterResponse::setSpec(const UpgradeResponseSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeClusterResponse::specIsSet() const
{
    return specIsSet_;
}

void UpgradeClusterResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


