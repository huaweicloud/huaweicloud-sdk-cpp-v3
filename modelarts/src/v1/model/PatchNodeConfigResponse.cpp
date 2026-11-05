

#include "huaweicloud/modelarts/v1/model/PatchNodeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodeConfigResponse::PatchNodeConfigResponse()
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

PatchNodeConfigResponse::~PatchNodeConfigResponse() = default;

void PatchNodeConfigResponse::validate()
{
}

web::json::value PatchNodeConfigResponse::toJson() const
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
bool PatchNodeConfigResponse::fromJson(const web::json::value& val)
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


std::string PatchNodeConfigResponse::getApiVersion() const
{
    return apiVersion_;
}

void PatchNodeConfigResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PatchNodeConfigResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PatchNodeConfigResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PatchNodeConfigResponse::getKind() const
{
    return kind_;
}

void PatchNodeConfigResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PatchNodeConfigResponse::kindIsSet() const
{
    return kindIsSet_;
}

void PatchNodeConfigResponse::unsetkind()
{
    kindIsSet_ = false;
}

NodeconfigMeta PatchNodeConfigResponse::getMetadata() const
{
    return metadata_;
}

void PatchNodeConfigResponse::setMetadata(const NodeconfigMeta& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PatchNodeConfigResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void PatchNodeConfigResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeconfigSpec PatchNodeConfigResponse::getSpec() const
{
    return spec_;
}

void PatchNodeConfigResponse::setSpec(const NodeconfigSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PatchNodeConfigResponse::specIsSet() const
{
    return specIsSet_;
}

void PatchNodeConfigResponse::unsetspec()
{
    specIsSet_ = false;
}

NodeconfigStatus PatchNodeConfigResponse::getStatus() const
{
    return status_;
}

void PatchNodeConfigResponse::setStatus(const NodeconfigStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PatchNodeConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void PatchNodeConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PatchNodeConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void PatchNodeConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool PatchNodeConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void PatchNodeConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


