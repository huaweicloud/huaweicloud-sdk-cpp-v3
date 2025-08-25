

#include "huaweicloud/cce/v3/model/CreateCloudPersistentVolumeClaimsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateCloudPersistentVolumeClaimsResponse::CreateCloudPersistentVolumeClaimsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateCloudPersistentVolumeClaimsResponse::~CreateCloudPersistentVolumeClaimsResponse() = default;

void CreateCloudPersistentVolumeClaimsResponse::validate()
{
}

web::json::value CreateCloudPersistentVolumeClaimsResponse::toJson() const
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
bool CreateCloudPersistentVolumeClaimsResponse::fromJson(const web::json::value& val)
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


std::string CreateCloudPersistentVolumeClaimsResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateCloudPersistentVolumeClaimsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateCloudPersistentVolumeClaimsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateCloudPersistentVolumeClaimsResponse::getKind() const
{
    return kind_;
}

void CreateCloudPersistentVolumeClaimsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateCloudPersistentVolumeClaimsResponse::unsetkind()
{
    kindIsSet_ = false;
}

PersistentVolumeClaimMetadata CreateCloudPersistentVolumeClaimsResponse::getMetadata() const
{
    return metadata_;
}

void CreateCloudPersistentVolumeClaimsResponse::setMetadata(const PersistentVolumeClaimMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateCloudPersistentVolumeClaimsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PersistentVolumeClaimSpec CreateCloudPersistentVolumeClaimsResponse::getSpec() const
{
    return spec_;
}

void CreateCloudPersistentVolumeClaimsResponse::setSpec(const PersistentVolumeClaimSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateCloudPersistentVolumeClaimsResponse::unsetspec()
{
    specIsSet_ = false;
}

PersistentVolumeClaimStatus CreateCloudPersistentVolumeClaimsResponse::getStatus() const
{
    return status_;
}

void CreateCloudPersistentVolumeClaimsResponse::setStatus(const PersistentVolumeClaimStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateCloudPersistentVolumeClaimsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateCloudPersistentVolumeClaimsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


