

#include "huaweicloud/drs/v5/model/ReplayingSqlResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayingSqlResp::ReplayingSqlResp()
{
    schemaName_ = "";
    schemaNameIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    latency_ = 0;
    latencyIsSet_ = false;
    executeLatency_ = 0;
    executeLatencyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    client_ = "";
    clientIsSet_ = false;
    connectionId_ = "";
    connectionIdIsSet_ = false;
    replayStartTime_ = "";
    replayStartTimeIsSet_ = false;
}

ReplayingSqlResp::~ReplayingSqlResp() = default;

void ReplayingSqlResp::validate()
{
}

web::json::value ReplayingSqlResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(latencyIsSet_) {
        val[utility::conversions::to_string_t("latency")] = ModelBase::toJson(latency_);
    }
    if(executeLatencyIsSet_) {
        val[utility::conversions::to_string_t("execute_latency")] = ModelBase::toJson(executeLatency_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(clientIsSet_) {
        val[utility::conversions::to_string_t("client")] = ModelBase::toJson(client_);
    }
    if(connectionIdIsSet_) {
        val[utility::conversions::to_string_t("connection_id")] = ModelBase::toJson(connectionId_);
    }
    if(replayStartTimeIsSet_) {
        val[utility::conversions::to_string_t("replay_start_time")] = ModelBase::toJson(replayStartTime_);
    }

    return val;
}
bool ReplayingSqlResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteLatency(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClient(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replay_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replay_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplayStartTime(refVal);
        }
    }
    return ok;
}


std::string ReplayingSqlResp::getSchemaName() const
{
    return schemaName_;
}

void ReplayingSqlResp::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ReplayingSqlResp::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ReplayingSqlResp::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ReplayingSqlResp::getSqlStatement() const
{
    return sqlStatement_;
}

void ReplayingSqlResp::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool ReplayingSqlResp::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void ReplayingSqlResp::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

int32_t ReplayingSqlResp::getLatency() const
{
    return latency_;
}

void ReplayingSqlResp::setLatency(int32_t value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool ReplayingSqlResp::latencyIsSet() const
{
    return latencyIsSet_;
}

void ReplayingSqlResp::unsetlatency()
{
    latencyIsSet_ = false;
}

int32_t ReplayingSqlResp::getExecuteLatency() const
{
    return executeLatency_;
}

void ReplayingSqlResp::setExecuteLatency(int32_t value)
{
    executeLatency_ = value;
    executeLatencyIsSet_ = true;
}

bool ReplayingSqlResp::executeLatencyIsSet() const
{
    return executeLatencyIsSet_;
}

void ReplayingSqlResp::unsetexecuteLatency()
{
    executeLatencyIsSet_ = false;
}

std::string ReplayingSqlResp::getStatus() const
{
    return status_;
}

void ReplayingSqlResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReplayingSqlResp::statusIsSet() const
{
    return statusIsSet_;
}

void ReplayingSqlResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReplayingSqlResp::getClient() const
{
    return client_;
}

void ReplayingSqlResp::setClient(const std::string& value)
{
    client_ = value;
    clientIsSet_ = true;
}

bool ReplayingSqlResp::clientIsSet() const
{
    return clientIsSet_;
}

void ReplayingSqlResp::unsetclient()
{
    clientIsSet_ = false;
}

std::string ReplayingSqlResp::getConnectionId() const
{
    return connectionId_;
}

void ReplayingSqlResp::setConnectionId(const std::string& value)
{
    connectionId_ = value;
    connectionIdIsSet_ = true;
}

bool ReplayingSqlResp::connectionIdIsSet() const
{
    return connectionIdIsSet_;
}

void ReplayingSqlResp::unsetconnectionId()
{
    connectionIdIsSet_ = false;
}

std::string ReplayingSqlResp::getReplayStartTime() const
{
    return replayStartTime_;
}

void ReplayingSqlResp::setReplayStartTime(const std::string& value)
{
    replayStartTime_ = value;
    replayStartTimeIsSet_ = true;
}

bool ReplayingSqlResp::replayStartTimeIsSet() const
{
    return replayStartTimeIsSet_;
}

void ReplayingSqlResp::unsetreplayStartTime()
{
    replayStartTimeIsSet_ = false;
}

}
}
}
}
}


