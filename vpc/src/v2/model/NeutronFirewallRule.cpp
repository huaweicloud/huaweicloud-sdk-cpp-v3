

#include "huaweicloud/vpc/v2/model/NeutronFirewallRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronFirewallRule::NeutronFirewallRule()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    public_ = false;
    publicIsSet_ = false;
    destinationIpAddress_ = "";
    destinationIpAddressIsSet_ = false;
    destinationPort_ = "";
    destinationPortIsSet_ = false;
    sourceIpAddress_ = "";
    sourceIpAddressIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

NeutronFirewallRule::~NeutronFirewallRule() = default;

void NeutronFirewallRule::validate()
{
}

web::json::value NeutronFirewallRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(publicIsSet_) {
        val[utility::conversions::to_string_t("public")] = ModelBase::toJson(public_);
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
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool NeutronFirewallRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublic(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string NeutronFirewallRule::getId() const
{
    return id_;
}

void NeutronFirewallRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronFirewallRule::idIsSet() const
{
    return idIsSet_;
}

void NeutronFirewallRule::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronFirewallRule::getName() const
{
    return name_;
}

void NeutronFirewallRule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronFirewallRule::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronFirewallRule::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronFirewallRule::getDescription() const
{
    return description_;
}

void NeutronFirewallRule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronFirewallRule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronFirewallRule::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronFirewallRule::getAction() const
{
    return action_;
}

void NeutronFirewallRule::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool NeutronFirewallRule::actionIsSet() const
{
    return actionIsSet_;
}

void NeutronFirewallRule::unsetaction()
{
    actionIsSet_ = false;
}

std::string NeutronFirewallRule::getProtocol() const
{
    return protocol_;
}

void NeutronFirewallRule::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NeutronFirewallRule::protocolIsSet() const
{
    return protocolIsSet_;
}

void NeutronFirewallRule::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t NeutronFirewallRule::getIpVersion() const
{
    return ipVersion_;
}

void NeutronFirewallRule::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool NeutronFirewallRule::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void NeutronFirewallRule::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

bool NeutronFirewallRule::isEnabled() const
{
    return enabled_;
}

void NeutronFirewallRule::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool NeutronFirewallRule::enabledIsSet() const
{
    return enabledIsSet_;
}

void NeutronFirewallRule::unsetenabled()
{
    enabledIsSet_ = false;
}

bool NeutronFirewallRule::isPublic() const
{
    return public_;
}

void NeutronFirewallRule::setPublic(bool value)
{
    public_ = value;
    publicIsSet_ = true;
}

bool NeutronFirewallRule::publicIsSet() const
{
    return publicIsSet_;
}

void NeutronFirewallRule::unsetpublic()
{
    publicIsSet_ = false;
}

std::string NeutronFirewallRule::getDestinationIpAddress() const
{
    return destinationIpAddress_;
}

void NeutronFirewallRule::setDestinationIpAddress(const std::string& value)
{
    destinationIpAddress_ = value;
    destinationIpAddressIsSet_ = true;
}

bool NeutronFirewallRule::destinationIpAddressIsSet() const
{
    return destinationIpAddressIsSet_;
}

void NeutronFirewallRule::unsetdestinationIpAddress()
{
    destinationIpAddressIsSet_ = false;
}

std::string NeutronFirewallRule::getDestinationPort() const
{
    return destinationPort_;
}

void NeutronFirewallRule::setDestinationPort(const std::string& value)
{
    destinationPort_ = value;
    destinationPortIsSet_ = true;
}

bool NeutronFirewallRule::destinationPortIsSet() const
{
    return destinationPortIsSet_;
}

void NeutronFirewallRule::unsetdestinationPort()
{
    destinationPortIsSet_ = false;
}

std::string NeutronFirewallRule::getSourceIpAddress() const
{
    return sourceIpAddress_;
}

void NeutronFirewallRule::setSourceIpAddress(const std::string& value)
{
    sourceIpAddress_ = value;
    sourceIpAddressIsSet_ = true;
}

bool NeutronFirewallRule::sourceIpAddressIsSet() const
{
    return sourceIpAddressIsSet_;
}

void NeutronFirewallRule::unsetsourceIpAddress()
{
    sourceIpAddressIsSet_ = false;
}

std::string NeutronFirewallRule::getSourcePort() const
{
    return sourcePort_;
}

void NeutronFirewallRule::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool NeutronFirewallRule::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void NeutronFirewallRule::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string NeutronFirewallRule::getTenantId() const
{
    return tenantId_;
}

void NeutronFirewallRule::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronFirewallRule::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronFirewallRule::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronFirewallRule::getProjectId() const
{
    return projectId_;
}

void NeutronFirewallRule::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool NeutronFirewallRule::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void NeutronFirewallRule::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


