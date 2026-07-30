

#include "huaweicloud/modelarts/v1/model/PoolUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolUpdateRequest::PoolUpdateRequest()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

PoolUpdateRequest::~PoolUpdateRequest() = default;

void PoolUpdateRequest::validate()
{
}

web::json::value PoolUpdateRequest::toJson() const
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
bool PoolUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            PoolMetadataUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PoolSpecUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


PoolMetadataUpdate PoolUpdateRequest::getMetadata() const
{
    return metadata_;
}

void PoolUpdateRequest::setMetadata(const PoolMetadataUpdate& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PoolUpdateRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void PoolUpdateRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

PoolSpecUpdate PoolUpdateRequest::getSpec() const
{
    return spec_;
}

void PoolUpdateRequest::setSpec(const PoolSpecUpdate& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PoolUpdateRequest::specIsSet() const
{
    return specIsSet_;
}

void PoolUpdateRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


