

#include "huaweicloud/cce/v3/model/Cluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Cluster::Cluster()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

Cluster::~Cluster() = default;

void Cluster::validate()
{
}

web::json::value Cluster::toJson() const
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
bool Cluster::fromJson(const web::json::value& val)
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


std::string Cluster::getKind() const
{
    return kind_;
}

void Cluster::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool Cluster::kindIsSet() const
{
    return kindIsSet_;
}

void Cluster::unsetkind()
{
    kindIsSet_ = false;
}

std::string Cluster::getApiVersion() const
{
    return apiVersion_;
}

void Cluster::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool Cluster::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void Cluster::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

ClusterMetadata Cluster::getMetadata() const
{
    return metadata_;
}

void Cluster::setMetadata(const ClusterMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Cluster::metadataIsSet() const
{
    return metadataIsSet_;
}

void Cluster::unsetmetadata()
{
    metadataIsSet_ = false;
}

ClusterSpec Cluster::getSpec() const
{
    return spec_;
}

void Cluster::setSpec(const ClusterSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool Cluster::specIsSet() const
{
    return specIsSet_;
}

void Cluster::unsetspec()
{
    specIsSet_ = false;
}

ClusterStatus Cluster::getStatus() const
{
    return status_;
}

void Cluster::setStatus(const ClusterStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Cluster::statusIsSet() const
{
    return statusIsSet_;
}

void Cluster::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


