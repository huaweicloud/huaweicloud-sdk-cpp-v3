

#include "huaweicloud/ecs/v2/model/ServerLimits.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerLimits::ServerLimits()
{
    maxImageMeta_ = 0;
    maxImageMetaIsSet_ = false;
    maxPersonality_ = 0;
    maxPersonalityIsSet_ = false;
    maxPersonalitySize_ = 0;
    maxPersonalitySizeIsSet_ = false;
    maxSecurityGroupRules_ = 0;
    maxSecurityGroupRulesIsSet_ = false;
    maxSecurityGroups_ = 0;
    maxSecurityGroupsIsSet_ = false;
    maxServerGroupMembers_ = 0;
    maxServerGroupMembersIsSet_ = false;
    maxServerGroups_ = 0;
    maxServerGroupsIsSet_ = false;
    maxServerMeta_ = 0;
    maxServerMetaIsSet_ = false;
    maxTotalCores_ = 0;
    maxTotalCoresIsSet_ = false;
    maxTotalFloatingIps_ = 0;
    maxTotalFloatingIpsIsSet_ = false;
    maxTotalInstances_ = 0;
    maxTotalInstancesIsSet_ = false;
    maxTotalKeypairs_ = 0;
    maxTotalKeypairsIsSet_ = false;
    maxTotalRAMSize_ = 0;
    maxTotalRAMSizeIsSet_ = false;
    totalCoresUsed_ = 0;
    totalCoresUsedIsSet_ = false;
    totalFloatingIpsUsed_ = 0;
    totalFloatingIpsUsedIsSet_ = false;
    totalInstancesUsed_ = 0;
    totalInstancesUsedIsSet_ = false;
    totalRAMUsed_ = 0;
    totalRAMUsedIsSet_ = false;
    totalSecurityGroupsUsed_ = 0;
    totalSecurityGroupsUsedIsSet_ = false;
    totalServerGroupsUsed_ = 0;
    totalServerGroupsUsedIsSet_ = false;
    maxTotalSpotInstances_ = 0;
    maxTotalSpotInstancesIsSet_ = false;
    maxTotalSpotCores_ = 0;
    maxTotalSpotCoresIsSet_ = false;
    maxTotalSpotRAMSize_ = 0;
    maxTotalSpotRAMSizeIsSet_ = false;
    totalSpotInstancesUsed_ = 0;
    totalSpotInstancesUsedIsSet_ = false;
    totalSpotCoresUsed_ = 0;
    totalSpotCoresUsedIsSet_ = false;
    totalSpotRAMUsed_ = 0;
    totalSpotRAMUsedIsSet_ = false;
    limitByFlavorIsSet_ = false;
}

ServerLimits::~ServerLimits() = default;

void ServerLimits::validate()
{
}

web::json::value ServerLimits::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxImageMetaIsSet_) {
        val[utility::conversions::to_string_t("maxImageMeta")] = ModelBase::toJson(maxImageMeta_);
    }
    if(maxPersonalityIsSet_) {
        val[utility::conversions::to_string_t("maxPersonality")] = ModelBase::toJson(maxPersonality_);
    }
    if(maxPersonalitySizeIsSet_) {
        val[utility::conversions::to_string_t("maxPersonalitySize")] = ModelBase::toJson(maxPersonalitySize_);
    }
    if(maxSecurityGroupRulesIsSet_) {
        val[utility::conversions::to_string_t("maxSecurityGroupRules")] = ModelBase::toJson(maxSecurityGroupRules_);
    }
    if(maxSecurityGroupsIsSet_) {
        val[utility::conversions::to_string_t("maxSecurityGroups")] = ModelBase::toJson(maxSecurityGroups_);
    }
    if(maxServerGroupMembersIsSet_) {
        val[utility::conversions::to_string_t("maxServerGroupMembers")] = ModelBase::toJson(maxServerGroupMembers_);
    }
    if(maxServerGroupsIsSet_) {
        val[utility::conversions::to_string_t("maxServerGroups")] = ModelBase::toJson(maxServerGroups_);
    }
    if(maxServerMetaIsSet_) {
        val[utility::conversions::to_string_t("maxServerMeta")] = ModelBase::toJson(maxServerMeta_);
    }
    if(maxTotalCoresIsSet_) {
        val[utility::conversions::to_string_t("maxTotalCores")] = ModelBase::toJson(maxTotalCores_);
    }
    if(maxTotalFloatingIpsIsSet_) {
        val[utility::conversions::to_string_t("maxTotalFloatingIps")] = ModelBase::toJson(maxTotalFloatingIps_);
    }
    if(maxTotalInstancesIsSet_) {
        val[utility::conversions::to_string_t("maxTotalInstances")] = ModelBase::toJson(maxTotalInstances_);
    }
    if(maxTotalKeypairsIsSet_) {
        val[utility::conversions::to_string_t("maxTotalKeypairs")] = ModelBase::toJson(maxTotalKeypairs_);
    }
    if(maxTotalRAMSizeIsSet_) {
        val[utility::conversions::to_string_t("maxTotalRAMSize")] = ModelBase::toJson(maxTotalRAMSize_);
    }
    if(totalCoresUsedIsSet_) {
        val[utility::conversions::to_string_t("totalCoresUsed")] = ModelBase::toJson(totalCoresUsed_);
    }
    if(totalFloatingIpsUsedIsSet_) {
        val[utility::conversions::to_string_t("totalFloatingIpsUsed")] = ModelBase::toJson(totalFloatingIpsUsed_);
    }
    if(totalInstancesUsedIsSet_) {
        val[utility::conversions::to_string_t("totalInstancesUsed")] = ModelBase::toJson(totalInstancesUsed_);
    }
    if(totalRAMUsedIsSet_) {
        val[utility::conversions::to_string_t("totalRAMUsed")] = ModelBase::toJson(totalRAMUsed_);
    }
    if(totalSecurityGroupsUsedIsSet_) {
        val[utility::conversions::to_string_t("totalSecurityGroupsUsed")] = ModelBase::toJson(totalSecurityGroupsUsed_);
    }
    if(totalServerGroupsUsedIsSet_) {
        val[utility::conversions::to_string_t("totalServerGroupsUsed")] = ModelBase::toJson(totalServerGroupsUsed_);
    }
    if(maxTotalSpotInstancesIsSet_) {
        val[utility::conversions::to_string_t("maxTotalSpotInstances")] = ModelBase::toJson(maxTotalSpotInstances_);
    }
    if(maxTotalSpotCoresIsSet_) {
        val[utility::conversions::to_string_t("maxTotalSpotCores")] = ModelBase::toJson(maxTotalSpotCores_);
    }
    if(maxTotalSpotRAMSizeIsSet_) {
        val[utility::conversions::to_string_t("maxTotalSpotRAMSize")] = ModelBase::toJson(maxTotalSpotRAMSize_);
    }
    if(totalSpotInstancesUsedIsSet_) {
        val[utility::conversions::to_string_t("totalSpotInstancesUsed")] = ModelBase::toJson(totalSpotInstancesUsed_);
    }
    if(totalSpotCoresUsedIsSet_) {
        val[utility::conversions::to_string_t("totalSpotCoresUsed")] = ModelBase::toJson(totalSpotCoresUsed_);
    }
    if(totalSpotRAMUsedIsSet_) {
        val[utility::conversions::to_string_t("totalSpotRAMUsed")] = ModelBase::toJson(totalSpotRAMUsed_);
    }
    if(limitByFlavorIsSet_) {
        val[utility::conversions::to_string_t("limit_by_flavor")] = ModelBase::toJson(limitByFlavor_);
    }

    return val;
}

bool ServerLimits::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("maxImageMeta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxImageMeta"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxImageMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxPersonality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxPersonality"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPersonality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxPersonalitySize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxPersonalitySize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPersonalitySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxSecurityGroupRules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxSecurityGroupRules"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxSecurityGroupRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxSecurityGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxSecurityGroups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxServerGroupMembers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxServerGroupMembers"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxServerGroupMembers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxServerGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxServerGroups"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxServerGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxServerMeta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxServerMeta"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxServerMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalCores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalCores"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalCores(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalFloatingIps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalFloatingIps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalFloatingIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalInstances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalInstances"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalKeypairs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalKeypairs"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalKeypairs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalRAMSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalRAMSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalRAMSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalCoresUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalCoresUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCoresUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalFloatingIpsUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalFloatingIpsUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalFloatingIpsUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalInstancesUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalInstancesUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalInstancesUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalRAMUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalRAMUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRAMUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalSecurityGroupsUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalSecurityGroupsUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSecurityGroupsUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalServerGroupsUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalServerGroupsUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalServerGroupsUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalSpotInstances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalSpotInstances"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalSpotInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalSpotCores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalSpotCores"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalSpotCores(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxTotalSpotRAMSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxTotalSpotRAMSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTotalSpotRAMSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalSpotInstancesUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalSpotInstancesUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSpotInstancesUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalSpotCoresUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalSpotCoresUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSpotCoresUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalSpotRAMUsed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalSpotRAMUsed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSpotRAMUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_by_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_by_flavor"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectFlavorLimit> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitByFlavor(refVal);
        }
    }
    return ok;
}

int32_t ServerLimits::getMaxImageMeta() const
{
    return maxImageMeta_;
}

void ServerLimits::setMaxImageMeta(int32_t value)
{
    maxImageMeta_ = value;
    maxImageMetaIsSet_ = true;
}

bool ServerLimits::maxImageMetaIsSet() const
{
    return maxImageMetaIsSet_;
}

void ServerLimits::unsetmaxImageMeta()
{
    maxImageMetaIsSet_ = false;
}

int32_t ServerLimits::getMaxPersonality() const
{
    return maxPersonality_;
}

void ServerLimits::setMaxPersonality(int32_t value)
{
    maxPersonality_ = value;
    maxPersonalityIsSet_ = true;
}

bool ServerLimits::maxPersonalityIsSet() const
{
    return maxPersonalityIsSet_;
}

void ServerLimits::unsetmaxPersonality()
{
    maxPersonalityIsSet_ = false;
}

int32_t ServerLimits::getMaxPersonalitySize() const
{
    return maxPersonalitySize_;
}

void ServerLimits::setMaxPersonalitySize(int32_t value)
{
    maxPersonalitySize_ = value;
    maxPersonalitySizeIsSet_ = true;
}

bool ServerLimits::maxPersonalitySizeIsSet() const
{
    return maxPersonalitySizeIsSet_;
}

void ServerLimits::unsetmaxPersonalitySize()
{
    maxPersonalitySizeIsSet_ = false;
}

int32_t ServerLimits::getMaxSecurityGroupRules() const
{
    return maxSecurityGroupRules_;
}

void ServerLimits::setMaxSecurityGroupRules(int32_t value)
{
    maxSecurityGroupRules_ = value;
    maxSecurityGroupRulesIsSet_ = true;
}

bool ServerLimits::maxSecurityGroupRulesIsSet() const
{
    return maxSecurityGroupRulesIsSet_;
}

void ServerLimits::unsetmaxSecurityGroupRules()
{
    maxSecurityGroupRulesIsSet_ = false;
}

int32_t ServerLimits::getMaxSecurityGroups() const
{
    return maxSecurityGroups_;
}

void ServerLimits::setMaxSecurityGroups(int32_t value)
{
    maxSecurityGroups_ = value;
    maxSecurityGroupsIsSet_ = true;
}

bool ServerLimits::maxSecurityGroupsIsSet() const
{
    return maxSecurityGroupsIsSet_;
}

void ServerLimits::unsetmaxSecurityGroups()
{
    maxSecurityGroupsIsSet_ = false;
}

int32_t ServerLimits::getMaxServerGroupMembers() const
{
    return maxServerGroupMembers_;
}

void ServerLimits::setMaxServerGroupMembers(int32_t value)
{
    maxServerGroupMembers_ = value;
    maxServerGroupMembersIsSet_ = true;
}

bool ServerLimits::maxServerGroupMembersIsSet() const
{
    return maxServerGroupMembersIsSet_;
}

void ServerLimits::unsetmaxServerGroupMembers()
{
    maxServerGroupMembersIsSet_ = false;
}

int32_t ServerLimits::getMaxServerGroups() const
{
    return maxServerGroups_;
}

void ServerLimits::setMaxServerGroups(int32_t value)
{
    maxServerGroups_ = value;
    maxServerGroupsIsSet_ = true;
}

bool ServerLimits::maxServerGroupsIsSet() const
{
    return maxServerGroupsIsSet_;
}

void ServerLimits::unsetmaxServerGroups()
{
    maxServerGroupsIsSet_ = false;
}

int32_t ServerLimits::getMaxServerMeta() const
{
    return maxServerMeta_;
}

void ServerLimits::setMaxServerMeta(int32_t value)
{
    maxServerMeta_ = value;
    maxServerMetaIsSet_ = true;
}

bool ServerLimits::maxServerMetaIsSet() const
{
    return maxServerMetaIsSet_;
}

void ServerLimits::unsetmaxServerMeta()
{
    maxServerMetaIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalCores() const
{
    return maxTotalCores_;
}

void ServerLimits::setMaxTotalCores(int32_t value)
{
    maxTotalCores_ = value;
    maxTotalCoresIsSet_ = true;
}

bool ServerLimits::maxTotalCoresIsSet() const
{
    return maxTotalCoresIsSet_;
}

void ServerLimits::unsetmaxTotalCores()
{
    maxTotalCoresIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalFloatingIps() const
{
    return maxTotalFloatingIps_;
}

void ServerLimits::setMaxTotalFloatingIps(int32_t value)
{
    maxTotalFloatingIps_ = value;
    maxTotalFloatingIpsIsSet_ = true;
}

bool ServerLimits::maxTotalFloatingIpsIsSet() const
{
    return maxTotalFloatingIpsIsSet_;
}

void ServerLimits::unsetmaxTotalFloatingIps()
{
    maxTotalFloatingIpsIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalInstances() const
{
    return maxTotalInstances_;
}

void ServerLimits::setMaxTotalInstances(int32_t value)
{
    maxTotalInstances_ = value;
    maxTotalInstancesIsSet_ = true;
}

bool ServerLimits::maxTotalInstancesIsSet() const
{
    return maxTotalInstancesIsSet_;
}

void ServerLimits::unsetmaxTotalInstances()
{
    maxTotalInstancesIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalKeypairs() const
{
    return maxTotalKeypairs_;
}

void ServerLimits::setMaxTotalKeypairs(int32_t value)
{
    maxTotalKeypairs_ = value;
    maxTotalKeypairsIsSet_ = true;
}

bool ServerLimits::maxTotalKeypairsIsSet() const
{
    return maxTotalKeypairsIsSet_;
}

void ServerLimits::unsetmaxTotalKeypairs()
{
    maxTotalKeypairsIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalRAMSize() const
{
    return maxTotalRAMSize_;
}

void ServerLimits::setMaxTotalRAMSize(int32_t value)
{
    maxTotalRAMSize_ = value;
    maxTotalRAMSizeIsSet_ = true;
}

bool ServerLimits::maxTotalRAMSizeIsSet() const
{
    return maxTotalRAMSizeIsSet_;
}

void ServerLimits::unsetmaxTotalRAMSize()
{
    maxTotalRAMSizeIsSet_ = false;
}

int32_t ServerLimits::getTotalCoresUsed() const
{
    return totalCoresUsed_;
}

void ServerLimits::setTotalCoresUsed(int32_t value)
{
    totalCoresUsed_ = value;
    totalCoresUsedIsSet_ = true;
}

bool ServerLimits::totalCoresUsedIsSet() const
{
    return totalCoresUsedIsSet_;
}

void ServerLimits::unsettotalCoresUsed()
{
    totalCoresUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalFloatingIpsUsed() const
{
    return totalFloatingIpsUsed_;
}

void ServerLimits::setTotalFloatingIpsUsed(int32_t value)
{
    totalFloatingIpsUsed_ = value;
    totalFloatingIpsUsedIsSet_ = true;
}

bool ServerLimits::totalFloatingIpsUsedIsSet() const
{
    return totalFloatingIpsUsedIsSet_;
}

void ServerLimits::unsettotalFloatingIpsUsed()
{
    totalFloatingIpsUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalInstancesUsed() const
{
    return totalInstancesUsed_;
}

void ServerLimits::setTotalInstancesUsed(int32_t value)
{
    totalInstancesUsed_ = value;
    totalInstancesUsedIsSet_ = true;
}

bool ServerLimits::totalInstancesUsedIsSet() const
{
    return totalInstancesUsedIsSet_;
}

void ServerLimits::unsettotalInstancesUsed()
{
    totalInstancesUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalRAMUsed() const
{
    return totalRAMUsed_;
}

void ServerLimits::setTotalRAMUsed(int32_t value)
{
    totalRAMUsed_ = value;
    totalRAMUsedIsSet_ = true;
}

bool ServerLimits::totalRAMUsedIsSet() const
{
    return totalRAMUsedIsSet_;
}

void ServerLimits::unsettotalRAMUsed()
{
    totalRAMUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalSecurityGroupsUsed() const
{
    return totalSecurityGroupsUsed_;
}

void ServerLimits::setTotalSecurityGroupsUsed(int32_t value)
{
    totalSecurityGroupsUsed_ = value;
    totalSecurityGroupsUsedIsSet_ = true;
}

bool ServerLimits::totalSecurityGroupsUsedIsSet() const
{
    return totalSecurityGroupsUsedIsSet_;
}

void ServerLimits::unsettotalSecurityGroupsUsed()
{
    totalSecurityGroupsUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalServerGroupsUsed() const
{
    return totalServerGroupsUsed_;
}

void ServerLimits::setTotalServerGroupsUsed(int32_t value)
{
    totalServerGroupsUsed_ = value;
    totalServerGroupsUsedIsSet_ = true;
}

bool ServerLimits::totalServerGroupsUsedIsSet() const
{
    return totalServerGroupsUsedIsSet_;
}

void ServerLimits::unsettotalServerGroupsUsed()
{
    totalServerGroupsUsedIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalSpotInstances() const
{
    return maxTotalSpotInstances_;
}

void ServerLimits::setMaxTotalSpotInstances(int32_t value)
{
    maxTotalSpotInstances_ = value;
    maxTotalSpotInstancesIsSet_ = true;
}

bool ServerLimits::maxTotalSpotInstancesIsSet() const
{
    return maxTotalSpotInstancesIsSet_;
}

void ServerLimits::unsetmaxTotalSpotInstances()
{
    maxTotalSpotInstancesIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalSpotCores() const
{
    return maxTotalSpotCores_;
}

void ServerLimits::setMaxTotalSpotCores(int32_t value)
{
    maxTotalSpotCores_ = value;
    maxTotalSpotCoresIsSet_ = true;
}

bool ServerLimits::maxTotalSpotCoresIsSet() const
{
    return maxTotalSpotCoresIsSet_;
}

void ServerLimits::unsetmaxTotalSpotCores()
{
    maxTotalSpotCoresIsSet_ = false;
}

int32_t ServerLimits::getMaxTotalSpotRAMSize() const
{
    return maxTotalSpotRAMSize_;
}

void ServerLimits::setMaxTotalSpotRAMSize(int32_t value)
{
    maxTotalSpotRAMSize_ = value;
    maxTotalSpotRAMSizeIsSet_ = true;
}

bool ServerLimits::maxTotalSpotRAMSizeIsSet() const
{
    return maxTotalSpotRAMSizeIsSet_;
}

void ServerLimits::unsetmaxTotalSpotRAMSize()
{
    maxTotalSpotRAMSizeIsSet_ = false;
}

int32_t ServerLimits::getTotalSpotInstancesUsed() const
{
    return totalSpotInstancesUsed_;
}

void ServerLimits::setTotalSpotInstancesUsed(int32_t value)
{
    totalSpotInstancesUsed_ = value;
    totalSpotInstancesUsedIsSet_ = true;
}

bool ServerLimits::totalSpotInstancesUsedIsSet() const
{
    return totalSpotInstancesUsedIsSet_;
}

void ServerLimits::unsettotalSpotInstancesUsed()
{
    totalSpotInstancesUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalSpotCoresUsed() const
{
    return totalSpotCoresUsed_;
}

void ServerLimits::setTotalSpotCoresUsed(int32_t value)
{
    totalSpotCoresUsed_ = value;
    totalSpotCoresUsedIsSet_ = true;
}

bool ServerLimits::totalSpotCoresUsedIsSet() const
{
    return totalSpotCoresUsedIsSet_;
}

void ServerLimits::unsettotalSpotCoresUsed()
{
    totalSpotCoresUsedIsSet_ = false;
}

int32_t ServerLimits::getTotalSpotRAMUsed() const
{
    return totalSpotRAMUsed_;
}

void ServerLimits::setTotalSpotRAMUsed(int32_t value)
{
    totalSpotRAMUsed_ = value;
    totalSpotRAMUsedIsSet_ = true;
}

bool ServerLimits::totalSpotRAMUsedIsSet() const
{
    return totalSpotRAMUsedIsSet_;
}

void ServerLimits::unsettotalSpotRAMUsed()
{
    totalSpotRAMUsedIsSet_ = false;
}

std::vector<ProjectFlavorLimit>& ServerLimits::getLimitByFlavor()
{
    return limitByFlavor_;
}

void ServerLimits::setLimitByFlavor(const std::vector<ProjectFlavorLimit>& value)
{
    limitByFlavor_ = value;
    limitByFlavorIsSet_ = true;
}

bool ServerLimits::limitByFlavorIsSet() const
{
    return limitByFlavorIsSet_;
}

void ServerLimits::unsetlimitByFlavor()
{
    limitByFlavorIsSet_ = false;
}

}
}
}
}
}


