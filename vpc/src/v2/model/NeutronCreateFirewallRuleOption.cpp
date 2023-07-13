

#include "huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateFirewallRuleOption::NeutronCreateFirewallRuleOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    destinationIpAddress_ = "";
    destinationIpAddressIsSet_ = false;
    destinationPort_ = "";
    destinationPortIsSet_ = false;
    sourceIpAddress_ = "";
    sourceIpAddressIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

NeutronCreateFirewallRuleOption::~NeutronCreateFirewallRuleOption() = default;

void NeutronCreateFirewallRuleOption::validate()
{
}

web::json::value NeutronCreateFirewallRuleOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(destinationIpAddressIsSet_) {
        val[utility::conversions::to_string_t("destination_ip_address")] = ModelBase::toJson(destinationIpAddress_);
    }
    if(destinationPortIsSet_) {
        val[utility::conversions::to_string_t("destination_port")] = ModelBase::toJson(destinationPort_);
    }
    if(sourceIpAddressIsSet_) {
        val[utility::conversions::to_string_t("source_ip_address")] = ModelBase::toJson(sourceIpAddress_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}

bool NeutronCreateFirewallRuleOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}

std::string NeutronCreateFirewallRuleOption::getName() const
{
    return name_;
}

void NeutronCreateFirewallRuleOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getDescription() const
{
    return description_;
}

void NeutronCreateFirewallRuleOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getProtocol() const
{
    return protocol_;
}

void NeutronCreateFirewallRuleOption::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getAction() const
{
    return action_;
}

void NeutronCreateFirewallRuleOption::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::actionIsSet() const
{
    return actionIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetaction()
{
    actionIsSet_ = false;
}

int32_t NeutronCreateFirewallRuleOption::getIpVersion() const
{
    return ipVersion_;
}

void NeutronCreateFirewallRuleOption::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getDestinationIpAddress() const
{
    return destinationIpAddress_;
}

void NeutronCreateFirewallRuleOption::setDestinationIpAddress(const std::string& value)
{
    destinationIpAddress_ = value;
    destinationIpAddressIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::destinationIpAddressIsSet() const
{
    return destinationIpAddressIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetdestinationIpAddress()
{
    destinationIpAddressIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getDestinationPort() const
{
    return destinationPort_;
}

void NeutronCreateFirewallRuleOption::setDestinationPort(const std::string& value)
{
    destinationPort_ = value;
    destinationPortIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::destinationPortIsSet() const
{
    return destinationPortIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetdestinationPort()
{
    destinationPortIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getSourceIpAddress() const
{
    return sourceIpAddress_;
}

void NeutronCreateFirewallRuleOption::setSourceIpAddress(const std::string& value)
{
    sourceIpAddress_ = value;
    sourceIpAddressIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::sourceIpAddressIsSet() const
{
    return sourceIpAddressIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetsourceIpAddress()
{
    sourceIpAddressIsSet_ = false;
}

std::string NeutronCreateFirewallRuleOption::getSourcePort() const
{
    return sourcePort_;
}

void NeutronCreateFirewallRuleOption::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

bool NeutronCreateFirewallRuleOption::isEnabled() const
{
    return enabled_;
}

void NeutronCreateFirewallRuleOption::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool NeutronCreateFirewallRuleOption::enabledIsSet() const
{
    return enabledIsSet_;
}

void NeutronCreateFirewallRuleOption::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


