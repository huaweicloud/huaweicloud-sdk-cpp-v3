

#include "huaweicloud/cce/v3/model/ListClusterUpgradeFeatureGatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListClusterUpgradeFeatureGatesResponse::ListClusterUpgradeFeatureGatesResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    upgradeFeatureGatesIsSet_ = false;
}

ListClusterUpgradeFeatureGatesResponse::~ListClusterUpgradeFeatureGatesResponse() = default;

void ListClusterUpgradeFeatureGatesResponse::validate()
{
}

web::json::value ListClusterUpgradeFeatureGatesResponse::toJson() const
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
    if(upgradeFeatureGatesIsSet_) {
        val[utility::conversions::to_string_t("upgradeFeatureGates")] = ModelBase::toJson(upgradeFeatureGates_);
    }

    return val;
}
bool ListClusterUpgradeFeatureGatesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("upgradeFeatureGates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgradeFeatureGates"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeFeatureGates(refVal);
        }
    }
    return ok;
}


std::string ListClusterUpgradeFeatureGatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListClusterUpgradeFeatureGatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListClusterUpgradeFeatureGatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListClusterUpgradeFeatureGatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListClusterUpgradeFeatureGatesResponse::getKind() const
{
    return kind_;
}

void ListClusterUpgradeFeatureGatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListClusterUpgradeFeatureGatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListClusterUpgradeFeatureGatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

Metadata ListClusterUpgradeFeatureGatesResponse::getMetadata() const
{
    return metadata_;
}

void ListClusterUpgradeFeatureGatesResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListClusterUpgradeFeatureGatesResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListClusterUpgradeFeatureGatesResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::map<std::string, std::string>& ListClusterUpgradeFeatureGatesResponse::getUpgradeFeatureGates()
{
    return upgradeFeatureGates_;
}

void ListClusterUpgradeFeatureGatesResponse::setUpgradeFeatureGates(const std::map<std::string, std::string>& value)
{
    upgradeFeatureGates_ = value;
    upgradeFeatureGatesIsSet_ = true;
}

bool ListClusterUpgradeFeatureGatesResponse::upgradeFeatureGatesIsSet() const
{
    return upgradeFeatureGatesIsSet_;
}

void ListClusterUpgradeFeatureGatesResponse::unsetupgradeFeatureGates()
{
    upgradeFeatureGatesIsSet_ = false;
}

}
}
}
}
}


