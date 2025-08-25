

#include "huaweicloud/cce/v3/model/ClusterInformation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterInformation::ClusterInformation()
{
    specIsSet_ = false;
    metadataIsSet_ = false;
}

ClusterInformation::~ClusterInformation() = default;

void ClusterInformation::validate()
{
}

web::json::value ClusterInformation::toJson() const
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
bool ClusterInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ClusterInformationSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ClusterMetadataForUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


ClusterInformationSpec ClusterInformation::getSpec() const
{
    return spec_;
}

void ClusterInformation::setSpec(const ClusterInformationSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ClusterInformation::specIsSet() const
{
    return specIsSet_;
}

void ClusterInformation::unsetspec()
{
    specIsSet_ = false;
}

ClusterMetadataForUpdate ClusterInformation::getMetadata() const
{
    return metadata_;
}

void ClusterInformation::setMetadata(const ClusterMetadataForUpdate& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ClusterInformation::metadataIsSet() const
{
    return metadataIsSet_;
}

void ClusterInformation::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


