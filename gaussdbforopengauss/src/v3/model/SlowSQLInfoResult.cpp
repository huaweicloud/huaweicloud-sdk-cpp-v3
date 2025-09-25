

#include "huaweicloud/gaussdbforopengauss/v3/model/SlowSQLInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SlowSQLInfoResult::SlowSQLInfoResult()
{
    sql_ = "";
    sqlIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    sqlText_ = "";
    sqlTextIsSet_ = false;
    queryPlan_ = "";
    queryPlanIsSet_ = false;
    calls_ = 0;
    callsIsSet_ = false;
    avgExecTime_ = "";
    avgExecTimeIsSet_ = false;
    avgCpuTime_ = "";
    avgCpuTimeIsSet_ = false;
    avgIoTime_ = "";
    avgIoTimeIsSet_ = false;
    avgReturnedRows_ = 0;
    avgReturnedRowsIsSet_ = false;
    avgFetchedRows_ = 0;
    avgFetchedRowsIsSet_ = false;
    bufferHitRatio_ = "";
    bufferHitRatioIsSet_ = false;
    sqlHitRatio_ = "";
    sqlHitRatioIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
}

SlowSQLInfoResult::~SlowSQLInfoResult() = default;

void SlowSQLInfoResult::validate()
{
}

web::json::value SlowSQLInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(sqlTextIsSet_) {
        val[utility::conversions::to_string_t("sql_text")] = ModelBase::toJson(sqlText_);
    }
    if(queryPlanIsSet_) {
        val[utility::conversions::to_string_t("query_plan")] = ModelBase::toJson(queryPlan_);
    }
    if(callsIsSet_) {
        val[utility::conversions::to_string_t("calls")] = ModelBase::toJson(calls_);
    }
    if(avgExecTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_exec_time")] = ModelBase::toJson(avgExecTime_);
    }
    if(avgCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time")] = ModelBase::toJson(avgCpuTime_);
    }
    if(avgIoTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_io_time")] = ModelBase::toJson(avgIoTime_);
    }
    if(avgReturnedRowsIsSet_) {
        val[utility::conversions::to_string_t("avg_returned_rows")] = ModelBase::toJson(avgReturnedRows_);
    }
    if(avgFetchedRowsIsSet_) {
        val[utility::conversions::to_string_t("avg_fetched_rows")] = ModelBase::toJson(avgFetchedRows_);
    }
    if(bufferHitRatioIsSet_) {
        val[utility::conversions::to_string_t("buffer_hit_ratio")] = ModelBase::toJson(bufferHitRatio_);
    }
    if(sqlHitRatioIsSet_) {
        val[utility::conversions::to_string_t("sql_hit_ratio")] = ModelBase::toJson(sqlHitRatio_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }

    return val;
}
bool SlowSQLInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("calls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("calls"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCalls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_exec_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_cpu_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_io_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_returned_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_returned_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgReturnedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_fetched_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_fetched_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgFetchedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buffer_hit_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buffer_hit_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBufferHitRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_hit_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_hit_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlHitRatio(refVal);
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
    return ok;
}


std::string SlowSQLInfoResult::getSql() const
{
    return sql_;
}

void SlowSQLInfoResult::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool SlowSQLInfoResult::sqlIsSet() const
{
    return sqlIsSet_;
}

void SlowSQLInfoResult::unsetsql()
{
    sqlIsSet_ = false;
}

std::string SlowSQLInfoResult::getSqlId() const
{
    return sqlId_;
}

void SlowSQLInfoResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool SlowSQLInfoResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void SlowSQLInfoResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string SlowSQLInfoResult::getUserName() const
{
    return userName_;
}

void SlowSQLInfoResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SlowSQLInfoResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void SlowSQLInfoResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string SlowSQLInfoResult::getSqlText() const
{
    return sqlText_;
}

void SlowSQLInfoResult::setSqlText(const std::string& value)
{
    sqlText_ = value;
    sqlTextIsSet_ = true;
}

bool SlowSQLInfoResult::sqlTextIsSet() const
{
    return sqlTextIsSet_;
}

void SlowSQLInfoResult::unsetsqlText()
{
    sqlTextIsSet_ = false;
}

std::string SlowSQLInfoResult::getQueryPlan() const
{
    return queryPlan_;
}

void SlowSQLInfoResult::setQueryPlan(const std::string& value)
{
    queryPlan_ = value;
    queryPlanIsSet_ = true;
}

bool SlowSQLInfoResult::queryPlanIsSet() const
{
    return queryPlanIsSet_;
}

void SlowSQLInfoResult::unsetqueryPlan()
{
    queryPlanIsSet_ = false;
}

int32_t SlowSQLInfoResult::getCalls() const
{
    return calls_;
}

void SlowSQLInfoResult::setCalls(int32_t value)
{
    calls_ = value;
    callsIsSet_ = true;
}

bool SlowSQLInfoResult::callsIsSet() const
{
    return callsIsSet_;
}

void SlowSQLInfoResult::unsetcalls()
{
    callsIsSet_ = false;
}

std::string SlowSQLInfoResult::getAvgExecTime() const
{
    return avgExecTime_;
}

void SlowSQLInfoResult::setAvgExecTime(const std::string& value)
{
    avgExecTime_ = value;
    avgExecTimeIsSet_ = true;
}

bool SlowSQLInfoResult::avgExecTimeIsSet() const
{
    return avgExecTimeIsSet_;
}

void SlowSQLInfoResult::unsetavgExecTime()
{
    avgExecTimeIsSet_ = false;
}

std::string SlowSQLInfoResult::getAvgCpuTime() const
{
    return avgCpuTime_;
}

void SlowSQLInfoResult::setAvgCpuTime(const std::string& value)
{
    avgCpuTime_ = value;
    avgCpuTimeIsSet_ = true;
}

bool SlowSQLInfoResult::avgCpuTimeIsSet() const
{
    return avgCpuTimeIsSet_;
}

void SlowSQLInfoResult::unsetavgCpuTime()
{
    avgCpuTimeIsSet_ = false;
}

std::string SlowSQLInfoResult::getAvgIoTime() const
{
    return avgIoTime_;
}

void SlowSQLInfoResult::setAvgIoTime(const std::string& value)
{
    avgIoTime_ = value;
    avgIoTimeIsSet_ = true;
}

bool SlowSQLInfoResult::avgIoTimeIsSet() const
{
    return avgIoTimeIsSet_;
}

void SlowSQLInfoResult::unsetavgIoTime()
{
    avgIoTimeIsSet_ = false;
}

int32_t SlowSQLInfoResult::getAvgReturnedRows() const
{
    return avgReturnedRows_;
}

void SlowSQLInfoResult::setAvgReturnedRows(int32_t value)
{
    avgReturnedRows_ = value;
    avgReturnedRowsIsSet_ = true;
}

bool SlowSQLInfoResult::avgReturnedRowsIsSet() const
{
    return avgReturnedRowsIsSet_;
}

void SlowSQLInfoResult::unsetavgReturnedRows()
{
    avgReturnedRowsIsSet_ = false;
}

int32_t SlowSQLInfoResult::getAvgFetchedRows() const
{
    return avgFetchedRows_;
}

void SlowSQLInfoResult::setAvgFetchedRows(int32_t value)
{
    avgFetchedRows_ = value;
    avgFetchedRowsIsSet_ = true;
}

bool SlowSQLInfoResult::avgFetchedRowsIsSet() const
{
    return avgFetchedRowsIsSet_;
}

void SlowSQLInfoResult::unsetavgFetchedRows()
{
    avgFetchedRowsIsSet_ = false;
}

std::string SlowSQLInfoResult::getBufferHitRatio() const
{
    return bufferHitRatio_;
}

void SlowSQLInfoResult::setBufferHitRatio(const std::string& value)
{
    bufferHitRatio_ = value;
    bufferHitRatioIsSet_ = true;
}

bool SlowSQLInfoResult::bufferHitRatioIsSet() const
{
    return bufferHitRatioIsSet_;
}

void SlowSQLInfoResult::unsetbufferHitRatio()
{
    bufferHitRatioIsSet_ = false;
}

std::string SlowSQLInfoResult::getSqlHitRatio() const
{
    return sqlHitRatio_;
}

void SlowSQLInfoResult::setSqlHitRatio(const std::string& value)
{
    sqlHitRatio_ = value;
    sqlHitRatioIsSet_ = true;
}

bool SlowSQLInfoResult::sqlHitRatioIsSet() const
{
    return sqlHitRatioIsSet_;
}

void SlowSQLInfoResult::unsetsqlHitRatio()
{
    sqlHitRatioIsSet_ = false;
}

std::string SlowSQLInfoResult::getNodeId() const
{
    return nodeId_;
}

void SlowSQLInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SlowSQLInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SlowSQLInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SlowSQLInfoResult::getNodeName() const
{
    return nodeName_;
}

void SlowSQLInfoResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool SlowSQLInfoResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void SlowSQLInfoResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

}
}
}
}
}


