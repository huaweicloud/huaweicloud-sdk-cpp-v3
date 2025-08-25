

#include "huaweicloud/cce/v3/model/UpdateAutopilotAddonInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotAddonInstanceResponse::UpdateAutopilotAddonInstanceResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateAutopilotAddonInstanceResponse::~UpdateAutopilotAddonInstanceResponse() = default;

void UpdateAutopilotAddonInstanceResponse::validate()
{
}

web::json::value UpdateAutopilotAddonInstanceResponse::toJson() const
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
bool UpdateAutopilotAddonInstanceResponse::fromJson(const web::json::value& val)
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


std::string UpdateAutopilotAddonInstanceResponse::getKind() const
{
    return kind_;
}

void UpdateAutopilotAddonInstanceResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpdateAutopilotAddonInstanceResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpdateAutopilotAddonInstanceResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpdateAutopilotAddonInstanceResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpdateAutopilotAddonInstanceResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonMetadata UpdateAutopilotAddonInstanceResponse::getMetadata() const
{
    return metadata_;
}

void UpdateAutopilotAddonInstanceResponse::setMetadata(const AddonMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateAutopilotAddonInstanceResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

InstanceSpec UpdateAutopilotAddonInstanceResponse::getSpec() const
{
    return spec_;
}

void UpdateAutopilotAddonInstanceResponse::setSpec(const InstanceSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateAutopilotAddonInstanceResponse::unsetspec()
{
    specIsSet_ = false;
}

AddonInstanceStatus UpdateAutopilotAddonInstanceResponse::getStatus() const
{
    return status_;
}

void UpdateAutopilotAddonInstanceResponse::setStatus(const AddonInstanceStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAutopilotAddonInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAutopilotAddonInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


