

#include "huaweicloud/modelarts/v1/model/PatchNetworkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNetworkResponse::PatchNetworkResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

PatchNetworkResponse::~PatchNetworkResponse() = default;

void PatchNetworkResponse::validate()
{
}

web::json::value PatchNetworkResponse::toJson() const
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
bool PatchNetworkResponse::fromJson(const web::json::value& val)
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
            NetworkMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NetworkSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NetworkStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PatchNetworkResponse::getApiVersion() const
{
    return apiVersion_;
}

void PatchNetworkResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PatchNetworkResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PatchNetworkResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PatchNetworkResponse::getKind() const
{
    return kind_;
}

void PatchNetworkResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PatchNetworkResponse::kindIsSet() const
{
    return kindIsSet_;
}

void PatchNetworkResponse::unsetkind()
{
    kindIsSet_ = false;
}

NetworkMetadata PatchNetworkResponse::getMetadata() const
{
    return metadata_;
}

void PatchNetworkResponse::setMetadata(const NetworkMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PatchNetworkResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void PatchNetworkResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpec PatchNetworkResponse::getSpec() const
{
    return spec_;
}

void PatchNetworkResponse::setSpec(const NetworkSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PatchNetworkResponse::specIsSet() const
{
    return specIsSet_;
}

void PatchNetworkResponse::unsetspec()
{
    specIsSet_ = false;
}

NetworkStatus PatchNetworkResponse::getStatus() const
{
    return status_;
}

void PatchNetworkResponse::setStatus(const NetworkStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PatchNetworkResponse::statusIsSet() const
{
    return statusIsSet_;
}

void PatchNetworkResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


