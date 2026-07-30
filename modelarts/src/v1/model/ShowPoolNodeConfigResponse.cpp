

#include "huaweicloud/modelarts/v1/model/ShowPoolNodeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolNodeConfigResponse::ShowPoolNodeConfigResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPoolNodeConfigResponse::~ShowPoolNodeConfigResponse() = default;

void ShowPoolNodeConfigResponse::validate()
{
}

web::json::value ShowPoolNodeConfigResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPoolNodeConfigResponse::fromJson(const web::json::value& val)
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
            NodeconfigMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodeconfigSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NodeconfigStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowPoolNodeConfigResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPoolNodeConfigResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPoolNodeConfigResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPoolNodeConfigResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowPoolNodeConfigResponse::getKind() const
{
    return kind_;
}

void ShowPoolNodeConfigResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPoolNodeConfigResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPoolNodeConfigResponse::unsetkind()
{
    kindIsSet_ = false;
}

NodeconfigMeta ShowPoolNodeConfigResponse::getMetadata() const
{
    return metadata_;
}

void ShowPoolNodeConfigResponse::setMetadata(const NodeconfigMeta& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowPoolNodeConfigResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowPoolNodeConfigResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeconfigSpec ShowPoolNodeConfigResponse::getSpec() const
{
    return spec_;
}

void ShowPoolNodeConfigResponse::setSpec(const NodeconfigSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowPoolNodeConfigResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowPoolNodeConfigResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeconfigStatus ShowPoolNodeConfigResponse::getStatus() const
{
    return status_;
}

void ShowPoolNodeConfigResponse::setStatus(const NodeconfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPoolNodeConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPoolNodeConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowPoolNodeConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPoolNodeConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPoolNodeConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPoolNodeConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


