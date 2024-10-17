

#include "huaweicloud/dbss/v1/model/AuditAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditAgentRequest::AuditAgentRequest()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    mode_ = 0;
    modeIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
    agentOs_ = "";
    agentOsIsSet_ = false;
    agentIp_ = "";
    agentIpIsSet_ = false;
    agentNic_ = "";
    agentNicIsSet_ = false;
    cpuThreshold_ = 0;
    cpuThresholdIsSet_ = false;
    memThreshold_ = 0;
    memThresholdIsSet_ = false;
}

AuditAgentRequest::~AuditAgentRequest() = default;

void AuditAgentRequest::validate()
{
}

web::json::value AuditAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
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
    if(agentNicIsSet_) {
        val[utility::conversions::to_string_t("agent_nic")] = ModelBase::toJson(agentNic_);
    }
    if(cpuThresholdIsSet_) {
        val[utility::conversions::to_string_t("cpu_threshold")] = ModelBase::toJson(cpuThreshold_);
    }
    if(memThresholdIsSet_) {
        val[utility::conversions::to_string_t("mem_threshold")] = ModelBase::toJson(memThreshold_);
    }

    return val;
}
bool AuditAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("agent_nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_nic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentNic(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mem_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemThreshold(refVal);
        }
    }
    return ok;
}


std::string AuditAgentRequest::getDbId() const
{
    return dbId_;
}

void AuditAgentRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool AuditAgentRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void AuditAgentRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

int32_t AuditAgentRequest::getMode() const
{
    return mode_;
}

void AuditAgentRequest::setMode(int32_t value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AuditAgentRequest::modeIsSet() const
{
    return modeIsSet_;
}

void AuditAgentRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string AuditAgentRequest::getAgentId() const
{
    return agentId_;
}

void AuditAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool AuditAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void AuditAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string AuditAgentRequest::getAgentType() const
{
    return agentType_;
}

void AuditAgentRequest::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool AuditAgentRequest::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void AuditAgentRequest::unsetagentType()
{
    agentTypeIsSet_ = false;
}

std::string AuditAgentRequest::getAgentOs() const
{
    return agentOs_;
}

void AuditAgentRequest::setAgentOs(const std::string& value)
{
    agentOs_ = value;
    agentOsIsSet_ = true;
}

bool AuditAgentRequest::agentOsIsSet() const
{
    return agentOsIsSet_;
}

void AuditAgentRequest::unsetagentOs()
{
    agentOsIsSet_ = false;
}

std::string AuditAgentRequest::getAgentIp() const
{
    return agentIp_;
}

void AuditAgentRequest::setAgentIp(const std::string& value)
{
    agentIp_ = value;
    agentIpIsSet_ = true;
}

bool AuditAgentRequest::agentIpIsSet() const
{
    return agentIpIsSet_;
}

void AuditAgentRequest::unsetagentIp()
{
    agentIpIsSet_ = false;
}

std::string AuditAgentRequest::getAgentNic() const
{
    return agentNic_;
}

void AuditAgentRequest::setAgentNic(const std::string& value)
{
    agentNic_ = value;
    agentNicIsSet_ = true;
}

bool AuditAgentRequest::agentNicIsSet() const
{
    return agentNicIsSet_;
}

void AuditAgentRequest::unsetagentNic()
{
    agentNicIsSet_ = false;
}

int32_t AuditAgentRequest::getCpuThreshold() const
{
    return cpuThreshold_;
}

void AuditAgentRequest::setCpuThreshold(int32_t value)
{
    cpuThreshold_ = value;
    cpuThresholdIsSet_ = true;
}

bool AuditAgentRequest::cpuThresholdIsSet() const
{
    return cpuThresholdIsSet_;
}

void AuditAgentRequest::unsetcpuThreshold()
{
    cpuThresholdIsSet_ = false;
}

int32_t AuditAgentRequest::getMemThreshold() const
{
    return memThreshold_;
}

void AuditAgentRequest::setMemThreshold(int32_t value)
{
    memThreshold_ = value;
    memThresholdIsSet_ = true;
}

bool AuditAgentRequest::memThresholdIsSet() const
{
    return memThresholdIsSet_;
}

void AuditAgentRequest::unsetmemThreshold()
{
    memThresholdIsSet_ = false;
}

}
}
}
}
}


