

#include "huaweicloud/cce/v3/model/CreateAutopilotPreCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotPreCheckResponse::CreateAutopilotPreCheckResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateAutopilotPreCheckResponse::~CreateAutopilotPreCheckResponse() = default;

void CreateAutopilotPreCheckResponse::validate()
{
}

web::json::value CreateAutopilotPreCheckResponse::toJson() const
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
bool CreateAutopilotPreCheckResponse::fromJson(const web::json::value& val)
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
            PrecheckCluserResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PrecheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PrecheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotPreCheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateAutopilotPreCheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAutopilotPreCheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAutopilotPreCheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateAutopilotPreCheckResponse::getKind() const
{
    return kind_;
}

void CreateAutopilotPreCheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateAutopilotPreCheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateAutopilotPreCheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

PrecheckCluserResponseMetadata CreateAutopilotPreCheckResponse::getMetadata() const
{
    return metadata_;
}

void CreateAutopilotPreCheckResponse::setMetadata(const PrecheckCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateAutopilotPreCheckResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateAutopilotPreCheckResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PrecheckSpec CreateAutopilotPreCheckResponse::getSpec() const
{
    return spec_;
}

void CreateAutopilotPreCheckResponse::setSpec(const PrecheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateAutopilotPreCheckResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateAutopilotPreCheckResponse::unsetspec()
{
    specIsSet_ = false;
}

PrecheckStatus CreateAutopilotPreCheckResponse::getStatus() const
{
    return status_;
}

void CreateAutopilotPreCheckResponse::setStatus(const PrecheckStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAutopilotPreCheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAutopilotPreCheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


