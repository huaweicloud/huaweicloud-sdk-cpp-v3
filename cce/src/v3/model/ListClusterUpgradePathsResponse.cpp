

#include "huaweicloud/cce/v3/model/ListClusterUpgradePathsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListClusterUpgradePathsResponse::ListClusterUpgradePathsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    upgradePathsIsSet_ = false;
}

ListClusterUpgradePathsResponse::~ListClusterUpgradePathsResponse() = default;

void ListClusterUpgradePathsResponse::validate()
{
}

web::json::value ListClusterUpgradePathsResponse::toJson() const
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
bool ListClusterUpgradePathsResponse::fromJson(const web::json::value& val)
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


std::string ListClusterUpgradePathsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListClusterUpgradePathsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListClusterUpgradePathsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListClusterUpgradePathsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListClusterUpgradePathsResponse::getKind() const
{
    return kind_;
}

void ListClusterUpgradePathsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListClusterUpgradePathsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListClusterUpgradePathsResponse::unsetkind()
{
    kindIsSet_ = false;
}

Metadata ListClusterUpgradePathsResponse::getMetadata() const
{
    return metadata_;
}

void ListClusterUpgradePathsResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListClusterUpgradePathsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListClusterUpgradePathsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<UpgradePath>& ListClusterUpgradePathsResponse::getUpgradePaths()
{
    return upgradePaths_;
}

void ListClusterUpgradePathsResponse::setUpgradePaths(const std::vector<UpgradePath>& value)
{
    upgradePaths_ = value;
    upgradePathsIsSet_ = true;
}

bool ListClusterUpgradePathsResponse::upgradePathsIsSet() const
{
    return upgradePathsIsSet_;
}

void ListClusterUpgradePathsResponse::unsetupgradePaths()
{
    upgradePathsIsSet_ = false;
}

}
}
}
}
}


