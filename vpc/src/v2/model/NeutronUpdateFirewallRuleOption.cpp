

#include "huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateFirewallRuleOption::NeutronUpdateFirewallRuleOption()
{
    action_ = "";
    actionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    destinationIpAddress_ = "";
    destinationIpAddressIsSet_ = false;
    destinationPort_ = "";
    destinationPortIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    sourceIpAddress_ = "";
    sourceIpAddressIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
}

NeutronUpdateFirewallRuleOption::~NeutronUpdateFirewallRuleOption() = default;

void NeutronUpdateFirewallRuleOption::validate()
{
}

web::json::value NeutronUpdateFirewallRuleOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(destinationIpAddressIsSet_) {
        val[utility::conversions::to_string_t("destination_ip_address")] = ModelBase::toJson(destinationIpAddress_);
    }
    if(destinationPortIsSet_) {
        val[utility::conversions::to_string_t("destination_port")] = ModelBase::toJson(destinationPort_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(sourceIpAddressIsSet_) {
        val[utility::conversions::to_string_t("source_ip_address")] = ModelBase::toJson(sourceIpAddress_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }

    return val;
}

bool NeutronUpdateFirewallRuleOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    return ok;
}


std::string NeutronUpdateFirewallRuleOption::getAction() const
{
    return action_;
}

void NeutronUpdateFirewallRuleOption::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::actionIsSet() const
{
    return actionIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetaction()
{
    actionIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getDescription() const
{
    return description_;
}

void NeutronUpdateFirewallRuleOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getDestinationIpAddress() const
{
    return destinationIpAddress_;
}

void NeutronUpdateFirewallRuleOption::setDestinationIpAddress(const std::string& value)
{
    destinationIpAddress_ = value;
    destinationIpAddressIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::destinationIpAddressIsSet() const
{
    return destinationIpAddressIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetdestinationIpAddress()
{
    destinationIpAddressIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getDestinationPort() const
{
    return destinationPort_;
}

void NeutronUpdateFirewallRuleOption::setDestinationPort(const std::string& value)
{
    destinationPort_ = value;
    destinationPortIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::destinationPortIsSet() const
{
    return destinationPortIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetdestinationPort()
{
    destinationPortIsSet_ = false;
}

bool NeutronUpdateFirewallRuleOption::isEnabled() const
{
    return enabled_;
}

void NeutronUpdateFirewallRuleOption::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::enabledIsSet() const
{
    return enabledIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetenabled()
{
    enabledIsSet_ = false;
}

int32_t NeutronUpdateFirewallRuleOption::getIpVersion() const
{
    return ipVersion_;
}

void NeutronUpdateFirewallRuleOption::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getName() const
{
    return name_;
}

void NeutronUpdateFirewallRuleOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getProtocol() const
{
    return protocol_;
}

void NeutronUpdateFirewallRuleOption::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getSourceIpAddress() const
{
    return sourceIpAddress_;
}

void NeutronUpdateFirewallRuleOption::setSourceIpAddress(const std::string& value)
{
    sourceIpAddress_ = value;
    sourceIpAddressIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::sourceIpAddressIsSet() const
{
    return sourceIpAddressIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetsourceIpAddress()
{
    sourceIpAddressIsSet_ = false;
}

std::string NeutronUpdateFirewallRuleOption::getSourcePort() const
{
    return sourcePort_;
}

void NeutronUpdateFirewallRuleOption::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool NeutronUpdateFirewallRuleOption::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void NeutronUpdateFirewallRuleOption::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

}
}
}
}
}


