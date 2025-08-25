

#include "huaweicloud/cce/v3/model/UpgradeAutopilotWorkFlowUpdateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeAutopilotWorkFlowUpdateResponse::UpgradeAutopilotWorkFlowUpdateResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpgradeAutopilotWorkFlowUpdateResponse::~UpgradeAutopilotWorkFlowUpdateResponse() = default;

void UpgradeAutopilotWorkFlowUpdateResponse::validate()
{
}

web::json::value UpgradeAutopilotWorkFlowUpdateResponse::toJson() const
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
bool UpgradeAutopilotWorkFlowUpdateResponse::fromJson(const web::json::value& val)
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


std::string UpgradeAutopilotWorkFlowUpdateResponse::getKind() const
{
    return kind_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateResponse::kindIsSet() const
{
    return kindIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpgradeAutopilotWorkFlowUpdateResponse::getApiVersion() const
{
    return apiVersion_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata UpgradeAutopilotWorkFlowUpdateResponse::getMetadata() const
{
    return metadata_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

WorkFlowSpec UpgradeAutopilotWorkFlowUpdateResponse::getSpec() const
{
    return spec_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::setSpec(const WorkFlowSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateResponse::specIsSet() const
{
    return specIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::unsetspec()
{
    specIsSet_ = false;
}

WorkFlowStatus UpgradeAutopilotWorkFlowUpdateResponse::getStatus() const
{
    return status_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::setStatus(const WorkFlowStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpgradeAutopilotWorkFlowUpdateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpgradeAutopilotWorkFlowUpdateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


