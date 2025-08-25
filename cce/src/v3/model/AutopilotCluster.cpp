

#include "huaweicloud/cce/v3/model/AutopilotCluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotCluster::AutopilotCluster()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

AutopilotCluster::~AutopilotCluster() = default;

void AutopilotCluster::validate()
{
}

web::json::value AutopilotCluster::toJson() const
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
bool AutopilotCluster::fromJson(const web::json::value& val)
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
            AutopilotClusterMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AutopilotCluster::getKind() const
{
    return kind_;
}

void AutopilotCluster::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AutopilotCluster::kindIsSet() const
{
    return kindIsSet_;
}

void AutopilotCluster::unsetkind()
{
    kindIsSet_ = false;
}

std::string AutopilotCluster::getApiVersion() const
{
    return apiVersion_;
}

void AutopilotCluster::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AutopilotCluster::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AutopilotCluster::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AutopilotClusterMetadata AutopilotCluster::getMetadata() const
{
    return metadata_;
}

void AutopilotCluster::setMetadata(const AutopilotClusterMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool AutopilotCluster::metadataIsSet() const
{
    return metadataIsSet_;
}

void AutopilotCluster::unsetmetadata()
{
    metadataIsSet_ = false;
}

AutopilotClusterSpec AutopilotCluster::getSpec() const
{
    return spec_;
}

void AutopilotCluster::setSpec(const AutopilotClusterSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AutopilotCluster::specIsSet() const
{
    return specIsSet_;
}

void AutopilotCluster::unsetspec()
{
    specIsSet_ = false;
}

AutopilotClusterStatus AutopilotCluster::getStatus() const
{
    return status_;
}

void AutopilotCluster::setStatus(const AutopilotClusterStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AutopilotCluster::statusIsSet() const
{
    return statusIsSet_;
}

void AutopilotCluster::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


