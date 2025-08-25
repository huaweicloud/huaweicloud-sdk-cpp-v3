

#include "huaweicloud/cce/v3/model/UpgradeAutopilotClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeAutopilotClusterResponse::UpgradeAutopilotClusterResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

UpgradeAutopilotClusterResponse::~UpgradeAutopilotClusterResponse() = default;

void UpgradeAutopilotClusterResponse::validate()
{
}

web::json::value UpgradeAutopilotClusterResponse::toJson() const
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
bool UpgradeAutopilotClusterResponse::fromJson(const web::json::value& val)
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


UpgradeCluserResponseMetadata UpgradeAutopilotClusterResponse::getMetadata() const
{
    return metadata_;
}

void UpgradeAutopilotClusterResponse::setMetadata(const UpgradeCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeAutopilotClusterResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeAutopilotClusterResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeResponseSpec UpgradeAutopilotClusterResponse::getSpec() const
{
    return spec_;
}

void UpgradeAutopilotClusterResponse::setSpec(const UpgradeResponseSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeAutopilotClusterResponse::specIsSet() const
{
    return specIsSet_;
}

void UpgradeAutopilotClusterResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


