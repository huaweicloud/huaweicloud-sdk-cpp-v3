

#include "huaweicloud/dbss/v1/model/AuditAgentRespoonse_agents.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditAgentRespoonse_agents::AuditAgentRespoonse_agents()
{
    agentId_ = "";
    agentIdIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
    agentOs_ = "";
    agentOsIsSet_ = false;
    agentIp_ = "";
    agentIpIsSet_ = false;
    memThreshold_ = 0;
    memThresholdIsSet_ = false;
    cpuThreshold_ = 0;
    cpuThresholdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    agentNic_ = "";
    agentNicIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    datacapStatus_ = 0;
    datacapStatusIsSet_ = false;
    agentUrl_ = "";
    agentUrlIsSet_ = false;
    universal_ = false;
    universalIsSet_ = false;
    sha256_ = "";
    sha256IsSet_ = false;
}

AuditAgentRespoonse_agents::~AuditAgentRespoonse_agents() = default;

void AuditAgentRespoonse_agents::validate()
{
}

web::json::value AuditAgentRespoonse_agents::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(agentTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_type")] = ModelBase::toJson(agentType_);
    }
    if(agentOsIsSet_) {
        val[utility::conversions::to_string_t("agent_os")] = ModelBase::toJson(agentOs_);
    }
    if(agentIpIsSet_) {
        val[utility::conversions::to_string_t("agent_ip")] = ModelBase::toJson(agentIp_);
    }
    if(memThresholdIsSet_) {
        val[utility::conversions::to_string_t("mem_threshold")] = ModelBase::toJson(memThreshold_);
    }
    if(cpuThresholdIsSet_) {
        val[utility::conversions::to_string_t("cpu_threshold")] = ModelBase::toJson(cpuThreshold_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(agentNicIsSet_) {
        val[utility::conversions::to_string_t("agent_nic")] = ModelBase::toJson(agentNic_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(datacapStatusIsSet_) {
        val[utility::conversions::to_string_t("datacap_status")] = ModelBase::toJson(datacapStatus_);
    }
    if(agentUrlIsSet_) {
        val[utility::conversions::to_string_t("agent_url")] = ModelBase::toJson(agentUrl_);
    }
    if(universalIsSet_) {
        val[utility::conversions::to_string_t("universal")] = ModelBase::toJson(universal_);
    }
    if(sha256IsSet_) {
        val[utility::conversions::to_string_t("sha256")] = ModelBase::toJson(sha256_);
    }

    return val;
}
bool AuditAgentRespoonse_agents::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("agent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_nic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentNic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datacap_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datacap_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatacapStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("universal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("universal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniversal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha256(refVal);
        }
    }
    return ok;
}


std::string AuditAgentRespoonse_agents::getAgentId() const
{
    return agentId_;
}

void AuditAgentRespoonse_agents::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool AuditAgentRespoonse_agents::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void AuditAgentRespoonse_agents::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getAgentType() const
{
    return agentType_;
}

void AuditAgentRespoonse_agents::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool AuditAgentRespoonse_agents::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void AuditAgentRespoonse_agents::unsetagentType()
{
    agentTypeIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getAgentOs() const
{
    return agentOs_;
}

void AuditAgentRespoonse_agents::setAgentOs(const std::string& value)
{
    agentOs_ = value;
    agentOsIsSet_ = true;
}

bool AuditAgentRespoonse_agents::agentOsIsSet() const
{
    return agentOsIsSet_;
}

void AuditAgentRespoonse_agents::unsetagentOs()
{
    agentOsIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getAgentIp() const
{
    return agentIp_;
}

void AuditAgentRespoonse_agents::setAgentIp(const std::string& value)
{
    agentIp_ = value;
    agentIpIsSet_ = true;
}

bool AuditAgentRespoonse_agents::agentIpIsSet() const
{
    return agentIpIsSet_;
}

void AuditAgentRespoonse_agents::unsetagentIp()
{
    agentIpIsSet_ = false;
}

int32_t AuditAgentRespoonse_agents::getMemThreshold() const
{
    return memThreshold_;
}

void AuditAgentRespoonse_agents::setMemThreshold(int32_t value)
{
    memThreshold_ = value;
    memThresholdIsSet_ = true;
}

bool AuditAgentRespoonse_agents::memThresholdIsSet() const
{
    return memThresholdIsSet_;
}

void AuditAgentRespoonse_agents::unsetmemThreshold()
{
    memThresholdIsSet_ = false;
}

int32_t AuditAgentRespoonse_agents::getCpuThreshold() const
{
    return cpuThreshold_;
}

void AuditAgentRespoonse_agents::setCpuThreshold(int32_t value)
{
    cpuThreshold_ = value;
    cpuThresholdIsSet_ = true;
}

bool AuditAgentRespoonse_agents::cpuThresholdIsSet() const
{
    return cpuThresholdIsSet_;
}

void AuditAgentRespoonse_agents::unsetcpuThreshold()
{
    cpuThresholdIsSet_ = false;
}

int32_t AuditAgentRespoonse_agents::getStatus() const
{
    return status_;
}

void AuditAgentRespoonse_agents::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AuditAgentRespoonse_agents::statusIsSet() const
{
    return statusIsSet_;
}

void AuditAgentRespoonse_agents::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getAgentNic() const
{
    return agentNic_;
}

void AuditAgentRespoonse_agents::setAgentNic(const std::string& value)
{
    agentNic_ = value;
    agentNicIsSet_ = true;
}

bool AuditAgentRespoonse_agents::agentNicIsSet() const
{
    return agentNicIsSet_;
}

void AuditAgentRespoonse_agents::unsetagentNic()
{
    agentNicIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getDbName() const
{
    return dbName_;
}

void AuditAgentRespoonse_agents::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool AuditAgentRespoonse_agents::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void AuditAgentRespoonse_agents::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t AuditAgentRespoonse_agents::getDatacapStatus() const
{
    return datacapStatus_;
}

void AuditAgentRespoonse_agents::setDatacapStatus(int32_t value)
{
    datacapStatus_ = value;
    datacapStatusIsSet_ = true;
}

bool AuditAgentRespoonse_agents::datacapStatusIsSet() const
{
    return datacapStatusIsSet_;
}

void AuditAgentRespoonse_agents::unsetdatacapStatus()
{
    datacapStatusIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getAgentUrl() const
{
    return agentUrl_;
}

void AuditAgentRespoonse_agents::setAgentUrl(const std::string& value)
{
    agentUrl_ = value;
    agentUrlIsSet_ = true;
}

bool AuditAgentRespoonse_agents::agentUrlIsSet() const
{
    return agentUrlIsSet_;
}

void AuditAgentRespoonse_agents::unsetagentUrl()
{
    agentUrlIsSet_ = false;
}

bool AuditAgentRespoonse_agents::isUniversal() const
{
    return universal_;
}

void AuditAgentRespoonse_agents::setUniversal(bool value)
{
    universal_ = value;
    universalIsSet_ = true;
}

bool AuditAgentRespoonse_agents::universalIsSet() const
{
    return universalIsSet_;
}

void AuditAgentRespoonse_agents::unsetuniversal()
{
    universalIsSet_ = false;
}

std::string AuditAgentRespoonse_agents::getSha256() const
{
    return sha256_;
}

void AuditAgentRespoonse_agents::setSha256(const std::string& value)
{
    sha256_ = value;
    sha256IsSet_ = true;
}

bool AuditAgentRespoonse_agents::sha256IsSet() const
{
    return sha256IsSet_;
}

void AuditAgentRespoonse_agents::unsetsha256()
{
    sha256IsSet_ = false;
}

}
}
}
}
}


