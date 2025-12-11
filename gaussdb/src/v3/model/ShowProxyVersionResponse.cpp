

#include "huaweicloud/gaussdb/v3/model/ShowProxyVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyVersionResponse::ShowProxyVersionResponse()
{
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    latestVersion_ = "";
    latestVersionIsSet_ = false;
    canUpgrade_ = false;
    canUpgradeIsSet_ = false;
    riskIsSet_ = false;
}

ShowProxyVersionResponse::~ShowProxyVersionResponse() = default;

void ShowProxyVersionResponse::validate()
{
}

web::json::value ShowProxyVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(latestVersionIsSet_) {
        val[utility::conversions::to_string_t("latest_version")] = ModelBase::toJson(latestVersion_);
    }
    if(canUpgradeIsSet_) {
        val[utility::conversions::to_string_t("can_upgrade")] = ModelBase::toJson(canUpgrade_);
    }
    if(riskIsSet_) {
        val[utility::conversions::to_string_t("risk")] = ModelBase::toJson(risk_);
    }

    return val;
}
bool ShowProxyVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_upgrade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_upgrade"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanUpgrade(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk"));
        if(!fieldValue.is_null())
        {
            ProxyEngineRisk refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRisk(refVal);
        }
    }
    return ok;
}


std::string ShowProxyVersionResponse::getCurrentVersion() const
{
    return currentVersion_;
}

void ShowProxyVersionResponse::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool ShowProxyVersionResponse::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void ShowProxyVersionResponse::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

std::string ShowProxyVersionResponse::getLatestVersion() const
{
    return latestVersion_;
}

void ShowProxyVersionResponse::setLatestVersion(const std::string& value)
{
    latestVersion_ = value;
    latestVersionIsSet_ = true;
}

bool ShowProxyVersionResponse::latestVersionIsSet() const
{
    return latestVersionIsSet_;
}

void ShowProxyVersionResponse::unsetlatestVersion()
{
    latestVersionIsSet_ = false;
}

bool ShowProxyVersionResponse::isCanUpgrade() const
{
    return canUpgrade_;
}

void ShowProxyVersionResponse::setCanUpgrade(bool value)
{
    canUpgrade_ = value;
    canUpgradeIsSet_ = true;
}

bool ShowProxyVersionResponse::canUpgradeIsSet() const
{
    return canUpgradeIsSet_;
}

void ShowProxyVersionResponse::unsetcanUpgrade()
{
    canUpgradeIsSet_ = false;
}

ProxyEngineRisk ShowProxyVersionResponse::getRisk() const
{
    return risk_;
}

void ShowProxyVersionResponse::setRisk(const ProxyEngineRisk& value)
{
    risk_ = value;
    riskIsSet_ = true;
}

bool ShowProxyVersionResponse::riskIsSet() const
{
    return riskIsSet_;
}

void ShowProxyVersionResponse::unsetrisk()
{
    riskIsSet_ = false;
}

}
}
}
}
}


