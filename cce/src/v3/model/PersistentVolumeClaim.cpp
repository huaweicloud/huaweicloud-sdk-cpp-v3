

#include "huaweicloud/cce/v3/model/PersistentVolumeClaim.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PersistentVolumeClaim::PersistentVolumeClaim()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

PersistentVolumeClaim::~PersistentVolumeClaim() = default;

void PersistentVolumeClaim::validate()
{
}

web::json::value PersistentVolumeClaim::toJson() const
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
bool PersistentVolumeClaim::fromJson(const web::json::value& val)
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
            PersistentVolumeClaimMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PersistentVolumeClaimSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PersistentVolumeClaimStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PersistentVolumeClaim::getApiVersion() const
{
    return apiVersion_;
}

void PersistentVolumeClaim::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PersistentVolumeClaim::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PersistentVolumeClaim::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PersistentVolumeClaim::getKind() const
{
    return kind_;
}

void PersistentVolumeClaim::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PersistentVolumeClaim::kindIsSet() const
{
    return kindIsSet_;
}

void PersistentVolumeClaim::unsetkind()
{
    kindIsSet_ = false;
}

PersistentVolumeClaimMetadata PersistentVolumeClaim::getMetadata() const
{
    return metadata_;
}

void PersistentVolumeClaim::setMetadata(const PersistentVolumeClaimMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PersistentVolumeClaim::metadataIsSet() const
{
    return metadataIsSet_;
}

void PersistentVolumeClaim::unsetmetadata()
{
    metadataIsSet_ = false;
}

PersistentVolumeClaimSpec PersistentVolumeClaim::getSpec() const
{
    return spec_;
}

void PersistentVolumeClaim::setSpec(const PersistentVolumeClaimSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PersistentVolumeClaim::specIsSet() const
{
    return specIsSet_;
}

void PersistentVolumeClaim::unsetspec()
{
    specIsSet_ = false;
}

PersistentVolumeClaimStatus PersistentVolumeClaim::getStatus() const
{
    return status_;
}

void PersistentVolumeClaim::setStatus(const PersistentVolumeClaimStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PersistentVolumeClaim::statusIsSet() const
{
    return statusIsSet_;
}

void PersistentVolumeClaim::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


