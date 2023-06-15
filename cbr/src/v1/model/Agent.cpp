

#include "huaweicloud/cbr/v1/model/Agent.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Agent::Agent()
{
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    agentVersion_ = "";
    agentVersionIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    hostNickname_ = "";
    hostNicknameIsSet_ = false;
    hostIp_ = "";
    hostIpIsSet_ = false;
    hostOs_ = "";
    hostOsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    lastActiveTime_ = utility::datetime();
    lastActiveTimeIsSet_ = false;
    pathsIsSet_ = false;
}

Agent::~Agent() = default;

void Agent::validate()
{
}

web::json::value Agent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(agentVersionIsSet_) {
        val[utility::conversions::to_string_t("agent_version")] = ModelBase::toJson(agentVersion_);
    }
    if(agentTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_type")] = ModelBase::toJson(agentType_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(hostNicknameIsSet_) {
        val[utility::conversions::to_string_t("host_nickname")] = ModelBase::toJson(hostNickname_);
    }
    if(hostIpIsSet_) {
        val[utility::conversions::to_string_t("host_ip")] = ModelBase::toJson(hostIp_);
    }
    if(hostOsIsSet_) {
        val[utility::conversions::to_string_t("host_os")] = ModelBase::toJson(hostOs_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastActiveTimeIsSet_) {
        val[utility::conversions::to_string_t("last_active_time")] = ModelBase::toJson(lastActiveTime_);
    }
    if(pathsIsSet_) {
        val[utility::conversions::to_string_t("paths")] = ModelBase::toJson(paths_);
    }

    return val;
}

bool Agent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_active_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_active_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastActiveTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paths"));
        if(!fieldValue.is_null())
        {
            std::vector<Path> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaths(refVal);
        }
    }
    return ok;
}


utility::datetime Agent::getCreatedAt() const
{
    return createdAt_;
}

void Agent::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Agent::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Agent::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime Agent::getUpdatedAt() const
{
    return updatedAt_;
}

void Agent::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool Agent::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void Agent::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string Agent::getAgentId() const
{
    return agentId_;
}

void Agent::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool Agent::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void Agent::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string Agent::getAgentVersion() const
{
    return agentVersion_;
}

void Agent::setAgentVersion(const std::string& value)
{
    agentVersion_ = value;
    agentVersionIsSet_ = true;
}

bool Agent::agentVersionIsSet() const
{
    return agentVersionIsSet_;
}

void Agent::unsetagentVersion()
{
    agentVersionIsSet_ = false;
}

std::string Agent::getAgentType() const
{
    return agentType_;
}

void Agent::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool Agent::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void Agent::unsetagentType()
{
    agentTypeIsSet_ = false;
}

std::string Agent::getHostName() const
{
    return hostName_;
}

void Agent::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool Agent::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void Agent::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string Agent::getHostNickname() const
{
    return hostNickname_;
}

void Agent::setHostNickname(const std::string& value)
{
    hostNickname_ = value;
    hostNicknameIsSet_ = true;
}

bool Agent::hostNicknameIsSet() const
{
    return hostNicknameIsSet_;
}

void Agent::unsethostNickname()
{
    hostNicknameIsSet_ = false;
}

std::string Agent::getHostIp() const
{
    return hostIp_;
}

void Agent::setHostIp(const std::string& value)
{
    hostIp_ = value;
    hostIpIsSet_ = true;
}

bool Agent::hostIpIsSet() const
{
    return hostIpIsSet_;
}

void Agent::unsethostIp()
{
    hostIpIsSet_ = false;
}

std::string Agent::getHostOs() const
{
    return hostOs_;
}

void Agent::setHostOs(const std::string& value)
{
    hostOs_ = value;
    hostOsIsSet_ = true;
}

bool Agent::hostOsIsSet() const
{
    return hostOsIsSet_;
}

void Agent::unsethostOs()
{
    hostOsIsSet_ = false;
}

std::string Agent::getStatus() const
{
    return status_;
}

void Agent::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Agent::statusIsSet() const
{
    return statusIsSet_;
}

void Agent::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime Agent::getLastActiveTime() const
{
    return lastActiveTime_;
}

void Agent::setLastActiveTime(const utility::datetime& value)
{
    lastActiveTime_ = value;
    lastActiveTimeIsSet_ = true;
}

bool Agent::lastActiveTimeIsSet() const
{
    return lastActiveTimeIsSet_;
}

void Agent::unsetlastActiveTime()
{
    lastActiveTimeIsSet_ = false;
}

std::vector<Path>& Agent::getPaths()
{
    return paths_;
}

void Agent::setPaths(const std::vector<Path>& value)
{
    paths_ = value;
    pathsIsSet_ = true;
}

bool Agent::pathsIsSet() const
{
    return pathsIsSet_;
}

void Agent::unsetpaths()
{
    pathsIsSet_ = false;
}

}
}
}
}
}


