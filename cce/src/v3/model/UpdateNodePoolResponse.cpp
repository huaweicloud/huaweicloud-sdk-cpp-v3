

#include "huaweicloud/cce/v3/model/UpdateNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateNodePoolResponse::UpdateNodePoolResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateNodePoolResponse::~UpdateNodePoolResponse() = default;

void UpdateNodePoolResponse::validate()
{
}

web::json::value UpdateNodePoolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
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
bool UpdateNodePoolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            NodePoolMetadata refVal;
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpdateNodePoolStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateNodePoolResponse::getKind() const
{
    return kind_;
}

void UpdateNodePoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpdateNodePoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpdateNodePoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpdateNodePoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpdateNodePoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpdateNodePoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpdateNodePoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata UpdateNodePoolResponse::getMetadata() const
{
    return metadata_;
}

void UpdateNodePoolResponse::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateNodePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateNodePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec UpdateNodePoolResponse::getSpec() const
{
    return spec_;
}

void UpdateNodePoolResponse::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateNodePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateNodePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

UpdateNodePoolStatus UpdateNodePoolResponse::getStatus() const
{
    return status_;
}

void UpdateNodePoolResponse::setStatus(const UpdateNodePoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNodePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNodePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


