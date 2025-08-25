

#include "huaweicloud/cce/v3/model/UpgradeClusterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeClusterRequestBody::UpgradeClusterRequestBody()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

UpgradeClusterRequestBody::~UpgradeClusterRequestBody() = default;

void UpgradeClusterRequestBody::validate()
{
}

web::json::value UpgradeClusterRequestBody::toJson() const
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
bool UpgradeClusterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            UpgradeClusterRequestMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            UpgradeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


UpgradeClusterRequestMetadata UpgradeClusterRequestBody::getMetadata() const
{
    return metadata_;
}

void UpgradeClusterRequestBody::setMetadata(const UpgradeClusterRequestMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeClusterRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeClusterRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeSpec UpgradeClusterRequestBody::getSpec() const
{
    return spec_;
}

void UpgradeClusterRequestBody::setSpec(const UpgradeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeClusterRequestBody::specIsSet() const
{
    return specIsSet_;
}

void UpgradeClusterRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


