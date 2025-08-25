

#include "huaweicloud/cce/v3/model/ListAutopilotClusterUpgradeFeatureGatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotClusterUpgradeFeatureGatesResponse::ListAutopilotClusterUpgradeFeatureGatesResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    upgradeFeatureGatesIsSet_ = false;
}

ListAutopilotClusterUpgradeFeatureGatesResponse::~ListAutopilotClusterUpgradeFeatureGatesResponse() = default;

void ListAutopilotClusterUpgradeFeatureGatesResponse::validate()
{
}

web::json::value ListAutopilotClusterUpgradeFeatureGatesResponse::toJson() const
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
bool ListAutopilotClusterUpgradeFeatureGatesResponse::fromJson(const web::json::value& val)
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


std::string ListAutopilotClusterUpgradeFeatureGatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotClusterUpgradeFeatureGatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListAutopilotClusterUpgradeFeatureGatesResponse::getKind() const
{
    return kind_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotClusterUpgradeFeatureGatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

Metadata ListAutopilotClusterUpgradeFeatureGatesResponse::getMetadata() const
{
    return metadata_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListAutopilotClusterUpgradeFeatureGatesResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::map<std::string, std::string>& ListAutopilotClusterUpgradeFeatureGatesResponse::getUpgradeFeatureGates()
{
    return upgradeFeatureGates_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::setUpgradeFeatureGates(const std::map<std::string, std::string>& value)
{
    upgradeFeatureGates_ = value;
    upgradeFeatureGatesIsSet_ = true;
}

bool ListAutopilotClusterUpgradeFeatureGatesResponse::upgradeFeatureGatesIsSet() const
{
    return upgradeFeatureGatesIsSet_;
}

void ListAutopilotClusterUpgradeFeatureGatesResponse::unsetupgradeFeatureGates()
{
    upgradeFeatureGatesIsSet_ = false;
}

}
}
}
}
}


