

#include "huaweicloud/cce/v3/model/ShowClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterResponse::ShowClusterResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowClusterResponse::~ShowClusterResponse() = default;

void ShowClusterResponse::validate()
{
}

web::json::value ShowClusterResponse::toJson() const
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
bool ShowClusterResponse::fromJson(const web::json::value& val)
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


std::string ShowClusterResponse::getKind() const
{
    return kind_;
}

void ShowClusterResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowClusterResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowClusterResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowClusterResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowClusterResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowClusterResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowClusterResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

ClusterMetadata ShowClusterResponse::getMetadata() const
{
    return metadata_;
}

void ShowClusterResponse::setMetadata(const ClusterMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowClusterResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowClusterResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

ClusterSpec ShowClusterResponse::getSpec() const
{
    return spec_;
}

void ShowClusterResponse::setSpec(const ClusterSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowClusterResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowClusterResponse::unsetspec()
{
    specIsSet_ = false;
}

ClusterStatus ShowClusterResponse::getStatus() const
{
    return status_;
}

void ShowClusterResponse::setStatus(const ClusterStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


