

#include "huaweicloud/cce/v3/model/UpdateClusterEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterEipResponse::UpdateClusterEipResponse()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateClusterEipResponse::~UpdateClusterEipResponse() = default;

void UpdateClusterEipResponse::validate()
{
}

web::json::value UpdateClusterEipResponse::toJson() const
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
bool UpdateClusterEipResponse::fromJson(const web::json::value& val)
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


Metadata UpdateClusterEipResponse::getMetadata() const
{
    return metadata_;
}

void UpdateClusterEipResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateClusterEipResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateClusterEipResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

MasterEIPResponseSpec UpdateClusterEipResponse::getSpec() const
{
    return spec_;
}

void UpdateClusterEipResponse::setSpec(const MasterEIPResponseSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateClusterEipResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateClusterEipResponse::unsetspec()
{
    specIsSet_ = false;
}

MasterEIPResponse_status UpdateClusterEipResponse::getStatus() const
{
    return status_;
}

void UpdateClusterEipResponse::setStatus(const MasterEIPResponse_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateClusterEipResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateClusterEipResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


