

#include "huaweicloud/dbss/v1/model/DeleteAuditAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditAgentRequest::DeleteAuditAgentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
}

DeleteAuditAgentRequest::~DeleteAuditAgentRequest() = default;

void DeleteAuditAgentRequest::validate()
{
}

web::json::value DeleteAuditAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }

    return val;
}
bool DeleteAuditAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    return ok;
}


std::string DeleteAuditAgentRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditAgentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditAgentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditAgentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditAgentRequest::getAgentId() const
{
    return agentId_;
}

void DeleteAuditAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool DeleteAuditAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void DeleteAuditAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string DeleteAuditAgentRequest::getDbId() const
{
    return dbId_;
}

void DeleteAuditAgentRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool DeleteAuditAgentRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void DeleteAuditAgentRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


