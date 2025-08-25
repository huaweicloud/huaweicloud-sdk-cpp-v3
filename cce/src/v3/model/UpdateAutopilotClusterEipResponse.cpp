

#include "huaweicloud/cce/v3/model/UpdateAutopilotClusterEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotClusterEipResponse::UpdateAutopilotClusterEipResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateAutopilotClusterEipResponse::~UpdateAutopilotClusterEipResponse() = default;

void UpdateAutopilotClusterEipResponse::validate()
{
}

web::json::value UpdateAutopilotClusterEipResponse::toJson() const
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
bool UpdateAutopilotClusterEipResponse::fromJson(const web::json::value& val)
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
            MasterEIPResponseSpec refVal;
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


Metadata UpdateAutopilotClusterEipResponse::getMetadata() const
{
    return metadata_;
}

void UpdateAutopilotClusterEipResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateAutopilotClusterEipResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateAutopilotClusterEipResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

MasterEIPResponseSpec UpdateAutopilotClusterEipResponse::getSpec() const
{
    return spec_;
}

void UpdateAutopilotClusterEipResponse::setSpec(const MasterEIPResponseSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateAutopilotClusterEipResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateAutopilotClusterEipResponse::unsetspec()
{
    specIsSet_ = false;
}

MasterEIPResponse_status UpdateAutopilotClusterEipResponse::getStatus() const
{
    return status_;
}

void UpdateAutopilotClusterEipResponse::setStatus(const MasterEIPResponse_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAutopilotClusterEipResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAutopilotClusterEipResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


