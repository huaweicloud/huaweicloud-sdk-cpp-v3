

#include "huaweicloud/modelarts/v1/model/PluginTemplateV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginTemplateV2::PluginTemplateV2()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

PluginTemplateV2::~PluginTemplateV2() = default;

void PluginTemplateV2::validate()
{
}

web::json::value PluginTemplateV2::toJson() const
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
bool PluginTemplateV2::fromJson(const web::json::value& val)
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
            PluginTemplateSpecV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string PluginTemplateV2::getApiVersion() const
{
    return apiVersion_;
}

void PluginTemplateV2::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PluginTemplateV2::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PluginTemplateV2::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PluginTemplateV2::getKind() const
{
    return kind_;
}

void PluginTemplateV2::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PluginTemplateV2::kindIsSet() const
{
    return kindIsSet_;
}

void PluginTemplateV2::unsetkind()
{
    kindIsSet_ = false;
}

PluginTemplateMetadata PluginTemplateV2::getMetadata() const
{
    return metadata_;
}

void PluginTemplateV2::setMetadata(const PluginTemplateMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PluginTemplateV2::metadataIsSet() const
{
    return metadataIsSet_;
}

void PluginTemplateV2::unsetmetadata()
{
    metadataIsSet_ = false;
}

PluginTemplateSpecV2 PluginTemplateV2::getSpec() const
{
    return spec_;
}

void PluginTemplateV2::setSpec(const PluginTemplateSpecV2& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PluginTemplateV2::specIsSet() const
{
    return specIsSet_;
}

void PluginTemplateV2::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


