

#include "huaweicloud/cce/v3/model/ShowPreCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowPreCheckResponse::ShowPreCheckResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowPreCheckResponse::~ShowPreCheckResponse() = default;

void ShowPreCheckResponse::validate()
{
}

web::json::value ShowPreCheckResponse::toJson() const
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
bool ShowPreCheckResponse::fromJson(const web::json::value& val)
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
            PrecheckTaskMetadata refVal;
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


std::string ShowPreCheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPreCheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPreCheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPreCheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowPreCheckResponse::getKind() const
{
    return kind_;
}

void ShowPreCheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPreCheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPreCheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

PrecheckTaskMetadata ShowPreCheckResponse::getMetadata() const
{
    return metadata_;
}

void ShowPreCheckResponse::setMetadata(const PrecheckTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowPreCheckResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowPreCheckResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PrecheckSpec ShowPreCheckResponse::getSpec() const
{
    return spec_;
}

void ShowPreCheckResponse::setSpec(const PrecheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowPreCheckResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowPreCheckResponse::unsetspec()
{
    specIsSet_ = false;
}

PrecheckStatus ShowPreCheckResponse::getStatus() const
{
    return status_;
}

void ShowPreCheckResponse::setStatus(const PrecheckStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPreCheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPreCheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


