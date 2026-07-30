

#include "huaweicloud/modelarts/v1/model/ResourceFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavor::ResourceFlavor()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ResourceFlavor::~ResourceFlavor() = default;

void ResourceFlavor::validate()
{
}

web::json::value ResourceFlavor::toJson() const
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
bool ResourceFlavor::fromJson(const web::json::value& val)
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
            ResourceFlavorMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ResourceFlavorSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            ResourceFlavorStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavor::getApiVersion() const
{
    return apiVersion_;
}

void ResourceFlavor::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ResourceFlavor::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ResourceFlavor::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ResourceFlavor::getKind() const
{
    return kind_;
}

void ResourceFlavor::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ResourceFlavor::kindIsSet() const
{
    return kindIsSet_;
}

void ResourceFlavor::unsetkind()
{
    kindIsSet_ = false;
}

ResourceFlavorMetadata ResourceFlavor::getMetadata() const
{
    return metadata_;
}

void ResourceFlavor::setMetadata(const ResourceFlavorMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ResourceFlavor::metadataIsSet() const
{
    return metadataIsSet_;
}

void ResourceFlavor::unsetmetadata()
{
    metadataIsSet_ = false;
}

ResourceFlavorSpec ResourceFlavor::getSpec() const
{
    return spec_;
}

void ResourceFlavor::setSpec(const ResourceFlavorSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ResourceFlavor::specIsSet() const
{
    return specIsSet_;
}

void ResourceFlavor::unsetspec()
{
    specIsSet_ = false;
}

ResourceFlavorStatus ResourceFlavor::getStatus() const
{
    return status_;
}

void ResourceFlavor::setStatus(const ResourceFlavorStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResourceFlavor::statusIsSet() const
{
    return statusIsSet_;
}

void ResourceFlavor::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


