

#include "huaweicloud/functiongraph/v2/model/NetworkControlConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




NetworkControlConfig::NetworkControlConfig()
{
    disablePublicNetwork_ = false;
    disablePublicNetworkIsSet_ = false;
    triggerAccessVpcsIsSet_ = false;
}

NetworkControlConfig::~NetworkControlConfig() = default;

void NetworkControlConfig::validate()
{
}

web::json::value NetworkControlConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disablePublicNetworkIsSet_) {
        val[utility::conversions::to_string_t("disable_public_network")] = ModelBase::toJson(disablePublicNetwork_);
    }
    if(triggerAccessVpcsIsSet_) {
        val[utility::conversions::to_string_t("trigger_access_vpcs")] = ModelBase::toJson(triggerAccessVpcs_);
    }

    return val;
}
bool NetworkControlConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disable_public_network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_public_network"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisablePublicNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_access_vpcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_access_vpcs"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerAccessVpcs(refVal);
        }
    }
    return ok;
}


bool NetworkControlConfig::isDisablePublicNetwork() const
{
    return disablePublicNetwork_;
}

void NetworkControlConfig::setDisablePublicNetwork(bool value)
{
    disablePublicNetwork_ = value;
    disablePublicNetworkIsSet_ = true;
}

bool NetworkControlConfig::disablePublicNetworkIsSet() const
{
    return disablePublicNetworkIsSet_;
}

void NetworkControlConfig::unsetdisablePublicNetwork()
{
    disablePublicNetworkIsSet_ = false;
}

std::vector<VpcConfig>& NetworkControlConfig::getTriggerAccessVpcs()
{
    return triggerAccessVpcs_;
}

void NetworkControlConfig::setTriggerAccessVpcs(const std::vector<VpcConfig>& value)
{
    triggerAccessVpcs_ = value;
    triggerAccessVpcsIsSet_ = true;
}

bool NetworkControlConfig::triggerAccessVpcsIsSet() const
{
    return triggerAccessVpcsIsSet_;
}

void NetworkControlConfig::unsettriggerAccessVpcs()
{
    triggerAccessVpcsIsSet_ = false;
}

}
}
}
}
}


