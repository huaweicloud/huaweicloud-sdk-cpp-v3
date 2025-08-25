

#include "huaweicloud/cce/v3/model/CreateAutopilotAddonInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotAddonInstanceResponse::CreateAutopilotAddonInstanceResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateAutopilotAddonInstanceResponse::~CreateAutopilotAddonInstanceResponse() = default;

void CreateAutopilotAddonInstanceResponse::validate()
{
}

web::json::value CreateAutopilotAddonInstanceResponse::toJson() const
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
bool CreateAutopilotAddonInstanceResponse::fromJson(const web::json::value& val)
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


std::string CreateAutopilotAddonInstanceResponse::getKind() const
{
    return kind_;
}

void CreateAutopilotAddonInstanceResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateAutopilotAddonInstanceResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateAutopilotAddonInstanceResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateAutopilotAddonInstanceResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateAutopilotAddonInstanceResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAutopilotAddonInstanceResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAutopilotAddonInstanceResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonMetadata CreateAutopilotAddonInstanceResponse::getMetadata() const
{
    return metadata_;
}

void CreateAutopilotAddonInstanceResponse::setMetadata(const AddonMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateAutopilotAddonInstanceResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateAutopilotAddonInstanceResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

InstanceSpec CreateAutopilotAddonInstanceResponse::getSpec() const
{
    return spec_;
}

void CreateAutopilotAddonInstanceResponse::setSpec(const InstanceSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateAutopilotAddonInstanceResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateAutopilotAddonInstanceResponse::unsetspec()
{
    specIsSet_ = false;
}

AddonInstanceStatus CreateAutopilotAddonInstanceResponse::getStatus() const
{
    return status_;
}

void CreateAutopilotAddonInstanceResponse::setStatus(const AddonInstanceStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAutopilotAddonInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAutopilotAddonInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


