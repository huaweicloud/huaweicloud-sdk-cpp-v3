

#include "huaweicloud/cce/v3/model/ClusterNodeInformation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterNodeInformation::ClusterNodeInformation()
{
    metadataIsSet_ = false;
}

ClusterNodeInformation::~ClusterNodeInformation() = default;

void ClusterNodeInformation::validate()
{
}

web::json::value ClusterNodeInformation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool ClusterNodeInformation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ClusterNodeInformationMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


ClusterNodeInformationMetadata ClusterNodeInformation::getMetadata() const
{
    return metadata_;
}

void ClusterNodeInformation::setMetadata(const ClusterNodeInformationMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ClusterNodeInformation::metadataIsSet() const
{
    return metadataIsSet_;
}

void ClusterNodeInformation::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


