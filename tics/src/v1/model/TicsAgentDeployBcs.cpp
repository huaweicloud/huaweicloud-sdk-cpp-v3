

#include "huaweicloud/tics/v1/model/TicsAgentDeployBcs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsAgentDeployBcs::TicsAgentDeployBcs()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    bcsIp_ = "";
    bcsIpIsSet_ = false;
    blockChainId_ = "";
    blockChainIdIsSet_ = false;
    blockChainName_ = "";
    blockChainNameIsSet_ = false;
    channelName_ = "";
    channelNameIsSet_ = false;
    orgName_ = "";
    orgNameIsSet_ = false;
    orgNameHash_ = "";
    orgNameHashIsSet_ = false;
}

TicsAgentDeployBcs::~TicsAgentDeployBcs() = default;

void TicsAgentDeployBcs::validate()
{
}

web::json::value TicsAgentDeployBcs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(bcsIpIsSet_) {
        val[utility::conversions::to_string_t("bcs_ip")] = ModelBase::toJson(bcsIp_);
    }
    if(blockChainIdIsSet_) {
        val[utility::conversions::to_string_t("block_chain_id")] = ModelBase::toJson(blockChainId_);
    }
    if(blockChainNameIsSet_) {
        val[utility::conversions::to_string_t("block_chain_name")] = ModelBase::toJson(blockChainName_);
    }
    if(channelNameIsSet_) {
        val[utility::conversions::to_string_t("channel_name")] = ModelBase::toJson(channelName_);
    }
    if(orgNameIsSet_) {
        val[utility::conversions::to_string_t("org_name")] = ModelBase::toJson(orgName_);
    }
    if(orgNameHashIsSet_) {
        val[utility::conversions::to_string_t("org_name_hash")] = ModelBase::toJson(orgNameHash_);
    }

    return val;
}
bool TicsAgentDeployBcs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bcs_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bcs_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBcsIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_chain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_chain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockChainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_chain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_chain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockChainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channel_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("org_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("org_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("org_name_hash"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("org_name_hash"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgNameHash(refVal);
        }
    }
    return ok;
}


std::string TicsAgentDeployBcs::getAgentId() const
{
    return agentId_;
}

void TicsAgentDeployBcs::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool TicsAgentDeployBcs::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void TicsAgentDeployBcs::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string TicsAgentDeployBcs::getBcsIp() const
{
    return bcsIp_;
}

void TicsAgentDeployBcs::setBcsIp(const std::string& value)
{
    bcsIp_ = value;
    bcsIpIsSet_ = true;
}

bool TicsAgentDeployBcs::bcsIpIsSet() const
{
    return bcsIpIsSet_;
}

void TicsAgentDeployBcs::unsetbcsIp()
{
    bcsIpIsSet_ = false;
}

std::string TicsAgentDeployBcs::getBlockChainId() const
{
    return blockChainId_;
}

void TicsAgentDeployBcs::setBlockChainId(const std::string& value)
{
    blockChainId_ = value;
    blockChainIdIsSet_ = true;
}

bool TicsAgentDeployBcs::blockChainIdIsSet() const
{
    return blockChainIdIsSet_;
}

void TicsAgentDeployBcs::unsetblockChainId()
{
    blockChainIdIsSet_ = false;
}

std::string TicsAgentDeployBcs::getBlockChainName() const
{
    return blockChainName_;
}

void TicsAgentDeployBcs::setBlockChainName(const std::string& value)
{
    blockChainName_ = value;
    blockChainNameIsSet_ = true;
}

bool TicsAgentDeployBcs::blockChainNameIsSet() const
{
    return blockChainNameIsSet_;
}

void TicsAgentDeployBcs::unsetblockChainName()
{
    blockChainNameIsSet_ = false;
}

std::string TicsAgentDeployBcs::getChannelName() const
{
    return channelName_;
}

void TicsAgentDeployBcs::setChannelName(const std::string& value)
{
    channelName_ = value;
    channelNameIsSet_ = true;
}

bool TicsAgentDeployBcs::channelNameIsSet() const
{
    return channelNameIsSet_;
}

void TicsAgentDeployBcs::unsetchannelName()
{
    channelNameIsSet_ = false;
}

std::string TicsAgentDeployBcs::getOrgName() const
{
    return orgName_;
}

void TicsAgentDeployBcs::setOrgName(const std::string& value)
{
    orgName_ = value;
    orgNameIsSet_ = true;
}

bool TicsAgentDeployBcs::orgNameIsSet() const
{
    return orgNameIsSet_;
}

void TicsAgentDeployBcs::unsetorgName()
{
    orgNameIsSet_ = false;
}

std::string TicsAgentDeployBcs::getOrgNameHash() const
{
    return orgNameHash_;
}

void TicsAgentDeployBcs::setOrgNameHash(const std::string& value)
{
    orgNameHash_ = value;
    orgNameHashIsSet_ = true;
}

bool TicsAgentDeployBcs::orgNameHashIsSet() const
{
    return orgNameHashIsSet_;
}

void TicsAgentDeployBcs::unsetorgNameHash()
{
    orgNameHashIsSet_ = false;
}

}
}
}
}
}


