

#include "huaweicloud/cce/v3/model/UpdateAutopilotClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotClusterResponse::UpdateAutopilotClusterResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateAutopilotClusterResponse::~UpdateAutopilotClusterResponse() = default;

void UpdateAutopilotClusterResponse::validate()
{
}

web::json::value UpdateAutopilotClusterResponse::toJson() const
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
bool UpdateAutopilotClusterResponse::fromJson(const web::json::value& val)
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


std::string UpdateAutopilotClusterResponse::getKind() const
{
    return kind_;
}

void UpdateAutopilotClusterResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpdateAutopilotClusterResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpdateAutopilotClusterResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpdateAutopilotClusterResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpdateAutopilotClusterResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpdateAutopilotClusterResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpdateAutopilotClusterResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AutopilotClusterMetadata UpdateAutopilotClusterResponse::getMetadata() const
{
    return metadata_;
}

void UpdateAutopilotClusterResponse::setMetadata(const AutopilotClusterMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateAutopilotClusterResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateAutopilotClusterResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

AutopilotClusterSpec UpdateAutopilotClusterResponse::getSpec() const
{
    return spec_;
}

void UpdateAutopilotClusterResponse::setSpec(const AutopilotClusterSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateAutopilotClusterResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateAutopilotClusterResponse::unsetspec()
{
    specIsSet_ = false;
}

AutopilotClusterStatus UpdateAutopilotClusterResponse::getStatus() const
{
    return status_;
}

void UpdateAutopilotClusterResponse::setStatus(const AutopilotClusterStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAutopilotClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAutopilotClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


