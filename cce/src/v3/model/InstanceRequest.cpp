

#include "huaweicloud/cce/v3/model/InstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InstanceRequest::InstanceRequest()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

InstanceRequest::~InstanceRequest() = default;

void InstanceRequest::validate()
{
}

web::json::value InstanceRequest::toJson() const
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
bool InstanceRequest::fromJson(const web::json::value& val)
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
            InstanceRequestSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string InstanceRequest::getKind() const
{
    return kind_;
}

void InstanceRequest::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool InstanceRequest::kindIsSet() const
{
    return kindIsSet_;
}

void InstanceRequest::unsetkind()
{
    kindIsSet_ = false;
}

std::string InstanceRequest::getApiVersion() const
{
    return apiVersion_;
}

void InstanceRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool InstanceRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void InstanceRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonMetadata InstanceRequest::getMetadata() const
{
    return metadata_;
}

void InstanceRequest::setMetadata(const AddonMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool InstanceRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void InstanceRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

InstanceRequestSpec InstanceRequest::getSpec() const
{
    return spec_;
}

void InstanceRequest::setSpec(const InstanceRequestSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool InstanceRequest::specIsSet() const
{
    return specIsSet_;
}

void InstanceRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


