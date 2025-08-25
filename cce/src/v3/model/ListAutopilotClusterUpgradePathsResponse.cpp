

#include "huaweicloud/cce/v3/model/ListAutopilotClusterUpgradePathsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotClusterUpgradePathsResponse::ListAutopilotClusterUpgradePathsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    upgradePathsIsSet_ = false;
}

ListAutopilotClusterUpgradePathsResponse::~ListAutopilotClusterUpgradePathsResponse() = default;

void ListAutopilotClusterUpgradePathsResponse::validate()
{
}

web::json::value ListAutopilotClusterUpgradePathsResponse::toJson() const
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
    if(upgradePathsIsSet_) {
        val[utility::conversions::to_string_t("upgradePaths")] = ModelBase::toJson(upgradePaths_);
    }

    return val;
}
bool ListAutopilotClusterUpgradePathsResponse::fromJson(const web::json::value& val)
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
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgradePaths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgradePaths"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradePath> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradePaths(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotClusterUpgradePathsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotClusterUpgradePathsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotClusterUpgradePathsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotClusterUpgradePathsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListAutopilotClusterUpgradePathsResponse::getKind() const
{
    return kind_;
}

void ListAutopilotClusterUpgradePathsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotClusterUpgradePathsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotClusterUpgradePathsResponse::unsetkind()
{
    kindIsSet_ = false;
}

Metadata ListAutopilotClusterUpgradePathsResponse::getMetadata() const
{
    return metadata_;
}

void ListAutopilotClusterUpgradePathsResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListAutopilotClusterUpgradePathsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListAutopilotClusterUpgradePathsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<UpgradePath>& ListAutopilotClusterUpgradePathsResponse::getUpgradePaths()
{
    return upgradePaths_;
}

void ListAutopilotClusterUpgradePathsResponse::setUpgradePaths(const std::vector<UpgradePath>& value)
{
    upgradePaths_ = value;
    upgradePathsIsSet_ = true;
}

bool ListAutopilotClusterUpgradePathsResponse::upgradePathsIsSet() const
{
    return upgradePathsIsSet_;
}

void ListAutopilotClusterUpgradePathsResponse::unsetupgradePaths()
{
    upgradePathsIsSet_ = false;
}

}
}
}
}
}


