

#include "huaweicloud/modelarts/v1/model/ShowPoolNodeConfigTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolNodeConfigTemplateResponse::ShowPoolNodeConfigTemplateResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPoolNodeConfigTemplateResponse::~ShowPoolNodeConfigTemplateResponse() = default;

void ShowPoolNodeConfigTemplateResponse::validate()
{
}

web::json::value ShowPoolNodeConfigTemplateResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPoolNodeConfigTemplateResponse::fromJson(const web::json::value& val)
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
            NodeconfigtemplateMetaV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodeconfigtemplatesSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
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


std::string ShowPoolNodeConfigTemplateResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPoolNodeConfigTemplateResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPoolNodeConfigTemplateResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPoolNodeConfigTemplateResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowPoolNodeConfigTemplateResponse::getKind() const
{
    return kind_;
}

void ShowPoolNodeConfigTemplateResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPoolNodeConfigTemplateResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPoolNodeConfigTemplateResponse::unsetkind()
{
    kindIsSet_ = false;
}

NodeconfigtemplateMetaV2 ShowPoolNodeConfigTemplateResponse::getMetadata() const
{
    return metadata_;
}

void ShowPoolNodeConfigTemplateResponse::setMetadata(const NodeconfigtemplateMetaV2& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowPoolNodeConfigTemplateResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowPoolNodeConfigTemplateResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeconfigtemplatesSpec ShowPoolNodeConfigTemplateResponse::getSpec() const
{
    return spec_;
}

void ShowPoolNodeConfigTemplateResponse::setSpec(const NodeconfigtemplatesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowPoolNodeConfigTemplateResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowPoolNodeConfigTemplateResponse::unsetspec()
{
    specIsSet_ = false;
}

std::string ShowPoolNodeConfigTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPoolNodeConfigTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPoolNodeConfigTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPoolNodeConfigTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


