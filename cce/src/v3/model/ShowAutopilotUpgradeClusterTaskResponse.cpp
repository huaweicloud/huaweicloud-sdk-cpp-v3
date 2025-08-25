

#include "huaweicloud/cce/v3/model/ShowAutopilotUpgradeClusterTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotUpgradeClusterTaskResponse::ShowAutopilotUpgradeClusterTaskResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowAutopilotUpgradeClusterTaskResponse::~ShowAutopilotUpgradeClusterTaskResponse() = default;

void ShowAutopilotUpgradeClusterTaskResponse::validate()
{
}

web::json::value ShowAutopilotUpgradeClusterTaskResponse::toJson() const
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
bool ShowAutopilotUpgradeClusterTaskResponse::fromJson(const web::json::value& val)
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
            UpgradeTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            UpgradeTaskSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradeTaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotUpgradeClusterTaskResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowAutopilotUpgradeClusterTaskResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowAutopilotUpgradeClusterTaskResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowAutopilotUpgradeClusterTaskResponse::getKind() const
{
    return kind_;
}

void ShowAutopilotUpgradeClusterTaskResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowAutopilotUpgradeClusterTaskResponse::unsetkind()
{
    kindIsSet_ = false;
}

UpgradeTaskMetadata ShowAutopilotUpgradeClusterTaskResponse::getMetadata() const
{
    return metadata_;
}

void ShowAutopilotUpgradeClusterTaskResponse::setMetadata(const UpgradeTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowAutopilotUpgradeClusterTaskResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeTaskSpec ShowAutopilotUpgradeClusterTaskResponse::getSpec() const
{
    return spec_;
}

void ShowAutopilotUpgradeClusterTaskResponse::setSpec(const UpgradeTaskSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowAutopilotUpgradeClusterTaskResponse::unsetspec()
{
    specIsSet_ = false;
}

UpgradeTaskStatus ShowAutopilotUpgradeClusterTaskResponse::getStatus() const
{
    return status_;
}

void ShowAutopilotUpgradeClusterTaskResponse::setStatus(const UpgradeTaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutopilotUpgradeClusterTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


