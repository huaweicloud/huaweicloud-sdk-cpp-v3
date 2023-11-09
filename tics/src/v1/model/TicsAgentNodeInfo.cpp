

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
    ecsServerId_ = "";
    ecsServerIdIsSet_ = false;
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
    if(ecsServerIdIsSet_) {
        val[utility::conversions::to_string_t("ecs_server_id")] = ModelBase::toJson(ecsServerId_);
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
    if(val.has_field(utility::conversions::to_string_t("ecs_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsServerId(refVal);
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

}
}
}
}
}


