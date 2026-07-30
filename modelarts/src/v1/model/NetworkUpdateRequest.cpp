

#include "huaweicloud/modelarts/v1/model/NetworkUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkUpdateRequest::NetworkUpdateRequest()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

NetworkUpdateRequest::~NetworkUpdateRequest() = default;

void NetworkUpdateRequest::validate()
{
}

web::json::value NetworkUpdateRequest::toJson() const
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
bool NetworkUpdateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            NetworkMetadataUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NetworkSpecUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


NetworkMetadataUpdate NetworkUpdateRequest::getMetadata() const
{
    return metadata_;
}

void NetworkUpdateRequest::setMetadata(const NetworkMetadataUpdate& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NetworkUpdateRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void NetworkUpdateRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpecUpdate NetworkUpdateRequest::getSpec() const
{
    return spec_;
}

void NetworkUpdateRequest::setSpec(const NetworkSpecUpdate& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NetworkUpdateRequest::specIsSet() const
{
    return specIsSet_;
}

void NetworkUpdateRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


