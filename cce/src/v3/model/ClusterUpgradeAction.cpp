

#include "huaweicloud/cce/v3/model/ClusterUpgradeAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterUpgradeAction::ClusterUpgradeAction()
{
    addonsIsSet_ = false;
    nodeOrderIsSet_ = false;
    nodePoolOrderIsSet_ = false;
    strategyIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    isOnlyUpgrade_ = false;
    isOnlyUpgradeIsSet_ = false;
}

ClusterUpgradeAction::~ClusterUpgradeAction() = default;

void ClusterUpgradeAction::validate()
{
}

web::json::value ClusterUpgradeAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonsIsSet_) {
        val[utility::conversions::to_string_t("addons")] = ModelBase::toJson(addons_);
    }
    if(nodeOrderIsSet_) {
        val[utility::conversions::to_string_t("nodeOrder")] = ModelBase::toJson(nodeOrder_);
    }
    if(nodePoolOrderIsSet_) {
        val[utility::conversions::to_string_t("nodePoolOrder")] = ModelBase::toJson(nodePoolOrder_);
    }
    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("targetVersion")] = ModelBase::toJson(targetVersion_);
    }
    if(isOnlyUpgradeIsSet_) {
        val[utility::conversions::to_string_t("isOnlyUpgrade")] = ModelBase::toJson(isOnlyUpgrade_);
    }

    return val;
}
bool ClusterUpgradeAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addons"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addons"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeAddonConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddons(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeOrder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeOrder"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<NodePriority>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodePoolOrder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodePoolOrder"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePoolOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("targetVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isOnlyUpgrade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isOnlyUpgrade"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOnlyUpgrade(refVal);
        }
    }
    return ok;
}


std::vector<UpgradeAddonConfig>& ClusterUpgradeAction::getAddons()
{
    return addons_;
}

void ClusterUpgradeAction::setAddons(const std::vector<UpgradeAddonConfig>& value)
{
    addons_ = value;
    addonsIsSet_ = true;
}

bool ClusterUpgradeAction::addonsIsSet() const
{
    return addonsIsSet_;
}

void ClusterUpgradeAction::unsetaddons()
{
    addonsIsSet_ = false;
}

std::map<std::string, std::vector<NodePriority>>& ClusterUpgradeAction::getNodeOrder()
{
    return nodeOrder_;
}

void ClusterUpgradeAction::setNodeOrder(const std::map<std::string, std::vector<NodePriority>>& value)
{
    nodeOrder_ = value;
    nodeOrderIsSet_ = true;
}

bool ClusterUpgradeAction::nodeOrderIsSet() const
{
    return nodeOrderIsSet_;
}

void ClusterUpgradeAction::unsetnodeOrder()
{
    nodeOrderIsSet_ = false;
}

std::map<std::string, int32_t>& ClusterUpgradeAction::getNodePoolOrder()
{
    return nodePoolOrder_;
}

void ClusterUpgradeAction::setNodePoolOrder(std::map<std::string, int32_t> value)
{
    nodePoolOrder_ = value;
    nodePoolOrderIsSet_ = true;
}

bool ClusterUpgradeAction::nodePoolOrderIsSet() const
{
    return nodePoolOrderIsSet_;
}

void ClusterUpgradeAction::unsetnodePoolOrder()
{
    nodePoolOrderIsSet_ = false;
}

UpgradeStrategy ClusterUpgradeAction::getStrategy() const
{
    return strategy_;
}

void ClusterUpgradeAction::setStrategy(const UpgradeStrategy& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool ClusterUpgradeAction::strategyIsSet() const
{
    return strategyIsSet_;
}

void ClusterUpgradeAction::unsetstrategy()
{
    strategyIsSet_ = false;
}

std::string ClusterUpgradeAction::getTargetVersion() const
{
    return targetVersion_;
}

void ClusterUpgradeAction::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ClusterUpgradeAction::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ClusterUpgradeAction::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

bool ClusterUpgradeAction::isIsOnlyUpgrade() const
{
    return isOnlyUpgrade_;
}

void ClusterUpgradeAction::setIsOnlyUpgrade(bool value)
{
    isOnlyUpgrade_ = value;
    isOnlyUpgradeIsSet_ = true;
}

bool ClusterUpgradeAction::isOnlyUpgradeIsSet() const
{
    return isOnlyUpgradeIsSet_;
}

void ClusterUpgradeAction::unsetisOnlyUpgrade()
{
    isOnlyUpgradeIsSet_ = false;
}

}
}
}
}
}


