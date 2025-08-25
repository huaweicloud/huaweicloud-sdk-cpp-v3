

#include "huaweicloud/cce/v3/model/ShowUpgradeClusterTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowUpgradeClusterTaskResponse::ShowUpgradeClusterTaskResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

ShowUpgradeClusterTaskResponse::~ShowUpgradeClusterTaskResponse() = default;

void ShowUpgradeClusterTaskResponse::validate()
{
}

web::json::value ShowUpgradeClusterTaskResponse::toJson() const
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
bool ShowUpgradeClusterTaskResponse::fromJson(const web::json::value& val)
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


std::string ShowUpgradeClusterTaskResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowUpgradeClusterTaskResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowUpgradeClusterTaskResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowUpgradeClusterTaskResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowUpgradeClusterTaskResponse::getKind() const
{
    return kind_;
}

void ShowUpgradeClusterTaskResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowUpgradeClusterTaskResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowUpgradeClusterTaskResponse::unsetkind()
{
    kindIsSet_ = false;
}

UpgradeTaskMetadata ShowUpgradeClusterTaskResponse::getMetadata() const
{
    return metadata_;
}

void ShowUpgradeClusterTaskResponse::setMetadata(const UpgradeTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowUpgradeClusterTaskResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowUpgradeClusterTaskResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeTaskSpec ShowUpgradeClusterTaskResponse::getSpec() const
{
    return spec_;
}

void ShowUpgradeClusterTaskResponse::setSpec(const UpgradeTaskSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowUpgradeClusterTaskResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowUpgradeClusterTaskResponse::unsetspec()
{
    specIsSet_ = false;
}

UpgradeTaskStatus ShowUpgradeClusterTaskResponse::getStatus() const
{
    return status_;
}

void ShowUpgradeClusterTaskResponse::setStatus(const UpgradeTaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUpgradeClusterTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUpgradeClusterTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


