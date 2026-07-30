

#include "huaweicloud/modelarts/v1/model/ShowPoolNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolNodeResponse::ShowPoolNodeResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowPoolNodeResponse::~ShowPoolNodeResponse() = default;

void ShowPoolNodeResponse::validate()
{
}

web::json::value ShowPoolNodeResponse::toJson() const
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
bool ShowPoolNodeResponse::fromJson(const web::json::value& val)
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
            NodeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NodeStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowPoolNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPoolNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPoolNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPoolNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowPoolNodeResponse::getKind() const
{
    return kind_;
}

void ShowPoolNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPoolNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPoolNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

NodeMetadata ShowPoolNodeResponse::getMetadata() const
{
    return metadata_;
}

void ShowPoolNodeResponse::setMetadata(const NodeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowPoolNodeResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowPoolNodeResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeSpec ShowPoolNodeResponse::getSpec() const
{
    return spec_;
}

void ShowPoolNodeResponse::setSpec(const NodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowPoolNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowPoolNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeStatus ShowPoolNodeResponse::getStatus() const
{
    return status_;
}

void ShowPoolNodeResponse::setStatus(const NodeStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPoolNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPoolNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


