

#include "huaweicloud/cce/v3/model/ShowNodePoolConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodePoolConfigurationsResponse::ShowNodePoolConfigurationsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowNodePoolConfigurationsResponse::~ShowNodePoolConfigurationsResponse() = default;

void ShowNodePoolConfigurationsResponse::validate()
{
}

web::json::value ShowNodePoolConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
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
bool ShowNodePoolConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ConfigurationMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ClusterConfigurationsSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowNodePoolConfigurationsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowNodePoolConfigurationsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowNodePoolConfigurationsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowNodePoolConfigurationsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowNodePoolConfigurationsResponse::getKind() const
{
    return kind_;
}

void ShowNodePoolConfigurationsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowNodePoolConfigurationsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowNodePoolConfigurationsResponse::unsetkind()
{
    kindIsSet_ = false;
}

ConfigurationMetadata ShowNodePoolConfigurationsResponse::getMetadata() const
{
    return metadata_;
}

void ShowNodePoolConfigurationsResponse::setMetadata(const ConfigurationMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowNodePoolConfigurationsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowNodePoolConfigurationsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

ClusterConfigurationsSpec ShowNodePoolConfigurationsResponse::getSpec() const
{
    return spec_;
}

void ShowNodePoolConfigurationsResponse::setSpec(const ClusterConfigurationsSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowNodePoolConfigurationsResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowNodePoolConfigurationsResponse::unsetspec()
{
    specIsSet_ = false;
}

Object ShowNodePoolConfigurationsResponse::getStatus() const
{
    return status_;
}

void ShowNodePoolConfigurationsResponse::setStatus(const Object& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowNodePoolConfigurationsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowNodePoolConfigurationsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


