

#include "huaweicloud/cce/v3/model/ShowAutopilotClusterUpgradeInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotClusterUpgradeInfoResponse::ShowAutopilotClusterUpgradeInfoResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowAutopilotClusterUpgradeInfoResponse::~ShowAutopilotClusterUpgradeInfoResponse() = default;

void ShowAutopilotClusterUpgradeInfoResponse::validate()
{
}

web::json::value ShowAutopilotClusterUpgradeInfoResponse::toJson() const
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
bool ShowAutopilotClusterUpgradeInfoResponse::fromJson(const web::json::value& val)
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
            UpgradeInfoSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradeInfoStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotClusterUpgradeInfoResponse::getKind() const
{
    return kind_;
}

void ShowAutopilotClusterUpgradeInfoResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowAutopilotClusterUpgradeInfoResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowAutopilotClusterUpgradeInfoResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowAutopilotClusterUpgradeInfoResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowAutopilotClusterUpgradeInfoResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowAutopilotClusterUpgradeInfoResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowAutopilotClusterUpgradeInfoResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Metadata ShowAutopilotClusterUpgradeInfoResponse::getMetadata() const
{
    return metadata_;
}

void ShowAutopilotClusterUpgradeInfoResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowAutopilotClusterUpgradeInfoResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowAutopilotClusterUpgradeInfoResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeInfoSpec ShowAutopilotClusterUpgradeInfoResponse::getSpec() const
{
    return spec_;
}

void ShowAutopilotClusterUpgradeInfoResponse::setSpec(const UpgradeInfoSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowAutopilotClusterUpgradeInfoResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowAutopilotClusterUpgradeInfoResponse::unsetspec()
{
    specIsSet_ = false;
}

UpgradeInfoStatus ShowAutopilotClusterUpgradeInfoResponse::getStatus() const
{
    return status_;
}

void ShowAutopilotClusterUpgradeInfoResponse::setStatus(const UpgradeInfoStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutopilotClusterUpgradeInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutopilotClusterUpgradeInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


