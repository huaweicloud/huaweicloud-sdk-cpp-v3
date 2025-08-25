

#include "huaweicloud/cce/v3/model/AddonTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonTemplate::AddonTemplate()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

AddonTemplate::~AddonTemplate() = default;

void AddonTemplate::validate()
{
}

web::json::value AddonTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool AddonTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            AddonMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            Templatespec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string AddonTemplate::getKind() const
{
    return kind_;
}

void AddonTemplate::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AddonTemplate::kindIsSet() const
{
    return kindIsSet_;
}

void AddonTemplate::unsetkind()
{
    kindIsSet_ = false;
}

std::string AddonTemplate::getApiVersion() const
{
    return apiVersion_;
}

void AddonTemplate::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AddonTemplate::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AddonTemplate::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonMetadata AddonTemplate::getMetadata() const
{
    return metadata_;
}

void AddonTemplate::setMetadata(const AddonMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool AddonTemplate::metadataIsSet() const
{
    return metadataIsSet_;
}

void AddonTemplate::unsetmetadata()
{
    metadataIsSet_ = false;
}

Templatespec AddonTemplate::getSpec() const
{
    return spec_;
}

void AddonTemplate::setSpec(const Templatespec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AddonTemplate::specIsSet() const
{
    return specIsSet_;
}

void AddonTemplate::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


