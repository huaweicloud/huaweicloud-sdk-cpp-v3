

#include "huaweicloud/cce/v3/model/DeleteCloudPersistentVolumeClaimsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteCloudPersistentVolumeClaimsResponse::DeleteCloudPersistentVolumeClaimsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

DeleteCloudPersistentVolumeClaimsResponse::~DeleteCloudPersistentVolumeClaimsResponse() = default;

void DeleteCloudPersistentVolumeClaimsResponse::validate()
{
}

web::json::value DeleteCloudPersistentVolumeClaimsResponse::toJson() const
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
bool DeleteCloudPersistentVolumeClaimsResponse::fromJson(const web::json::value& val)
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


std::string DeleteCloudPersistentVolumeClaimsResponse::getApiVersion() const
{
    return apiVersion_;
}

void DeleteCloudPersistentVolumeClaimsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void DeleteCloudPersistentVolumeClaimsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string DeleteCloudPersistentVolumeClaimsResponse::getKind() const
{
    return kind_;
}

void DeleteCloudPersistentVolumeClaimsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void DeleteCloudPersistentVolumeClaimsResponse::unsetkind()
{
    kindIsSet_ = false;
}

PersistentVolumeClaimMetadata DeleteCloudPersistentVolumeClaimsResponse::getMetadata() const
{
    return metadata_;
}

void DeleteCloudPersistentVolumeClaimsResponse::setMetadata(const PersistentVolumeClaimMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void DeleteCloudPersistentVolumeClaimsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PersistentVolumeClaimSpec DeleteCloudPersistentVolumeClaimsResponse::getSpec() const
{
    return spec_;
}

void DeleteCloudPersistentVolumeClaimsResponse::setSpec(const PersistentVolumeClaimSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsResponse::specIsSet() const
{
    return specIsSet_;
}

void DeleteCloudPersistentVolumeClaimsResponse::unsetspec()
{
    specIsSet_ = false;
}

PersistentVolumeClaimStatus DeleteCloudPersistentVolumeClaimsResponse::getStatus() const
{
    return status_;
}

void DeleteCloudPersistentVolumeClaimsResponse::setStatus(const PersistentVolumeClaimStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteCloudPersistentVolumeClaimsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteCloudPersistentVolumeClaimsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


