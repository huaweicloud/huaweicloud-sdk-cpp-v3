

#include "huaweicloud/cce/v3/model/UpdateAutopilotUpgradePlanResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotUpgradePlanResponse::UpdateAutopilotUpgradePlanResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpdateAutopilotUpgradePlanResponse::~UpdateAutopilotUpgradePlanResponse() = default;

void UpdateAutopilotUpgradePlanResponse::validate()
{
}

web::json::value UpdateAutopilotUpgradePlanResponse::toJson() const
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
bool UpdateAutopilotUpgradePlanResponse::fromJson(const web::json::value& val)
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
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            UpgradePlanSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradePlanStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateAutopilotUpgradePlanResponse::getKind() const
{
    return kind_;
}

void UpdateAutopilotUpgradePlanResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpdateAutopilotUpgradePlanResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpdateAutopilotUpgradePlanResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpdateAutopilotUpgradePlanResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpdateAutopilotUpgradePlanResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata UpdateAutopilotUpgradePlanResponse::getMetadata() const
{
    return metadata_;
}

void UpdateAutopilotUpgradePlanResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateAutopilotUpgradePlanResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradePlanSpec UpdateAutopilotUpgradePlanResponse::getSpec() const
{
    return spec_;
}

void UpdateAutopilotUpgradePlanResponse::setSpec(const UpgradePlanSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanResponse::specIsSet() const
{
    return specIsSet_;
}

void UpdateAutopilotUpgradePlanResponse::unsetspec()
{
    specIsSet_ = false;
}

UpgradePlanStatus UpdateAutopilotUpgradePlanResponse::getStatus() const
{
    return status_;
}

void UpdateAutopilotUpgradePlanResponse::setStatus(const UpgradePlanStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAutopilotUpgradePlanResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


