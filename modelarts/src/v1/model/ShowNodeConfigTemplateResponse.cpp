

#include "huaweicloud/modelarts/v1/model/ShowNodeConfigTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNodeConfigTemplateResponse::ShowNodeConfigTemplateResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

ShowNodeConfigTemplateResponse::~ShowNodeConfigTemplateResponse() = default;

void ShowNodeConfigTemplateResponse::validate()
{
}

web::json::value ShowNodeConfigTemplateResponse::toJson() const
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

    return val;
}
bool ShowNodeConfigTemplateResponse::fromJson(const web::json::value& val)
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
            NodeConfigTemplateMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodeConfigTemplateSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string ShowNodeConfigTemplateResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowNodeConfigTemplateResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowNodeConfigTemplateResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowNodeConfigTemplateResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowNodeConfigTemplateResponse::getKind() const
{
    return kind_;
}

void ShowNodeConfigTemplateResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowNodeConfigTemplateResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowNodeConfigTemplateResponse::unsetkind()
{
    kindIsSet_ = false;
}

NodeConfigTemplateMeta ShowNodeConfigTemplateResponse::getMetadata() const
{
    return metadata_;
}

void ShowNodeConfigTemplateResponse::setMetadata(const NodeConfigTemplateMeta& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowNodeConfigTemplateResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowNodeConfigTemplateResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodeConfigTemplateSpec ShowNodeConfigTemplateResponse::getSpec() const
{
    return spec_;
}

void ShowNodeConfigTemplateResponse::setSpec(const NodeConfigTemplateSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowNodeConfigTemplateResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowNodeConfigTemplateResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


