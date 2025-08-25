

#include "huaweicloud/cce/v3/model/ShowClusterEndpointsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterEndpointsResponse::ShowClusterEndpointsResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowClusterEndpointsResponse::~ShowClusterEndpointsResponse() = default;

void ShowClusterEndpointsResponse::validate()
{
}

web::json::value ShowClusterEndpointsResponse::toJson() const
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
bool ShowClusterEndpointsResponse::fromJson(const web::json::value& val)
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
            MasterEIPResponse_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


Metadata ShowClusterEndpointsResponse::getMetadata() const
{
    return metadata_;
}

void ShowClusterEndpointsResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowClusterEndpointsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowClusterEndpointsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

OpenAPISpec ShowClusterEndpointsResponse::getSpec() const
{
    return spec_;
}

void ShowClusterEndpointsResponse::setSpec(const OpenAPISpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowClusterEndpointsResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowClusterEndpointsResponse::unsetspec()
{
    specIsSet_ = false;
}

MasterEIPResponse_status ShowClusterEndpointsResponse::getStatus() const
{
    return status_;
}

void ShowClusterEndpointsResponse::setStatus(const MasterEIPResponse_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowClusterEndpointsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowClusterEndpointsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


