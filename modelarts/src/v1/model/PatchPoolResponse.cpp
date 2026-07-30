

#include "huaweicloud/modelarts/v1/model/PatchPoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchPoolResponse::PatchPoolResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

PatchPoolResponse::~PatchPoolResponse() = default;

void PatchPoolResponse::validate()
{
}

web::json::value PatchPoolResponse::toJson() const
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
bool PatchPoolResponse::fromJson(const web::json::value& val)
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
            PoolMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PoolStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PatchPoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void PatchPoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PatchPoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PatchPoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PatchPoolResponse::getKind() const
{
    return kind_;
}

void PatchPoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PatchPoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void PatchPoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

PoolMetadata PatchPoolResponse::getMetadata() const
{
    return metadata_;
}

void PatchPoolResponse::setMetadata(const PoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PatchPoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void PatchPoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PoolSpecModel PatchPoolResponse::getSpec() const
{
    return spec_;
}

void PatchPoolResponse::setSpec(const PoolSpecModel& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PatchPoolResponse::specIsSet() const
{
    return specIsSet_;
}

void PatchPoolResponse::unsetspec()
{
    specIsSet_ = false;
}

PoolStatus PatchPoolResponse::getStatus() const
{
    return status_;
}

void PatchPoolResponse::setStatus(const PoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PatchPoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void PatchPoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


