

#include "huaweicloud/cce/v3/model/ShowAutopilotAddonInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotAddonInstanceResponse::ShowAutopilotAddonInstanceResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowAutopilotAddonInstanceResponse::~ShowAutopilotAddonInstanceResponse() = default;

void ShowAutopilotAddonInstanceResponse::validate()
{
}

web::json::value ShowAutopilotAddonInstanceResponse::toJson() const
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
bool ShowAutopilotAddonInstanceResponse::fromJson(const web::json::value& val)
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


std::string ShowAutopilotAddonInstanceResponse::getKind() const
{
    return kind_;
}

void ShowAutopilotAddonInstanceResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowAutopilotAddonInstanceResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowAutopilotAddonInstanceResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowAutopilotAddonInstanceResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowAutopilotAddonInstanceResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowAutopilotAddonInstanceResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowAutopilotAddonInstanceResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonMetadata ShowAutopilotAddonInstanceResponse::getMetadata() const
{
    return metadata_;
}

void ShowAutopilotAddonInstanceResponse::setMetadata(const AddonMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowAutopilotAddonInstanceResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowAutopilotAddonInstanceResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

InstanceSpec ShowAutopilotAddonInstanceResponse::getSpec() const
{
    return spec_;
}

void ShowAutopilotAddonInstanceResponse::setSpec(const InstanceSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowAutopilotAddonInstanceResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowAutopilotAddonInstanceResponse::unsetspec()
{
    specIsSet_ = false;
}

AddonInstanceStatus ShowAutopilotAddonInstanceResponse::getStatus() const
{
    return status_;
}

void ShowAutopilotAddonInstanceResponse::setStatus(const AddonInstanceStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutopilotAddonInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutopilotAddonInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


