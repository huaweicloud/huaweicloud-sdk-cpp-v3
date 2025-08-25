

#include "huaweicloud/cce/v3/model/AutopilotClusterInformation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterInformation::AutopilotClusterInformation()
{
    specIsSet_ = false;
    metadataIsSet_ = false;
}

AutopilotClusterInformation::~AutopilotClusterInformation() = default;

void AutopilotClusterInformation::validate()
{
}

web::json::value AutopilotClusterInformation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool AutopilotClusterInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterInformationSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterMetadataForUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


AutopilotClusterInformationSpec AutopilotClusterInformation::getSpec() const
{
    return spec_;
}

void AutopilotClusterInformation::setSpec(const AutopilotClusterInformationSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AutopilotClusterInformation::specIsSet() const
{
    return specIsSet_;
}

void AutopilotClusterInformation::unsetspec()
{
    specIsSet_ = false;
}

AutopilotClusterMetadataForUpdate AutopilotClusterInformation::getMetadata() const
{
    return metadata_;
}

void AutopilotClusterInformation::setMetadata(const AutopilotClusterMetadataForUpdate& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool AutopilotClusterInformation::metadataIsSet() const
{
    return metadataIsSet_;
}

void AutopilotClusterInformation::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


