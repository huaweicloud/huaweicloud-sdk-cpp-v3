

#include "huaweicloud/cce/v3/model/UpdateClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterResponse::UpdateClusterResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateClusterResponse::~UpdateClusterResponse() = default;

void UpdateClusterResponse::validate()
{
}

web::json::value UpdateClusterResponse::toJson() const
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
bool UpdateClusterResponse::fromJson(const web::json::value& val)
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
            ClusterMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ClusterSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ClusterStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateClusterResponse::getKind() const
{
    return kind_;
}

void UpdateClusterResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpdateClusterResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpdateClusterResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpdateClusterResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpdateClusterResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpdateClusterResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpdateClusterResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

ClusterMetadata UpdateClusterResponse::getMetadata() const
{
    return metadata_;
}

void UpdateClusterResponse::setMetadata(const ClusterMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateClusterResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateClusterResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

ClusterSpec UpdateClusterResponse::getSpec() const
{
    return spec_;
}

void UpdateClusterResponse::setSpec(const ClusterSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateClusterResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateClusterResponse::unsetspec()
{
    specIsSet_ = false;
}

ClusterStatus UpdateClusterResponse::getStatus() const
{
    return status_;
}

void UpdateClusterResponse::setStatus(const ClusterStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


