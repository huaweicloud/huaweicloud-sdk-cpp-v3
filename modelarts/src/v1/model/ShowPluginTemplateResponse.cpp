

#include "huaweicloud/modelarts/v1/model/ShowPluginTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPluginTemplateResponse::ShowPluginTemplateResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

ShowPluginTemplateResponse::~ShowPluginTemplateResponse() = default;

void ShowPluginTemplateResponse::validate()
{
}

web::json::value ShowPluginTemplateResponse::toJson() const
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
bool ShowPluginTemplateResponse::fromJson(const web::json::value& val)
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
            PluginTemplateMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PluginTemplateSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string ShowPluginTemplateResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPluginTemplateResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPluginTemplateResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPluginTemplateResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowPluginTemplateResponse::getKind() const
{
    return kind_;
}

void ShowPluginTemplateResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPluginTemplateResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPluginTemplateResponse::unsetkind()
{
    kindIsSet_ = false;
}

PluginTemplateMetadata ShowPluginTemplateResponse::getMetadata() const
{
    return metadata_;
}

void ShowPluginTemplateResponse::setMetadata(const PluginTemplateMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowPluginTemplateResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowPluginTemplateResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PluginTemplateSpec ShowPluginTemplateResponse::getSpec() const
{
    return spec_;
}

void ShowPluginTemplateResponse::setSpec(const PluginTemplateSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowPluginTemplateResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowPluginTemplateResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


