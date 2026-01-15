

#include "huaweicloud/drs/v5/model/ReplaySqlNowInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplaySqlNowInfo::ReplaySqlNowInfo()
{
    threadId_ = 0L;
    threadIdIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    modifiedAt_ = 0L;
    modifiedAtIsSet_ = false;
    shardId_ = 0L;
    shardIdIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    latency_ = 0L;
    latencyIsSet_ = false;
    executeLatency_ = 0L;
    executeLatencyIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ReplaySqlNowInfo::~ReplaySqlNowInfo() = default;

void ReplaySqlNowInfo::validate()
{
}

web::json::value ReplaySqlNowInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(threadIdIsSet_) {
        val[utility::conversions::to_string_t("thread_id")] = ModelBase::toJson(threadId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(modifiedAtIsSet_) {
        val[utility::conversions::to_string_t("modified_at")] = ModelBase::toJson(modifiedAt_);
    }
    if(shardIdIsSet_) {
        val[utility::conversions::to_string_t("shard_id")] = ModelBase::toJson(shardId_);
    }
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
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ReplaySqlNowInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("thread_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thread_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreadId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shard_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardId(refVal);
        }
    }
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_latency"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
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
    return ok;
}


int64_t ReplaySqlNowInfo::getThreadId() const
{
    return threadId_;
}

void ReplaySqlNowInfo::setThreadId(int64_t value)
{
    threadId_ = value;
    threadIdIsSet_ = true;
}

bool ReplaySqlNowInfo::threadIdIsSet() const
{
    return threadIdIsSet_;
}

void ReplaySqlNowInfo::unsetthreadId()
{
    threadIdIsSet_ = false;
}

int64_t ReplaySqlNowInfo::getCreatedAt() const
{
    return createdAt_;
}

void ReplaySqlNowInfo::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ReplaySqlNowInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ReplaySqlNowInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t ReplaySqlNowInfo::getModifiedAt() const
{
    return modifiedAt_;
}

void ReplaySqlNowInfo::setModifiedAt(int64_t value)
{
    modifiedAt_ = value;
    modifiedAtIsSet_ = true;
}

bool ReplaySqlNowInfo::modifiedAtIsSet() const
{
    return modifiedAtIsSet_;
}

void ReplaySqlNowInfo::unsetmodifiedAt()
{
    modifiedAtIsSet_ = false;
}

int64_t ReplaySqlNowInfo::getShardId() const
{
    return shardId_;
}

void ReplaySqlNowInfo::setShardId(int64_t value)
{
    shardId_ = value;
    shardIdIsSet_ = true;
}

bool ReplaySqlNowInfo::shardIdIsSet() const
{
    return shardIdIsSet_;
}

void ReplaySqlNowInfo::unsetshardId()
{
    shardIdIsSet_ = false;
}

std::string ReplaySqlNowInfo::getSchemaName() const
{
    return schemaName_;
}

void ReplaySqlNowInfo::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ReplaySqlNowInfo::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ReplaySqlNowInfo::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ReplaySqlNowInfo::getSqlStatement() const
{
    return sqlStatement_;
}

void ReplaySqlNowInfo::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool ReplaySqlNowInfo::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void ReplaySqlNowInfo::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

int64_t ReplaySqlNowInfo::getLatency() const
{
    return latency_;
}

void ReplaySqlNowInfo::setLatency(int64_t value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool ReplaySqlNowInfo::latencyIsSet() const
{
    return latencyIsSet_;
}

void ReplaySqlNowInfo::unsetlatency()
{
    latencyIsSet_ = false;
}

int64_t ReplaySqlNowInfo::getExecuteLatency() const
{
    return executeLatency_;
}

void ReplaySqlNowInfo::setExecuteLatency(int64_t value)
{
    executeLatency_ = value;
    executeLatencyIsSet_ = true;
}

bool ReplaySqlNowInfo::executeLatencyIsSet() const
{
    return executeLatencyIsSet_;
}

void ReplaySqlNowInfo::unsetexecuteLatency()
{
    executeLatencyIsSet_ = false;
}

std::string ReplaySqlNowInfo::getTargetType() const
{
    return targetType_;
}

void ReplaySqlNowInfo::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ReplaySqlNowInfo::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ReplaySqlNowInfo::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::string ReplaySqlNowInfo::getTargetName() const
{
    return targetName_;
}

void ReplaySqlNowInfo::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool ReplaySqlNowInfo::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void ReplaySqlNowInfo::unsettargetName()
{
    targetNameIsSet_ = false;
}

std::string ReplaySqlNowInfo::getStatus() const
{
    return status_;
}

void ReplaySqlNowInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReplaySqlNowInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ReplaySqlNowInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


