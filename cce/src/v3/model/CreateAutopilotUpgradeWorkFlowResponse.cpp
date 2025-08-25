

#include "huaweicloud/cce/v3/model/CreateAutopilotUpgradeWorkFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateAutopilotUpgradeWorkFlowResponse::CreateAutopilotUpgradeWorkFlowResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreateAutopilotUpgradeWorkFlowResponse::~CreateAutopilotUpgradeWorkFlowResponse() = default;

void CreateAutopilotUpgradeWorkFlowResponse::validate()
{
}

web::json::value CreateAutopilotUpgradeWorkFlowResponse::toJson() const
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
bool CreateAutopilotUpgradeWorkFlowResponse::fromJson(const web::json::value& val)
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
            WorkFlowSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            WorkFlowStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreateAutopilotUpgradeWorkFlowResponse::getKind() const
{
    return kind_;
}

void CreateAutopilotUpgradeWorkFlowResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateAutopilotUpgradeWorkFlowResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateAutopilotUpgradeWorkFlowResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreateAutopilotUpgradeWorkFlowResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreateAutopilotUpgradeWorkFlowResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAutopilotUpgradeWorkFlowResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAutopilotUpgradeWorkFlowResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata CreateAutopilotUpgradeWorkFlowResponse::getMetadata() const
{
    return metadata_;
}

void CreateAutopilotUpgradeWorkFlowResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateAutopilotUpgradeWorkFlowResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateAutopilotUpgradeWorkFlowResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

WorkFlowSpec CreateAutopilotUpgradeWorkFlowResponse::getSpec() const
{
    return spec_;
}

void CreateAutopilotUpgradeWorkFlowResponse::setSpec(const WorkFlowSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateAutopilotUpgradeWorkFlowResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateAutopilotUpgradeWorkFlowResponse::unsetspec()
{
    specIsSet_ = false;
}

WorkFlowStatus CreateAutopilotUpgradeWorkFlowResponse::getStatus() const
{
    return status_;
}

void CreateAutopilotUpgradeWorkFlowResponse::setStatus(const WorkFlowStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAutopilotUpgradeWorkFlowResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAutopilotUpgradeWorkFlowResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


