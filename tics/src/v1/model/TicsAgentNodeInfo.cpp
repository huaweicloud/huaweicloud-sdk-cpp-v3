

#include "huaweicloud/tics/v1/model/TicsAgentNodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsAgentNodeInfo::TicsAgentNodeInfo()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    agentVpcepEpsId_ = "";
    agentVpcepEpsIdIsSet_ = false;
    ecsServerId_ = "";
    ecsServerIdIsSet_ = false;
    leagueServerIpSecurityGroupRule_ = "";
    leagueServerIpSecurityGroupRuleIsSet_ = false;
    leagueServerSnatIp_ = "";
    leagueServerSnatIpIsSet_ = false;
    natEip_ = "";
    natEipIsSet_ = false;
    natEipId_ = "";
    natEipIdIsSet_ = false;
    nodeAz_ = "";
    nodeAzIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeIp_ = "";
    nodeIpIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    serverToAgentVpcepEpiId_ = "";
    serverToAgentVpcepEpiIdIsSet_ = false;
    serverToAgentVpcepEpiIp_ = "";
    serverToAgentVpcepEpiIpIsSet_ = false;
    snatRuleId_ = "";
    snatRuleIdIsSet_ = false;
}

TicsAgentNodeInfo::~TicsAgentNodeInfo() = default;

void TicsAgentNodeInfo::validate()
{
}

web::json::value TicsAgentNodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(agentVpcepEpsIdIsSet_) {
        val[utility::conversions::to_string_t("agent_vpcep_eps_id")] = ModelBase::toJson(agentVpcepEpsId_);
    }
    if(ecsServerIdIsSet_) {
        val[utility::conversions::to_string_t("ecs_server_id")] = ModelBase::toJson(ecsServerId_);
    }
    if(leagueServerIpSecurityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("league_server_ip_security_group_rule")] = ModelBase::toJson(leagueServerIpSecurityGroupRule_);
    }
    if(leagueServerSnatIpIsSet_) {
        val[utility::conversions::to_string_t("league_server_snat_ip")] = ModelBase::toJson(leagueServerSnatIp_);
    }
    if(natEipIsSet_) {
        val[utility::conversions::to_string_t("nat_eip")] = ModelBase::toJson(natEip_);
    }
    if(natEipIdIsSet_) {
        val[utility::conversions::to_string_t("nat_eip_id")] = ModelBase::toJson(natEipId_);
    }
    if(nodeAzIsSet_) {
        val[utility::conversions::to_string_t("node_az")] = ModelBase::toJson(nodeAz_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeIpIsSet_) {
        val[utility::conversions::to_string_t("node_ip")] = ModelBase::toJson(nodeIp_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(serverToAgentVpcepEpiIdIsSet_) {
        val[utility::conversions::to_string_t("server_to_agent_vpcep_epi_id")] = ModelBase::toJson(serverToAgentVpcepEpiId_);
    }
    if(serverToAgentVpcepEpiIpIsSet_) {
        val[utility::conversions::to_string_t("server_to_agent_vpcep_epi_ip")] = ModelBase::toJson(serverToAgentVpcepEpiIp_);
    }
    if(snatRuleIdIsSet_) {
        val[utility::conversions::to_string_t("snat_rule_id")] = ModelBase::toJson(snatRuleId_);
    }

    return val;
}
bool TicsAgentNodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_vpcep_eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_vpcep_eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentVpcepEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_server_ip_security_group_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_server_ip_security_group_rule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueServerIpSecurityGroupRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_server_snat_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_server_snat_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueServerSnatIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nat_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat_eip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNatEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nat_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNatEipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_to_agent_vpcep_epi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_to_agent_vpcep_epi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerToAgentVpcepEpiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_to_agent_vpcep_epi_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_to_agent_vpcep_epi_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerToAgentVpcepEpiIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snat_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snat_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnatRuleId(refVal);
        }
    }
    return ok;
}


std::string TicsAgentNodeInfo::getAgentId() const
{
    return agentId_;
}

void TicsAgentNodeInfo::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool TicsAgentNodeInfo::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void TicsAgentNodeInfo::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string TicsAgentNodeInfo::getAgentVpcepEpsId() const
{
    return agentVpcepEpsId_;
}

void TicsAgentNodeInfo::setAgentVpcepEpsId(const std::string& value)
{
    agentVpcepEpsId_ = value;
    agentVpcepEpsIdIsSet_ = true;
}

bool TicsAgentNodeInfo::agentVpcepEpsIdIsSet() const
{
    return agentVpcepEpsIdIsSet_;
}

void TicsAgentNodeInfo::unsetagentVpcepEpsId()
{
    agentVpcepEpsIdIsSet_ = false;
}

std::string TicsAgentNodeInfo::getEcsServerId() const
{
    return ecsServerId_;
}

void TicsAgentNodeInfo::setEcsServerId(const std::string& value)
{
    ecsServerId_ = value;
    ecsServerIdIsSet_ = true;
}

bool TicsAgentNodeInfo::ecsServerIdIsSet() const
{
    return ecsServerIdIsSet_;
}

void TicsAgentNodeInfo::unsetecsServerId()
{
    ecsServerIdIsSet_ = false;
}

std::string TicsAgentNodeInfo::getLeagueServerIpSecurityGroupRule() const
{
    return leagueServerIpSecurityGroupRule_;
}

void TicsAgentNodeInfo::setLeagueServerIpSecurityGroupRule(const std::string& value)
{
    leagueServerIpSecurityGroupRule_ = value;
    leagueServerIpSecurityGroupRuleIsSet_ = true;
}

bool TicsAgentNodeInfo::leagueServerIpSecurityGroupRuleIsSet() const
{
    return leagueServerIpSecurityGroupRuleIsSet_;
}

void TicsAgentNodeInfo::unsetleagueServerIpSecurityGroupRule()
{
    leagueServerIpSecurityGroupRuleIsSet_ = false;
}

std::string TicsAgentNodeInfo::getLeagueServerSnatIp() const
{
    return leagueServerSnatIp_;
}

void TicsAgentNodeInfo::setLeagueServerSnatIp(const std::string& value)
{
    leagueServerSnatIp_ = value;
    leagueServerSnatIpIsSet_ = true;
}

bool TicsAgentNodeInfo::leagueServerSnatIpIsSet() const
{
    return leagueServerSnatIpIsSet_;
}

void TicsAgentNodeInfo::unsetleagueServerSnatIp()
{
    leagueServerSnatIpIsSet_ = false;
}

std::string TicsAgentNodeInfo::getNatEip() const
{
    return natEip_;
}

void TicsAgentNodeInfo::setNatEip(const std::string& value)
{
    natEip_ = value;
    natEipIsSet_ = true;
}

bool TicsAgentNodeInfo::natEipIsSet() const
{
    return natEipIsSet_;
}

void TicsAgentNodeInfo::unsetnatEip()
{
    natEipIsSet_ = false;
}

std::string TicsAgentNodeInfo::getNatEipId() const
{
    return natEipId_;
}

void TicsAgentNodeInfo::setNatEipId(const std::string& value)
{
    natEipId_ = value;
    natEipIdIsSet_ = true;
}

bool TicsAgentNodeInfo::natEipIdIsSet() const
{
    return natEipIdIsSet_;
}

void TicsAgentNodeInfo::unsetnatEipId()
{
    natEipIdIsSet_ = false;
}

std::string TicsAgentNodeInfo::getNodeAz() const
{
    return nodeAz_;
}

void TicsAgentNodeInfo::setNodeAz(const std::string& value)
{
    nodeAz_ = value;
    nodeAzIsSet_ = true;
}

bool TicsAgentNodeInfo::nodeAzIsSet() const
{
    return nodeAzIsSet_;
}

void TicsAgentNodeInfo::unsetnodeAz()
{
    nodeAzIsSet_ = false;
}

std::string TicsAgentNodeInfo::getNodeId() const
{
    return nodeId_;
}

void TicsAgentNodeInfo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TicsAgentNodeInfo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TicsAgentNodeInfo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string TicsAgentNodeInfo::getNodeIp() const
{
    return nodeIp_;
}

void TicsAgentNodeInfo::setNodeIp(const std::string& value)
{
    nodeIp_ = value;
    nodeIpIsSet_ = true;
}

bool TicsAgentNodeInfo::nodeIpIsSet() const
{
    return nodeIpIsSet_;
}

void TicsAgentNodeInfo::unsetnodeIp()
{
    nodeIpIsSet_ = false;
}

std::string TicsAgentNodeInfo::getNodeName() const
{
    return nodeName_;
}

void TicsAgentNodeInfo::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool TicsAgentNodeInfo::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void TicsAgentNodeInfo::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string TicsAgentNodeInfo::getServerToAgentVpcepEpiId() const
{
    return serverToAgentVpcepEpiId_;
}

void TicsAgentNodeInfo::setServerToAgentVpcepEpiId(const std::string& value)
{
    serverToAgentVpcepEpiId_ = value;
    serverToAgentVpcepEpiIdIsSet_ = true;
}

bool TicsAgentNodeInfo::serverToAgentVpcepEpiIdIsSet() const
{
    return serverToAgentVpcepEpiIdIsSet_;
}

void TicsAgentNodeInfo::unsetserverToAgentVpcepEpiId()
{
    serverToAgentVpcepEpiIdIsSet_ = false;
}

std::string TicsAgentNodeInfo::getServerToAgentVpcepEpiIp() const
{
    return serverToAgentVpcepEpiIp_;
}

void TicsAgentNodeInfo::setServerToAgentVpcepEpiIp(const std::string& value)
{
    serverToAgentVpcepEpiIp_ = value;
    serverToAgentVpcepEpiIpIsSet_ = true;
}

bool TicsAgentNodeInfo::serverToAgentVpcepEpiIpIsSet() const
{
    return serverToAgentVpcepEpiIpIsSet_;
}

void TicsAgentNodeInfo::unsetserverToAgentVpcepEpiIp()
{
    serverToAgentVpcepEpiIpIsSet_ = false;
}

std::string TicsAgentNodeInfo::getSnatRuleId() const
{
    return snatRuleId_;
}

void TicsAgentNodeInfo::setSnatRuleId(const std::string& value)
{
    snatRuleId_ = value;
    snatRuleIdIsSet_ = true;
}

bool TicsAgentNodeInfo::snatRuleIdIsSet() const
{
    return snatRuleIdIsSet_;
}

void TicsAgentNodeInfo::unsetsnatRuleId()
{
    snatRuleIdIsSet_ = false;
}

}
}
}
}
}


