

#include "huaweicloud/cce/v3/model/ClusterUpgradeResponseAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterUpgradeResponseAction::ClusterUpgradeResponseAction()
{
    version_ = "";
    versionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    targetPlatformVersion_ = "";
    targetPlatformVersionIsSet_ = false;
    strategyIsSet_ = false;
    configIsSet_ = false;
}

ClusterUpgradeResponseAction::~ClusterUpgradeResponseAction() = default;

void ClusterUpgradeResponseAction::validate()
{
}

web::json::value ClusterUpgradeResponseAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("targetVersion")] = ModelBase::toJson(targetVersion_);
    }
    if(targetPlatformVersionIsSet_) {
        val[utility::conversions::to_string_t("targetPlatformVersion")] = ModelBase::toJson(targetPlatformVersion_);
    }
    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }

    return val;
}
bool ClusterUpgradeResponseAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetPlatformVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetPlatformVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetPlatformVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            UpgradeStrategy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    return ok;
}


std::string ClusterUpgradeResponseAction::getVersion() const
{
    return version_;
}

void ClusterUpgradeResponseAction::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ClusterUpgradeResponseAction::versionIsSet() const
{
    return versionIsSet_;
}

void ClusterUpgradeResponseAction::unsetversion()
{
    versionIsSet_ = false;
}

std::string ClusterUpgradeResponseAction::getTargetVersion() const
{
    return targetVersion_;
}

void ClusterUpgradeResponseAction::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ClusterUpgradeResponseAction::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ClusterUpgradeResponseAction::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::string ClusterUpgradeResponseAction::getTargetPlatformVersion() const
{
    return targetPlatformVersion_;
}

void ClusterUpgradeResponseAction::setTargetPlatformVersion(const std::string& value)
{
    targetPlatformVersion_ = value;
    targetPlatformVersionIsSet_ = true;
}

bool ClusterUpgradeResponseAction::targetPlatformVersionIsSet() const
{
    return targetPlatformVersionIsSet_;
}

void ClusterUpgradeResponseAction::unsettargetPlatformVersion()
{
    targetPlatformVersionIsSet_ = false;
}

UpgradeStrategy ClusterUpgradeResponseAction::getStrategy() const
{
    return strategy_;
}

void ClusterUpgradeResponseAction::setStrategy(const UpgradeStrategy& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool ClusterUpgradeResponseAction::strategyIsSet() const
{
    return strategyIsSet_;
}

void ClusterUpgradeResponseAction::unsetstrategy()
{
    strategyIsSet_ = false;
}

Object ClusterUpgradeResponseAction::getConfig() const
{
    return config_;
}

void ClusterUpgradeResponseAction::setConfig(const Object& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool ClusterUpgradeResponseAction::configIsSet() const
{
    return configIsSet_;
}

void ClusterUpgradeResponseAction::unsetconfig()
{
    configIsSet_ = false;
}

}
}
}
}
}


