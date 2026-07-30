

#include "huaweicloud/modelarts/v1/model/PatchNodePoolRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodePoolRequestBody::PatchNodePoolRequestBody()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

PatchNodePoolRequestBody::~PatchNodePoolRequestBody() = default;

void PatchNodePoolRequestBody::validate()
{
}

web::json::value PatchNodePoolRequestBody::toJson() const
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
bool PatchNodePoolRequestBody::fromJson(const web::json::value& val)
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


PatchNodePoolMetaVO PatchNodePoolRequestBody::getMetadata() const
{
    return metadata_;
}

void PatchNodePoolRequestBody::setMetadata(const PatchNodePoolMetaVO& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PatchNodePoolRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void PatchNodePoolRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec PatchNodePoolRequestBody::getSpec() const
{
    return spec_;
}

void PatchNodePoolRequestBody::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PatchNodePoolRequestBody::specIsSet() const
{
    return specIsSet_;
}

void PatchNodePoolRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


