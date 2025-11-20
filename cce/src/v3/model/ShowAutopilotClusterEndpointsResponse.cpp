

#include "huaweicloud/cce/v3/model/ShowAutopilotClusterEndpointsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotClusterEndpointsResponse::ShowAutopilotClusterEndpointsResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowAutopilotClusterEndpointsResponse::~ShowAutopilotClusterEndpointsResponse() = default;

void ShowAutopilotClusterEndpointsResponse::validate()
{
}

web::json::value ShowAutopilotClusterEndpointsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowAutopilotClusterEndpointsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            OpenAPISpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            OpenAPIResponse_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


Metadata ShowAutopilotClusterEndpointsResponse::getMetadata() const
{
    return metadata_;
}

void ShowAutopilotClusterEndpointsResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowAutopilotClusterEndpointsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowAutopilotClusterEndpointsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

OpenAPISpec ShowAutopilotClusterEndpointsResponse::getSpec() const
{
    return spec_;
}

void ShowAutopilotClusterEndpointsResponse::setSpec(const OpenAPISpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowAutopilotClusterEndpointsResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowAutopilotClusterEndpointsResponse::unsetspec()
{
    specIsSet_ = false;
}

OpenAPIResponse_status ShowAutopilotClusterEndpointsResponse::getStatus() const
{
    return status_;
}

void ShowAutopilotClusterEndpointsResponse::setStatus(const OpenAPIResponse_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutopilotClusterEndpointsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutopilotClusterEndpointsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


