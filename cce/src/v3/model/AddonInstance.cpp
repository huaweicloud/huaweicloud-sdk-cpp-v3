

#include "huaweicloud/cce/v3/model/AddonInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonInstance::AddonInstance()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

AddonInstance::~AddonInstance() = default;

void AddonInstance::validate()
{
}

web::json::value AddonInstance::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AddonInstance::fromJson(const web::json::value& val)
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
            InstanceSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            AddonInstanceStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AddonInstance::getKind() const
{
    return kind_;
}

void AddonInstance::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AddonInstance::kindIsSet() const
{
    return kindIsSet_;
}

void AddonInstance::unsetkind()
{
    kindIsSet_ = false;
}

std::string AddonInstance::getApiVersion() const
{
    return apiVersion_;
}

void AddonInstance::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AddonInstance::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AddonInstance::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonMetadata AddonInstance::getMetadata() const
{
    return metadata_;
}

void AddonInstance::setMetadata(const AddonMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool AddonInstance::metadataIsSet() const
{
    return metadataIsSet_;
}

void AddonInstance::unsetmetadata()
{
    metadataIsSet_ = false;
}

InstanceSpec AddonInstance::getSpec() const
{
    return spec_;
}

void AddonInstance::setSpec(const InstanceSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AddonInstance::specIsSet() const
{
    return specIsSet_;
}

void AddonInstance::unsetspec()
{
    specIsSet_ = false;
}

AddonInstanceStatus AddonInstance::getStatus() const
{
    return status_;
}

void AddonInstance::setStatus(const AddonInstanceStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddonInstance::statusIsSet() const
{
    return statusIsSet_;
}

void AddonInstance::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


