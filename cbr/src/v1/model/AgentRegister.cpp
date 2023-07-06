

#include "huaweicloud/cbr/v1/model/AgentRegister.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AgentRegister::AgentRegister()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    hostIp_ = "";
    hostIpIsSet_ = false;
    hostOs_ = "";
    hostOsIsSet_ = false;
    hostNickname_ = "";
    hostNicknameIsSet_ = false;
    agentVersion_ = "";
    agentVersionIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
}

AgentRegister::~AgentRegister() = default;

void AgentRegister::validate()
{
}

web::json::value AgentRegister::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(hostIpIsSet_) {
        val[utility::conversions::to_string_t("host_ip")] = ModelBase::toJson(hostIp_);
    }
    if(hostOsIsSet_) {
        val[utility::conversions::to_string_t("host_os")] = ModelBase::toJson(hostOs_);
    }
    if(hostNicknameIsSet_) {
        val[utility::conversions::to_string_t("host_nickname")] = ModelBase::toJson(hostNickname_);
    }
    if(agentVersionIsSet_) {
        val[utility::conversions::to_string_t("agent_version")] = ModelBase::toJson(agentVersion_);
    }
    if(agentTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_type")] = ModelBase::toJson(agentType_);
    }

    return val;
}

bool AgentRegister::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_nickname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_nickname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNickname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentType(refVal);
        }
    }
    return ok;
}

std::string AgentRegister::getAgentId() const
{
    return agentId_;
}

void AgentRegister::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool AgentRegister::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void AgentRegister::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string AgentRegister::getHostName() const
{
    return hostName_;
}

void AgentRegister::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool AgentRegister::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void AgentRegister::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string AgentRegister::getHostIp() const
{
    return hostIp_;
}

void AgentRegister::setHostIp(const std::string& value)
{
    hostIp_ = value;
    hostIpIsSet_ = true;
}

bool AgentRegister::hostIpIsSet() const
{
    return hostIpIsSet_;
}

void AgentRegister::unsethostIp()
{
    hostIpIsSet_ = false;
}

std::string AgentRegister::getHostOs() const
{
    return hostOs_;
}

void AgentRegister::setHostOs(const std::string& value)
{
    hostOs_ = value;
    hostOsIsSet_ = true;
}

bool AgentRegister::hostOsIsSet() const
{
    return hostOsIsSet_;
}

void AgentRegister::unsethostOs()
{
    hostOsIsSet_ = false;
}

std::string AgentRegister::getHostNickname() const
{
    return hostNickname_;
}

void AgentRegister::setHostNickname(const std::string& value)
{
    hostNickname_ = value;
    hostNicknameIsSet_ = true;
}

bool AgentRegister::hostNicknameIsSet() const
{
    return hostNicknameIsSet_;
}

void AgentRegister::unsethostNickname()
{
    hostNicknameIsSet_ = false;
}

std::string AgentRegister::getAgentVersion() const
{
    return agentVersion_;
}

void AgentRegister::setAgentVersion(const std::string& value)
{
    agentVersion_ = value;
    agentVersionIsSet_ = true;
}

bool AgentRegister::agentVersionIsSet() const
{
    return agentVersionIsSet_;
}

void AgentRegister::unsetagentVersion()
{
    agentVersionIsSet_ = false;
}

std::string AgentRegister::getAgentType() const
{
    return agentType_;
}

void AgentRegister::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool AgentRegister::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void AgentRegister::unsetagentType()
{
    agentTypeIsSet_ = false;
}

}
}
}
}
}


