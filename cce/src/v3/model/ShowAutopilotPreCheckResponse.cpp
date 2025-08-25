

#include "huaweicloud/cce/v3/model/ShowAutopilotPreCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotPreCheckResponse::ShowAutopilotPreCheckResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowAutopilotPreCheckResponse::~ShowAutopilotPreCheckResponse() = default;

void ShowAutopilotPreCheckResponse::validate()
{
}

web::json::value ShowAutopilotPreCheckResponse::toJson() const
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
bool ShowAutopilotPreCheckResponse::fromJson(const web::json::value& val)
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


std::string ShowAutopilotPreCheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowAutopilotPreCheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowAutopilotPreCheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowAutopilotPreCheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowAutopilotPreCheckResponse::getKind() const
{
    return kind_;
}

void ShowAutopilotPreCheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowAutopilotPreCheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowAutopilotPreCheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

PrecheckTaskMetadata ShowAutopilotPreCheckResponse::getMetadata() const
{
    return metadata_;
}

void ShowAutopilotPreCheckResponse::setMetadata(const PrecheckTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowAutopilotPreCheckResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowAutopilotPreCheckResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PrecheckSpec ShowAutopilotPreCheckResponse::getSpec() const
{
    return spec_;
}

void ShowAutopilotPreCheckResponse::setSpec(const PrecheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowAutopilotPreCheckResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowAutopilotPreCheckResponse::unsetspec()
{
    specIsSet_ = false;
}

PrecheckStatus ShowAutopilotPreCheckResponse::getStatus() const
{
    return status_;
}

void ShowAutopilotPreCheckResponse::setStatus(const PrecheckStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutopilotPreCheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutopilotPreCheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


