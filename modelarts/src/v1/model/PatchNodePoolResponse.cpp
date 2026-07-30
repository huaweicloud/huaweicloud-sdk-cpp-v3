

#include "huaweicloud/modelarts/v1/model/PatchNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodePoolResponse::PatchNodePoolResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

PatchNodePoolResponse::~PatchNodePoolResponse() = default;

void PatchNodePoolResponse::validate()
{
}

web::json::value PatchNodePoolResponse::toJson() const
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
bool PatchNodePoolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            PatchNodePoolMetaVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodePoolSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


PatchNodePoolMetaVO PatchNodePoolResponse::getMetadata() const
{
    return metadata_;
}

void PatchNodePoolResponse::setMetadata(const PatchNodePoolMetaVO& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PatchNodePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void PatchNodePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec PatchNodePoolResponse::getSpec() const
{
    return spec_;
}

void PatchNodePoolResponse::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PatchNodePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void PatchNodePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


