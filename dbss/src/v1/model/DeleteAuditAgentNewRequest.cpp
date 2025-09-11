

#include "huaweicloud/dbss/v1/model/DeleteAuditAgentNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditAgentNewRequest::DeleteAuditAgentNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
}

DeleteAuditAgentNewRequest::~DeleteAuditAgentNewRequest() = default;

void DeleteAuditAgentNewRequest::validate()
{
}

web::json::value DeleteAuditAgentNewRequest::toJson() const
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
bool DeleteAuditAgentNewRequest::fromJson(const web::json::value& val)
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


std::string DeleteAuditAgentNewRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditAgentNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditAgentNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditAgentNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditAgentNewRequest::getAgentId() const
{
    return agentId_;
}

void DeleteAuditAgentNewRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool DeleteAuditAgentNewRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void DeleteAuditAgentNewRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string DeleteAuditAgentNewRequest::getDbId() const
{
    return dbId_;
}

void DeleteAuditAgentNewRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool DeleteAuditAgentNewRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void DeleteAuditAgentNewRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


