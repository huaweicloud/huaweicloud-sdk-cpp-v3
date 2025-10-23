

#include "huaweicloud/rds/v3/model/QueryTopSqlsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryTopSqlsResult::QueryTopSqlsResult()
{
    id_ = "";
    idIsSet_ = false;
    statement_ = "";
    statementIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    executionCount_ = "";
    executionCountIsSet_ = false;
    executionCountPercent_ = "";
    executionCountPercentIsSet_ = false;
    totalCpuTime_ = "";
    totalCpuTimeIsSet_ = false;
    totalCpuTimePercent_ = "";
    totalCpuTimePercentIsSet_ = false;
    avgCpuTime_ = "";
    avgCpuTimeIsSet_ = false;
    avgCpuTimePercent_ = "";
    avgCpuTimePercentIsSet_ = false;
    totalDurationTime_ = "";
    totalDurationTimeIsSet_ = false;
    totalDurationTimePercent_ = "";
    totalDurationTimePercentIsSet_ = false;
    avgDurationTime_ = "";
    avgDurationTimeIsSet_ = false;
    avgDurationTimePercent_ = "";
    avgDurationTimePercentIsSet_ = false;
    totalRows_ = "";
    totalRowsIsSet_ = false;
    totalRowsPercent_ = "";
    totalRowsPercentIsSet_ = false;
    avgRows_ = "";
    avgRowsIsSet_ = false;
    avgRowsPercent_ = "";
    avgRowsPercentIsSet_ = false;
    totalLogicalReads_ = "";
    totalLogicalReadsIsSet_ = false;
    totalLogicalReadsPercent_ = "";
    totalLogicalReadsPercentIsSet_ = false;
    avgLogicalReads_ = "";
    avgLogicalReadsIsSet_ = false;
    avgLogicalReadsPercent_ = "";
    avgLogicalReadsPercentIsSet_ = false;
    avgLogicalWrite_ = "";
    avgLogicalWriteIsSet_ = false;
    avgLogicalWritePercent_ = "";
    avgLogicalWritePercentIsSet_ = false;
    totalLogicalWrite_ = "";
    totalLogicalWriteIsSet_ = false;
    totalLogicalWritePercent_ = "";
    totalLogicalWritePercentIsSet_ = false;
    avgPhysicalReads_ = "";
    avgPhysicalReadsIsSet_ = false;
    avgPhysicalReadsPercent_ = "";
    avgPhysicalReadsPercentIsSet_ = false;
    totalPhysicalReads_ = "";
    totalPhysicalReadsIsSet_ = false;
    totalPhysicalReadsPercent_ = "";
    totalPhysicalReadsPercentIsSet_ = false;
    lastExecutionTime_ = "";
    lastExecutionTimeIsSet_ = false;
}

QueryTopSqlsResult::~QueryTopSqlsResult() = default;

void QueryTopSqlsResult::validate()
{
}

web::json::value QueryTopSqlsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statementIsSet_) {
        val[utility::conversions::to_string_t("statement")] = ModelBase::toJson(statement_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(executionCountIsSet_) {
        val[utility::conversions::to_string_t("execution_count")] = ModelBase::toJson(executionCount_);
    }
    if(executionCountPercentIsSet_) {
        val[utility::conversions::to_string_t("execution_count_percent")] = ModelBase::toJson(executionCountPercent_);
    }
    if(totalCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("total_cpu_time")] = ModelBase::toJson(totalCpuTime_);
    }
    if(totalCpuTimePercentIsSet_) {
        val[utility::conversions::to_string_t("total_cpu_time_percent")] = ModelBase::toJson(totalCpuTimePercent_);
    }
    if(avgCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time")] = ModelBase::toJson(avgCpuTime_);
    }
    if(avgCpuTimePercentIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time_percent")] = ModelBase::toJson(avgCpuTimePercent_);
    }
    if(totalDurationTimeIsSet_) {
        val[utility::conversions::to_string_t("total_duration_time")] = ModelBase::toJson(totalDurationTime_);
    }
    if(totalDurationTimePercentIsSet_) {
        val[utility::conversions::to_string_t("total_duration_time_percent")] = ModelBase::toJson(totalDurationTimePercent_);
    }
    if(avgDurationTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_duration_time")] = ModelBase::toJson(avgDurationTime_);
    }
    if(avgDurationTimePercentIsSet_) {
        val[utility::conversions::to_string_t("avg_duration_time_percent")] = ModelBase::toJson(avgDurationTimePercent_);
    }
    if(totalRowsIsSet_) {
        val[utility::conversions::to_string_t("total_rows")] = ModelBase::toJson(totalRows_);
    }
    if(totalRowsPercentIsSet_) {
        val[utility::conversions::to_string_t("total_rows_percent")] = ModelBase::toJson(totalRowsPercent_);
    }
    if(avgRowsIsSet_) {
        val[utility::conversions::to_string_t("avg_rows")] = ModelBase::toJson(avgRows_);
    }
    if(avgRowsPercentIsSet_) {
        val[utility::conversions::to_string_t("avg_rows_percent")] = ModelBase::toJson(avgRowsPercent_);
    }
    if(totalLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("total_logical_reads")] = ModelBase::toJson(totalLogicalReads_);
    }
    if(totalLogicalReadsPercentIsSet_) {
        val[utility::conversions::to_string_t("total_logical_reads_percent")] = ModelBase::toJson(totalLogicalReadsPercent_);
    }
    if(avgLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_reads")] = ModelBase::toJson(avgLogicalReads_);
    }
    if(avgLogicalReadsPercentIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_reads_percent")] = ModelBase::toJson(avgLogicalReadsPercent_);
    }
    if(avgLogicalWriteIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_write")] = ModelBase::toJson(avgLogicalWrite_);
    }
    if(avgLogicalWritePercentIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_write_percent")] = ModelBase::toJson(avgLogicalWritePercent_);
    }
    if(totalLogicalWriteIsSet_) {
        val[utility::conversions::to_string_t("total_logical_write")] = ModelBase::toJson(totalLogicalWrite_);
    }
    if(totalLogicalWritePercentIsSet_) {
        val[utility::conversions::to_string_t("total_logical_write_percent")] = ModelBase::toJson(totalLogicalWritePercent_);
    }
    if(avgPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("avg_physical_reads")] = ModelBase::toJson(avgPhysicalReads_);
    }
    if(avgPhysicalReadsPercentIsSet_) {
        val[utility::conversions::to_string_t("avg_physical_reads_percent")] = ModelBase::toJson(avgPhysicalReadsPercent_);
    }
    if(totalPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("total_physical_reads")] = ModelBase::toJson(totalPhysicalReads_);
    }
    if(totalPhysicalReadsPercentIsSet_) {
        val[utility::conversions::to_string_t("total_physical_reads_percent")] = ModelBase::toJson(totalPhysicalReadsPercent_);
    }
    if(lastExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("last_execution_time")] = ModelBase::toJson(lastExecutionTime_);
    }

    return val;
}
bool QueryTopSqlsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_count_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_count_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionCountPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cpu_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cpu_time_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cpu_time_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCpuTimePercent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("avg_cpu_time_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_cpu_time_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgCpuTimePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_duration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_duration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDurationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_duration_time_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_duration_time_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDurationTimePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_duration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_duration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgDurationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_duration_time_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_duration_time_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgDurationTimePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_rows_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rows_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRowsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_rows_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_rows_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgRowsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_reads_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_reads_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalReadsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_reads_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_reads_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalReadsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_write"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalWrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_write_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_write_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalWritePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_write"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalWrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_write_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_write_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalWritePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_physical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_physical_reads_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_physical_reads_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgPhysicalReadsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_physical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_physical_reads_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_physical_reads_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPhysicalReadsPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_execution_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastExecutionTime(refVal);
        }
    }
    return ok;
}


std::string QueryTopSqlsResult::getId() const
{
    return id_;
}

void QueryTopSqlsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryTopSqlsResult::idIsSet() const
{
    return idIsSet_;
}

void QueryTopSqlsResult::unsetid()
{
    idIsSet_ = false;
}

std::string QueryTopSqlsResult::getStatement() const
{
    return statement_;
}

void QueryTopSqlsResult::setStatement(const std::string& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool QueryTopSqlsResult::statementIsSet() const
{
    return statementIsSet_;
}

void QueryTopSqlsResult::unsetstatement()
{
    statementIsSet_ = false;
}

std::string QueryTopSqlsResult::getQuery() const
{
    return query_;
}

void QueryTopSqlsResult::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool QueryTopSqlsResult::queryIsSet() const
{
    return queryIsSet_;
}

void QueryTopSqlsResult::unsetquery()
{
    queryIsSet_ = false;
}

std::string QueryTopSqlsResult::getDbName() const
{
    return dbName_;
}

void QueryTopSqlsResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool QueryTopSqlsResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void QueryTopSqlsResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string QueryTopSqlsResult::getExecutionCount() const
{
    return executionCount_;
}

void QueryTopSqlsResult::setExecutionCount(const std::string& value)
{
    executionCount_ = value;
    executionCountIsSet_ = true;
}

bool QueryTopSqlsResult::executionCountIsSet() const
{
    return executionCountIsSet_;
}

void QueryTopSqlsResult::unsetexecutionCount()
{
    executionCountIsSet_ = false;
}

std::string QueryTopSqlsResult::getExecutionCountPercent() const
{
    return executionCountPercent_;
}

void QueryTopSqlsResult::setExecutionCountPercent(const std::string& value)
{
    executionCountPercent_ = value;
    executionCountPercentIsSet_ = true;
}

bool QueryTopSqlsResult::executionCountPercentIsSet() const
{
    return executionCountPercentIsSet_;
}

void QueryTopSqlsResult::unsetexecutionCountPercent()
{
    executionCountPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalCpuTime() const
{
    return totalCpuTime_;
}

void QueryTopSqlsResult::setTotalCpuTime(const std::string& value)
{
    totalCpuTime_ = value;
    totalCpuTimeIsSet_ = true;
}

bool QueryTopSqlsResult::totalCpuTimeIsSet() const
{
    return totalCpuTimeIsSet_;
}

void QueryTopSqlsResult::unsettotalCpuTime()
{
    totalCpuTimeIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalCpuTimePercent() const
{
    return totalCpuTimePercent_;
}

void QueryTopSqlsResult::setTotalCpuTimePercent(const std::string& value)
{
    totalCpuTimePercent_ = value;
    totalCpuTimePercentIsSet_ = true;
}

bool QueryTopSqlsResult::totalCpuTimePercentIsSet() const
{
    return totalCpuTimePercentIsSet_;
}

void QueryTopSqlsResult::unsettotalCpuTimePercent()
{
    totalCpuTimePercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgCpuTime() const
{
    return avgCpuTime_;
}

void QueryTopSqlsResult::setAvgCpuTime(const std::string& value)
{
    avgCpuTime_ = value;
    avgCpuTimeIsSet_ = true;
}

bool QueryTopSqlsResult::avgCpuTimeIsSet() const
{
    return avgCpuTimeIsSet_;
}

void QueryTopSqlsResult::unsetavgCpuTime()
{
    avgCpuTimeIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgCpuTimePercent() const
{
    return avgCpuTimePercent_;
}

void QueryTopSqlsResult::setAvgCpuTimePercent(const std::string& value)
{
    avgCpuTimePercent_ = value;
    avgCpuTimePercentIsSet_ = true;
}

bool QueryTopSqlsResult::avgCpuTimePercentIsSet() const
{
    return avgCpuTimePercentIsSet_;
}

void QueryTopSqlsResult::unsetavgCpuTimePercent()
{
    avgCpuTimePercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalDurationTime() const
{
    return totalDurationTime_;
}

void QueryTopSqlsResult::setTotalDurationTime(const std::string& value)
{
    totalDurationTime_ = value;
    totalDurationTimeIsSet_ = true;
}

bool QueryTopSqlsResult::totalDurationTimeIsSet() const
{
    return totalDurationTimeIsSet_;
}

void QueryTopSqlsResult::unsettotalDurationTime()
{
    totalDurationTimeIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalDurationTimePercent() const
{
    return totalDurationTimePercent_;
}

void QueryTopSqlsResult::setTotalDurationTimePercent(const std::string& value)
{
    totalDurationTimePercent_ = value;
    totalDurationTimePercentIsSet_ = true;
}

bool QueryTopSqlsResult::totalDurationTimePercentIsSet() const
{
    return totalDurationTimePercentIsSet_;
}

void QueryTopSqlsResult::unsettotalDurationTimePercent()
{
    totalDurationTimePercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgDurationTime() const
{
    return avgDurationTime_;
}

void QueryTopSqlsResult::setAvgDurationTime(const std::string& value)
{
    avgDurationTime_ = value;
    avgDurationTimeIsSet_ = true;
}

bool QueryTopSqlsResult::avgDurationTimeIsSet() const
{
    return avgDurationTimeIsSet_;
}

void QueryTopSqlsResult::unsetavgDurationTime()
{
    avgDurationTimeIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgDurationTimePercent() const
{
    return avgDurationTimePercent_;
}

void QueryTopSqlsResult::setAvgDurationTimePercent(const std::string& value)
{
    avgDurationTimePercent_ = value;
    avgDurationTimePercentIsSet_ = true;
}

bool QueryTopSqlsResult::avgDurationTimePercentIsSet() const
{
    return avgDurationTimePercentIsSet_;
}

void QueryTopSqlsResult::unsetavgDurationTimePercent()
{
    avgDurationTimePercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalRows() const
{
    return totalRows_;
}

void QueryTopSqlsResult::setTotalRows(const std::string& value)
{
    totalRows_ = value;
    totalRowsIsSet_ = true;
}

bool QueryTopSqlsResult::totalRowsIsSet() const
{
    return totalRowsIsSet_;
}

void QueryTopSqlsResult::unsettotalRows()
{
    totalRowsIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalRowsPercent() const
{
    return totalRowsPercent_;
}

void QueryTopSqlsResult::setTotalRowsPercent(const std::string& value)
{
    totalRowsPercent_ = value;
    totalRowsPercentIsSet_ = true;
}

bool QueryTopSqlsResult::totalRowsPercentIsSet() const
{
    return totalRowsPercentIsSet_;
}

void QueryTopSqlsResult::unsettotalRowsPercent()
{
    totalRowsPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgRows() const
{
    return avgRows_;
}

void QueryTopSqlsResult::setAvgRows(const std::string& value)
{
    avgRows_ = value;
    avgRowsIsSet_ = true;
}

bool QueryTopSqlsResult::avgRowsIsSet() const
{
    return avgRowsIsSet_;
}

void QueryTopSqlsResult::unsetavgRows()
{
    avgRowsIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgRowsPercent() const
{
    return avgRowsPercent_;
}

void QueryTopSqlsResult::setAvgRowsPercent(const std::string& value)
{
    avgRowsPercent_ = value;
    avgRowsPercentIsSet_ = true;
}

bool QueryTopSqlsResult::avgRowsPercentIsSet() const
{
    return avgRowsPercentIsSet_;
}

void QueryTopSqlsResult::unsetavgRowsPercent()
{
    avgRowsPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalLogicalReads() const
{
    return totalLogicalReads_;
}

void QueryTopSqlsResult::setTotalLogicalReads(const std::string& value)
{
    totalLogicalReads_ = value;
    totalLogicalReadsIsSet_ = true;
}

bool QueryTopSqlsResult::totalLogicalReadsIsSet() const
{
    return totalLogicalReadsIsSet_;
}

void QueryTopSqlsResult::unsettotalLogicalReads()
{
    totalLogicalReadsIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalLogicalReadsPercent() const
{
    return totalLogicalReadsPercent_;
}

void QueryTopSqlsResult::setTotalLogicalReadsPercent(const std::string& value)
{
    totalLogicalReadsPercent_ = value;
    totalLogicalReadsPercentIsSet_ = true;
}

bool QueryTopSqlsResult::totalLogicalReadsPercentIsSet() const
{
    return totalLogicalReadsPercentIsSet_;
}

void QueryTopSqlsResult::unsettotalLogicalReadsPercent()
{
    totalLogicalReadsPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgLogicalReads() const
{
    return avgLogicalReads_;
}

void QueryTopSqlsResult::setAvgLogicalReads(const std::string& value)
{
    avgLogicalReads_ = value;
    avgLogicalReadsIsSet_ = true;
}

bool QueryTopSqlsResult::avgLogicalReadsIsSet() const
{
    return avgLogicalReadsIsSet_;
}

void QueryTopSqlsResult::unsetavgLogicalReads()
{
    avgLogicalReadsIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgLogicalReadsPercent() const
{
    return avgLogicalReadsPercent_;
}

void QueryTopSqlsResult::setAvgLogicalReadsPercent(const std::string& value)
{
    avgLogicalReadsPercent_ = value;
    avgLogicalReadsPercentIsSet_ = true;
}

bool QueryTopSqlsResult::avgLogicalReadsPercentIsSet() const
{
    return avgLogicalReadsPercentIsSet_;
}

void QueryTopSqlsResult::unsetavgLogicalReadsPercent()
{
    avgLogicalReadsPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgLogicalWrite() const
{
    return avgLogicalWrite_;
}

void QueryTopSqlsResult::setAvgLogicalWrite(const std::string& value)
{
    avgLogicalWrite_ = value;
    avgLogicalWriteIsSet_ = true;
}

bool QueryTopSqlsResult::avgLogicalWriteIsSet() const
{
    return avgLogicalWriteIsSet_;
}

void QueryTopSqlsResult::unsetavgLogicalWrite()
{
    avgLogicalWriteIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgLogicalWritePercent() const
{
    return avgLogicalWritePercent_;
}

void QueryTopSqlsResult::setAvgLogicalWritePercent(const std::string& value)
{
    avgLogicalWritePercent_ = value;
    avgLogicalWritePercentIsSet_ = true;
}

bool QueryTopSqlsResult::avgLogicalWritePercentIsSet() const
{
    return avgLogicalWritePercentIsSet_;
}

void QueryTopSqlsResult::unsetavgLogicalWritePercent()
{
    avgLogicalWritePercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalLogicalWrite() const
{
    return totalLogicalWrite_;
}

void QueryTopSqlsResult::setTotalLogicalWrite(const std::string& value)
{
    totalLogicalWrite_ = value;
    totalLogicalWriteIsSet_ = true;
}

bool QueryTopSqlsResult::totalLogicalWriteIsSet() const
{
    return totalLogicalWriteIsSet_;
}

void QueryTopSqlsResult::unsettotalLogicalWrite()
{
    totalLogicalWriteIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalLogicalWritePercent() const
{
    return totalLogicalWritePercent_;
}

void QueryTopSqlsResult::setTotalLogicalWritePercent(const std::string& value)
{
    totalLogicalWritePercent_ = value;
    totalLogicalWritePercentIsSet_ = true;
}

bool QueryTopSqlsResult::totalLogicalWritePercentIsSet() const
{
    return totalLogicalWritePercentIsSet_;
}

void QueryTopSqlsResult::unsettotalLogicalWritePercent()
{
    totalLogicalWritePercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgPhysicalReads() const
{
    return avgPhysicalReads_;
}

void QueryTopSqlsResult::setAvgPhysicalReads(const std::string& value)
{
    avgPhysicalReads_ = value;
    avgPhysicalReadsIsSet_ = true;
}

bool QueryTopSqlsResult::avgPhysicalReadsIsSet() const
{
    return avgPhysicalReadsIsSet_;
}

void QueryTopSqlsResult::unsetavgPhysicalReads()
{
    avgPhysicalReadsIsSet_ = false;
}

std::string QueryTopSqlsResult::getAvgPhysicalReadsPercent() const
{
    return avgPhysicalReadsPercent_;
}

void QueryTopSqlsResult::setAvgPhysicalReadsPercent(const std::string& value)
{
    avgPhysicalReadsPercent_ = value;
    avgPhysicalReadsPercentIsSet_ = true;
}

bool QueryTopSqlsResult::avgPhysicalReadsPercentIsSet() const
{
    return avgPhysicalReadsPercentIsSet_;
}

void QueryTopSqlsResult::unsetavgPhysicalReadsPercent()
{
    avgPhysicalReadsPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalPhysicalReads() const
{
    return totalPhysicalReads_;
}

void QueryTopSqlsResult::setTotalPhysicalReads(const std::string& value)
{
    totalPhysicalReads_ = value;
    totalPhysicalReadsIsSet_ = true;
}

bool QueryTopSqlsResult::totalPhysicalReadsIsSet() const
{
    return totalPhysicalReadsIsSet_;
}

void QueryTopSqlsResult::unsettotalPhysicalReads()
{
    totalPhysicalReadsIsSet_ = false;
}

std::string QueryTopSqlsResult::getTotalPhysicalReadsPercent() const
{
    return totalPhysicalReadsPercent_;
}

void QueryTopSqlsResult::setTotalPhysicalReadsPercent(const std::string& value)
{
    totalPhysicalReadsPercent_ = value;
    totalPhysicalReadsPercentIsSet_ = true;
}

bool QueryTopSqlsResult::totalPhysicalReadsPercentIsSet() const
{
    return totalPhysicalReadsPercentIsSet_;
}

void QueryTopSqlsResult::unsettotalPhysicalReadsPercent()
{
    totalPhysicalReadsPercentIsSet_ = false;
}

std::string QueryTopSqlsResult::getLastExecutionTime() const
{
    return lastExecutionTime_;
}

void QueryTopSqlsResult::setLastExecutionTime(const std::string& value)
{
    lastExecutionTime_ = value;
    lastExecutionTimeIsSet_ = true;
}

bool QueryTopSqlsResult::lastExecutionTimeIsSet() const
{
    return lastExecutionTimeIsSet_;
}

void QueryTopSqlsResult::unsetlastExecutionTime()
{
    lastExecutionTimeIsSet_ = false;
}

}
}
}
}
}


