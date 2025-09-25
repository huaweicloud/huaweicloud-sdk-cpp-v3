

#include "huaweicloud/gaussdbforopengauss/v3/model/SlowSqlDetailResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SlowSqlDetailResult::SlowSqlDetailResult()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    clientPort_ = "";
    clientPortIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    sqlText_ = "";
    sqlTextIsSet_ = false;
    queryPlan_ = "";
    queryPlanIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
    finishTime_ = 0;
    finishTimeIsSet_ = false;
    returnedRows_ = 0;
    returnedRowsIsSet_ = false;
    fetchedRows_ = 0;
    fetchedRowsIsSet_ = false;
    fetchedPages_ = 0;
    fetchedPagesIsSet_ = false;
    hitPages_ = 0;
    hitPagesIsSet_ = false;
    totalTime_ = 0;
    totalTimeIsSet_ = false;
    cpuTime_ = 0;
    cpuTimeIsSet_ = false;
    planTime_ = 0;
    planTimeIsSet_ = false;
    ioTime_ = 0;
    ioTimeIsSet_ = false;
    lockCount_ = 0;
    lockCountIsSet_ = false;
    lockTime_ = 0;
    lockTimeIsSet_ = false;
}

SlowSqlDetailResult::~SlowSqlDetailResult() = default;

void SlowSqlDetailResult::validate()
{
}

web::json::value SlowSqlDetailResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(queryPlanIsSet_) {
        val[utility::conversions::to_string_t("query_plan")] = ModelBase::toJson(queryPlan_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(returnedRowsIsSet_) {
        val[utility::conversions::to_string_t("returned_rows")] = ModelBase::toJson(returnedRows_);
    }
    if(fetchedRowsIsSet_) {
        val[utility::conversions::to_string_t("fetched_rows")] = ModelBase::toJson(fetchedRows_);
    }
    if(fetchedPagesIsSet_) {
        val[utility::conversions::to_string_t("fetched_pages")] = ModelBase::toJson(fetchedPages_);
    }
    if(hitPagesIsSet_) {
        val[utility::conversions::to_string_t("hit_pages")] = ModelBase::toJson(hitPages_);
    }
    if(totalTimeIsSet_) {
        val[utility::conversions::to_string_t("total_time")] = ModelBase::toJson(totalTime_);
    }
    if(cpuTimeIsSet_) {
        val[utility::conversions::to_string_t("cpu_time")] = ModelBase::toJson(cpuTime_);
    }
    if(planTimeIsSet_) {
        val[utility::conversions::to_string_t("plan_time")] = ModelBase::toJson(planTime_);
    }
    if(ioTimeIsSet_) {
        val[utility::conversions::to_string_t("io_time")] = ModelBase::toJson(ioTime_);
    }
    if(lockCountIsSet_) {
        val[utility::conversions::to_string_t("lock_count")] = ModelBase::toJson(lockCount_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }

    return val;
}
bool SlowSqlDetailResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_plan"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_plan"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryPlan(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("returned_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returned_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fetched_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fetched_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFetchedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fetched_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fetched_pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFetchedPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hit_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    return ok;
}


std::string SlowSqlDetailResult::getDbName() const
{
    return dbName_;
}

void SlowSqlDetailResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool SlowSqlDetailResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void SlowSqlDetailResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string SlowSqlDetailResult::getSchemaName() const
{
    return schemaName_;
}

void SlowSqlDetailResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool SlowSqlDetailResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void SlowSqlDetailResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string SlowSqlDetailResult::getSql() const
{
    return sql_;
}

void SlowSqlDetailResult::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool SlowSqlDetailResult::sqlIsSet() const
{
    return sqlIsSet_;
}

void SlowSqlDetailResult::unsetsql()
{
    sqlIsSet_ = false;
}

std::string SlowSqlDetailResult::getSqlId() const
{
    return sqlId_;
}

void SlowSqlDetailResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool SlowSqlDetailResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void SlowSqlDetailResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string SlowSqlDetailResult::getUserName() const
{
    return userName_;
}

void SlowSqlDetailResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SlowSqlDetailResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void SlowSqlDetailResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string SlowSqlDetailResult::getClientIp() const
{
    return clientIp_;
}

void SlowSqlDetailResult::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool SlowSqlDetailResult::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void SlowSqlDetailResult::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string SlowSqlDetailResult::getClientPort() const
{
    return clientPort_;
}

void SlowSqlDetailResult::setClientPort(const std::string& value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool SlowSqlDetailResult::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void SlowSqlDetailResult::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string SlowSqlDetailResult::getNodeId() const
{
    return nodeId_;
}

void SlowSqlDetailResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SlowSqlDetailResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SlowSqlDetailResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SlowSqlDetailResult::getNodeName() const
{
    return nodeName_;
}

void SlowSqlDetailResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool SlowSqlDetailResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void SlowSqlDetailResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string SlowSqlDetailResult::getSqlText() const
{
    return sqlText_;
}

void SlowSqlDetailResult::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool SlowSqlDetailResult::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void SlowSqlDetailResult::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string SlowSqlDetailResult::getQueryPlan() const
{
    return queryPlan_;
}

void SlowSqlDetailResult::setQueryPlan(const std::string& value)
{
    queryPlan_ = value;
    queryPlanIsSet_ = true;
}

bool SlowSqlDetailResult::queryPlanIsSet() const
{
    return queryPlanIsSet_;
}

void SlowSqlDetailResult::unsetqueryPlan()
{
    queryPlanIsSet_ = false;
}

int32_t SlowSqlDetailResult::getStartTime() const
{
    return startTime_;
}

void SlowSqlDetailResult::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SlowSqlDetailResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SlowSqlDetailResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t SlowSqlDetailResult::getFinishTime() const
{
    return finishTime_;
}

void SlowSqlDetailResult::setFinishTime(int32_t value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool SlowSqlDetailResult::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void SlowSqlDetailResult::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

int32_t SlowSqlDetailResult::getReturnedRows() const
{
    return returnedRows_;
}

void SlowSqlDetailResult::setReturnedRows(int32_t value)
{
    returnedRows_ = value;
    returnedRowsIsSet_ = true;
}

bool SlowSqlDetailResult::returnedRowsIsSet() const
{
    return returnedRowsIsSet_;
}

void SlowSqlDetailResult::unsetreturnedRows()
{
    returnedRowsIsSet_ = false;
}

int32_t SlowSqlDetailResult::getFetchedRows() const
{
    return fetchedRows_;
}

void SlowSqlDetailResult::setFetchedRows(int32_t value)
{
    fetchedRows_ = value;
    fetchedRowsIsSet_ = true;
}

bool SlowSqlDetailResult::fetchedRowsIsSet() const
{
    return fetchedRowsIsSet_;
}

void SlowSqlDetailResult::unsetfetchedRows()
{
    fetchedRowsIsSet_ = false;
}

int32_t SlowSqlDetailResult::getFetchedPages() const
{
    return fetchedPages_;
}

void SlowSqlDetailResult::setFetchedPages(int32_t value)
{
    fetchedPages_ = value;
    fetchedPagesIsSet_ = true;
}

bool SlowSqlDetailResult::fetchedPagesIsSet() const
{
    return fetchedPagesIsSet_;
}

void SlowSqlDetailResult::unsetfetchedPages()
{
    fetchedPagesIsSet_ = false;
}

int32_t SlowSqlDetailResult::getHitPages() const
{
    return hitPages_;
}

void SlowSqlDetailResult::setHitPages(int32_t value)
{
    hitPages_ = value;
    hitPagesIsSet_ = true;
}

bool SlowSqlDetailResult::hitPagesIsSet() const
{
    return hitPagesIsSet_;
}

void SlowSqlDetailResult::unsethitPages()
{
    hitPagesIsSet_ = false;
}

int32_t SlowSqlDetailResult::getTotalTime() const
{
    return totalTime_;
}

void SlowSqlDetailResult::setTotalTime(int32_t value)
{
    totalTime_ = value;
    totalTimeIsSet_ = true;
}

bool SlowSqlDetailResult::totalTimeIsSet() const
{
    return totalTimeIsSet_;
}

void SlowSqlDetailResult::unsettotalTime()
{
    totalTimeIsSet_ = false;
}

int32_t SlowSqlDetailResult::getCpuTime() const
{
    return cpuTime_;
}

void SlowSqlDetailResult::setCpuTime(int32_t value)
{
    cpuTime_ = value;
    cpuTimeIsSet_ = true;
}

bool SlowSqlDetailResult::cpuTimeIsSet() const
{
    return cpuTimeIsSet_;
}

void SlowSqlDetailResult::unsetcpuTime()
{
    cpuTimeIsSet_ = false;
}

int32_t SlowSqlDetailResult::getPlanTime() const
{
    return planTime_;
}

void SlowSqlDetailResult::setPlanTime(int32_t value)
{
    planTime_ = value;
    planTimeIsSet_ = true;
}

bool SlowSqlDetailResult::planTimeIsSet() const
{
    return planTimeIsSet_;
}

void SlowSqlDetailResult::unsetplanTime()
{
    planTimeIsSet_ = false;
}

int32_t SlowSqlDetailResult::getIoTime() const
{
    return ioTime_;
}

void SlowSqlDetailResult::setIoTime(int32_t value)
{
    ioTime_ = value;
    ioTimeIsSet_ = true;
}

bool SlowSqlDetailResult::ioTimeIsSet() const
{
    return ioTimeIsSet_;
}

void SlowSqlDetailResult::unsetioTime()
{
    ioTimeIsSet_ = false;
}

int32_t SlowSqlDetailResult::getLockCount() const
{
    return lockCount_;
}

void SlowSqlDetailResult::setLockCount(int32_t value)
{
    lockCount_ = value;
    lockCountIsSet_ = true;
}

bool SlowSqlDetailResult::lockCountIsSet() const
{
    return lockCountIsSet_;
}

void SlowSqlDetailResult::unsetlockCount()
{
    lockCountIsSet_ = false;
}

int32_t SlowSqlDetailResult::getLockTime() const
{
    return lockTime_;
}

void SlowSqlDetailResult::setLockTime(int32_t value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool SlowSqlDetailResult::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void SlowSqlDetailResult::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

}
}
}
}
}


