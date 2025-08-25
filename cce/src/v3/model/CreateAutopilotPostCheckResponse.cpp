

#include "huaweicloud/cce/v3/model/CreateAutopilotPostCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotPostCheckResponse::CreateAutopilotPostCheckResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateAutopilotPostCheckResponse::~CreateAutopilotPostCheckResponse() = default;

void CreateAutopilotPostCheckResponse::validate()
{
}

web::json::value CreateAutopilotPostCheckResponse::toJson() const
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
bool CreateAutopilotPostCheckResponse::fromJson(const web::json::value& val)
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
            PostcheckCluserResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PostcheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PostcheckClusterResponseBody_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotPostCheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateAutopilotPostCheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAutopilotPostCheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAutopilotPostCheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateAutopilotPostCheckResponse::getKind() const
{
    return kind_;
}

void CreateAutopilotPostCheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateAutopilotPostCheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateAutopilotPostCheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

PostcheckCluserResponseMetadata CreateAutopilotPostCheckResponse::getMetadata() const
{
    return metadata_;
}

void CreateAutopilotPostCheckResponse::setMetadata(const PostcheckCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateAutopilotPostCheckResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateAutopilotPostCheckResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PostcheckSpec CreateAutopilotPostCheckResponse::getSpec() const
{
    return spec_;
}

void CreateAutopilotPostCheckResponse::setSpec(const PostcheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateAutopilotPostCheckResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateAutopilotPostCheckResponse::unsetspec()
{
    specIsSet_ = false;
}

PostcheckClusterResponseBody_status CreateAutopilotPostCheckResponse::getStatus() const
{
    return status_;
}

void CreateAutopilotPostCheckResponse::setStatus(const PostcheckClusterResponseBody_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAutopilotPostCheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAutopilotPostCheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


