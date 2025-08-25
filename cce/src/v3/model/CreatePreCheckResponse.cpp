

#include "huaweicloud/cce/v3/model/CreatePreCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePreCheckResponse::CreatePreCheckResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreatePreCheckResponse::~CreatePreCheckResponse() = default;

void CreatePreCheckResponse::validate()
{
}

web::json::value CreatePreCheckResponse::toJson() const
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
bool CreatePreCheckResponse::fromJson(const web::json::value& val)
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
            PrecheckCluserResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PrecheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PrecheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreatePreCheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreatePreCheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePreCheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePreCheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreatePreCheckResponse::getKind() const
{
    return kind_;
}

void CreatePreCheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePreCheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePreCheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

PrecheckCluserResponseMetadata CreatePreCheckResponse::getMetadata() const
{
    return metadata_;
}

void CreatePreCheckResponse::setMetadata(const PrecheckCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreatePreCheckResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreatePreCheckResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PrecheckSpec CreatePreCheckResponse::getSpec() const
{
    return spec_;
}

void CreatePreCheckResponse::setSpec(const PrecheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePreCheckResponse::specIsSet() const
{
    return specIsSet_;
}

void CreatePreCheckResponse::unsetspec()
{
    specIsSet_ = false;
}

PrecheckStatus CreatePreCheckResponse::getStatus() const
{
    return status_;
}

void CreatePreCheckResponse::setStatus(const PrecheckStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreatePreCheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreatePreCheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


