

#include "huaweicloud/rds/v3/model/TopObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TopObject::TopObject()
{
    rowId_ = "";
    rowIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    objectName_ = "";
    objectNameIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    executionCount_ = "";
    executionCountIsSet_ = false;
    planGenerationNum_ = "";
    planGenerationNumIsSet_ = false;
    lastExecutionTime_ = "";
    lastExecutionTimeIsSet_ = false;
    avgWorkerTime_ = "";
    avgWorkerTimeIsSet_ = false;
    totalWorkerTime_ = "";
    totalWorkerTimeIsSet_ = false;
    lastWorkerTime_ = "";
    lastWorkerTimeIsSet_ = false;
    minWorkerTime_ = "";
    minWorkerTimeIsSet_ = false;
    maxWorkerTime_ = "";
    maxWorkerTimeIsSet_ = false;
    avgLogicalReads_ = "";
    avgLogicalReadsIsSet_ = false;
    totalLogicalReads_ = "";
    totalLogicalReadsIsSet_ = false;
    lastLogicalReads_ = "";
    lastLogicalReadsIsSet_ = false;
    minLogicalReads_ = "";
    minLogicalReadsIsSet_ = false;
    maxLogicalReads_ = "";
    maxLogicalReadsIsSet_ = false;
    avgLogicalWrites_ = "";
    avgLogicalWritesIsSet_ = false;
    totalLogicalWrites_ = "";
    totalLogicalWritesIsSet_ = false;
    lastLogicalWrites_ = "";
    lastLogicalWritesIsSet_ = false;
    minLogicalWrites_ = "";
    minLogicalWritesIsSet_ = false;
    maxLogicalWrites_ = "";
    maxLogicalWritesIsSet_ = false;
    avgLogicalIo_ = "";
    avgLogicalIoIsSet_ = false;
    totalLogicalIo_ = "";
    totalLogicalIoIsSet_ = false;
    lastLogicalIo_ = "";
    lastLogicalIoIsSet_ = false;
    minLogicalIo_ = "";
    minLogicalIoIsSet_ = false;
    maxLogicalIo_ = "";
    maxLogicalIoIsSet_ = false;
    avgPhysicalReads_ = "";
    avgPhysicalReadsIsSet_ = false;
    totalPhysicalReads_ = "";
    totalPhysicalReadsIsSet_ = false;
    lastPhysicalReads_ = "";
    lastPhysicalReadsIsSet_ = false;
    minPhysicalReads_ = "";
    minPhysicalReadsIsSet_ = false;
    maxPhysicalReads_ = "";
    maxPhysicalReadsIsSet_ = false;
    avgElapsedTime_ = "";
    avgElapsedTimeIsSet_ = false;
    totalElapsedTime_ = "";
    totalElapsedTimeIsSet_ = false;
    lastElapsedTime_ = "";
    lastElapsedTimeIsSet_ = false;
    minElapsedTime_ = "";
    minElapsedTimeIsSet_ = false;
    maxElapsedTime_ = "";
    maxElapsedTimeIsSet_ = false;
    avgRows_ = "";
    avgRowsIsSet_ = false;
    totalRows_ = "";
    totalRowsIsSet_ = false;
    lastRows_ = "";
    lastRowsIsSet_ = false;
    minRows_ = "";
    minRowsIsSet_ = false;
    maxRows_ = "";
    maxRowsIsSet_ = false;
}

TopObject::~TopObject() = default;

void TopObject::validate()
{
}

web::json::value TopObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rowIdIsSet_) {
        val[utility::conversions::to_string_t("row_id")] = ModelBase::toJson(rowId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(objectNameIsSet_) {
        val[utility::conversions::to_string_t("object_name")] = ModelBase::toJson(objectName_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(executionCountIsSet_) {
        val[utility::conversions::to_string_t("execution_count")] = ModelBase::toJson(executionCount_);
    }
    if(planGenerationNumIsSet_) {
        val[utility::conversions::to_string_t("plan_generation_num")] = ModelBase::toJson(planGenerationNum_);
    }
    if(lastExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("last_execution_time")] = ModelBase::toJson(lastExecutionTime_);
    }
    if(avgWorkerTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_worker_time")] = ModelBase::toJson(avgWorkerTime_);
    }
    if(totalWorkerTimeIsSet_) {
        val[utility::conversions::to_string_t("total_worker_time")] = ModelBase::toJson(totalWorkerTime_);
    }
    if(lastWorkerTimeIsSet_) {
        val[utility::conversions::to_string_t("last_worker_time")] = ModelBase::toJson(lastWorkerTime_);
    }
    if(minWorkerTimeIsSet_) {
        val[utility::conversions::to_string_t("min_worker_time")] = ModelBase::toJson(minWorkerTime_);
    }
    if(maxWorkerTimeIsSet_) {
        val[utility::conversions::to_string_t("max_worker_time")] = ModelBase::toJson(maxWorkerTime_);
    }
    if(avgLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_reads")] = ModelBase::toJson(avgLogicalReads_);
    }
    if(totalLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("total_logical_reads")] = ModelBase::toJson(totalLogicalReads_);
    }
    if(lastLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("last_logical_reads")] = ModelBase::toJson(lastLogicalReads_);
    }
    if(minLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("min_logical_reads")] = ModelBase::toJson(minLogicalReads_);
    }
    if(maxLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("max_logical_reads")] = ModelBase::toJson(maxLogicalReads_);
    }
    if(avgLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_writes")] = ModelBase::toJson(avgLogicalWrites_);
    }
    if(totalLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("total_logical_writes")] = ModelBase::toJson(totalLogicalWrites_);
    }
    if(lastLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("last_logical_writes")] = ModelBase::toJson(lastLogicalWrites_);
    }
    if(minLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("min_logical_writes")] = ModelBase::toJson(minLogicalWrites_);
    }
    if(maxLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("max_logical_writes")] = ModelBase::toJson(maxLogicalWrites_);
    }
    if(avgLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_io")] = ModelBase::toJson(avgLogicalIo_);
    }
    if(totalLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("total_logical_io")] = ModelBase::toJson(totalLogicalIo_);
    }
    if(lastLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("last_logical_io")] = ModelBase::toJson(lastLogicalIo_);
    }
    if(minLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("min_logical_io")] = ModelBase::toJson(minLogicalIo_);
    }
    if(maxLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("max_logical_io")] = ModelBase::toJson(maxLogicalIo_);
    }
    if(avgPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("avg_physical_reads")] = ModelBase::toJson(avgPhysicalReads_);
    }
    if(totalPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("total_physical_reads")] = ModelBase::toJson(totalPhysicalReads_);
    }
    if(lastPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("last_physical_reads")] = ModelBase::toJson(lastPhysicalReads_);
    }
    if(minPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("min_physical_reads")] = ModelBase::toJson(minPhysicalReads_);
    }
    if(maxPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("max_physical_reads")] = ModelBase::toJson(maxPhysicalReads_);
    }
    if(avgElapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_elapsed_time")] = ModelBase::toJson(avgElapsedTime_);
    }
    if(totalElapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("total_elapsed_time")] = ModelBase::toJson(totalElapsedTime_);
    }
    if(lastElapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_elapsed_time")] = ModelBase::toJson(lastElapsedTime_);
    }
    if(minElapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("min_elapsed_time")] = ModelBase::toJson(minElapsedTime_);
    }
    if(maxElapsedTimeIsSet_) {
        val[utility::conversions::to_string_t("max_elapsed_time")] = ModelBase::toJson(maxElapsedTime_);
    }
    if(avgRowsIsSet_) {
        val[utility::conversions::to_string_t("avg_rows")] = ModelBase::toJson(avgRows_);
    }
    if(totalRowsIsSet_) {
        val[utility::conversions::to_string_t("total_rows")] = ModelBase::toJson(totalRows_);
    }
    if(lastRowsIsSet_) {
        val[utility::conversions::to_string_t("last_rows")] = ModelBase::toJson(lastRows_);
    }
    if(minRowsIsSet_) {
        val[utility::conversions::to_string_t("min_rows")] = ModelBase::toJson(minRows_);
    }
    if(maxRowsIsSet_) {
        val[utility::conversions::to_string_t("max_rows")] = ModelBase::toJson(maxRows_);
    }

    return val;
}
bool TopObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("row_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("row_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_generation_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_generation_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanGenerationNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("avg_worker_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_worker_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgWorkerTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_worker_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_worker_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalWorkerTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_worker_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_worker_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastWorkerTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_worker_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_worker_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinWorkerTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_worker_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_worker_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxWorkerTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_logical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_logical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_logical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_writes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_writes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_logical_writes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_logical_writes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_logical_writes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_logical_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastLogicalIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_logical_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLogicalIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_logical_io"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLogicalIo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_physical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_physical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_physical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_physical_reads"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgElapsedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalElapsedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastElapsedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinElapsedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_elapsed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_elapsed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxElapsedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_rows"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRows(refVal);
        }
    }
    return ok;
}


std::string TopObject::getRowId() const
{
    return rowId_;
}

void TopObject::setRowId(const std::string& value)
{
    rowId_ = value;
    rowIdIsSet_ = true;
}

bool TopObject::rowIdIsSet() const
{
    return rowIdIsSet_;
}

void TopObject::unsetrowId()
{
    rowIdIsSet_ = false;
}

std::string TopObject::getDatabaseName() const
{
    return databaseName_;
}

void TopObject::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool TopObject::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void TopObject::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string TopObject::getSchemaName() const
{
    return schemaName_;
}

void TopObject::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool TopObject::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void TopObject::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string TopObject::getObjectName() const
{
    return objectName_;
}

void TopObject::setObjectName(const std::string& value)
{
    objectName_ = value;
    objectNameIsSet_ = true;
}

bool TopObject::objectNameIsSet() const
{
    return objectNameIsSet_;
}

void TopObject::unsetobjectName()
{
    objectNameIsSet_ = false;
}

std::string TopObject::getObjectId() const
{
    return objectId_;
}

void TopObject::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool TopObject::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void TopObject::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string TopObject::getObjectType() const
{
    return objectType_;
}

void TopObject::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool TopObject::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void TopObject::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string TopObject::getSqlStatement() const
{
    return sqlStatement_;
}

void TopObject::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool TopObject::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void TopObject::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string TopObject::getExecutionCount() const
{
    return executionCount_;
}

void TopObject::setExecutionCount(const std::string& value)
{
    executionCount_ = value;
    executionCountIsSet_ = true;
}

bool TopObject::executionCountIsSet() const
{
    return executionCountIsSet_;
}

void TopObject::unsetexecutionCount()
{
    executionCountIsSet_ = false;
}

std::string TopObject::getPlanGenerationNum() const
{
    return planGenerationNum_;
}

void TopObject::setPlanGenerationNum(const std::string& value)
{
    planGenerationNum_ = value;
    planGenerationNumIsSet_ = true;
}

bool TopObject::planGenerationNumIsSet() const
{
    return planGenerationNumIsSet_;
}

void TopObject::unsetplanGenerationNum()
{
    planGenerationNumIsSet_ = false;
}

std::string TopObject::getLastExecutionTime() const
{
    return lastExecutionTime_;
}

void TopObject::setLastExecutionTime(const std::string& value)
{
    lastExecutionTime_ = value;
    lastExecutionTimeIsSet_ = true;
}

bool TopObject::lastExecutionTimeIsSet() const
{
    return lastExecutionTimeIsSet_;
}

void TopObject::unsetlastExecutionTime()
{
    lastExecutionTimeIsSet_ = false;
}

std::string TopObject::getAvgWorkerTime() const
{
    return avgWorkerTime_;
}

void TopObject::setAvgWorkerTime(const std::string& value)
{
    avgWorkerTime_ = value;
    avgWorkerTimeIsSet_ = true;
}

bool TopObject::avgWorkerTimeIsSet() const
{
    return avgWorkerTimeIsSet_;
}

void TopObject::unsetavgWorkerTime()
{
    avgWorkerTimeIsSet_ = false;
}

std::string TopObject::getTotalWorkerTime() const
{
    return totalWorkerTime_;
}

void TopObject::setTotalWorkerTime(const std::string& value)
{
    totalWorkerTime_ = value;
    totalWorkerTimeIsSet_ = true;
}

bool TopObject::totalWorkerTimeIsSet() const
{
    return totalWorkerTimeIsSet_;
}

void TopObject::unsettotalWorkerTime()
{
    totalWorkerTimeIsSet_ = false;
}

std::string TopObject::getLastWorkerTime() const
{
    return lastWorkerTime_;
}

void TopObject::setLastWorkerTime(const std::string& value)
{
    lastWorkerTime_ = value;
    lastWorkerTimeIsSet_ = true;
}

bool TopObject::lastWorkerTimeIsSet() const
{
    return lastWorkerTimeIsSet_;
}

void TopObject::unsetlastWorkerTime()
{
    lastWorkerTimeIsSet_ = false;
}

std::string TopObject::getMinWorkerTime() const
{
    return minWorkerTime_;
}

void TopObject::setMinWorkerTime(const std::string& value)
{
    minWorkerTime_ = value;
    minWorkerTimeIsSet_ = true;
}

bool TopObject::minWorkerTimeIsSet() const
{
    return minWorkerTimeIsSet_;
}

void TopObject::unsetminWorkerTime()
{
    minWorkerTimeIsSet_ = false;
}

std::string TopObject::getMaxWorkerTime() const
{
    return maxWorkerTime_;
}

void TopObject::setMaxWorkerTime(const std::string& value)
{
    maxWorkerTime_ = value;
    maxWorkerTimeIsSet_ = true;
}

bool TopObject::maxWorkerTimeIsSet() const
{
    return maxWorkerTimeIsSet_;
}

void TopObject::unsetmaxWorkerTime()
{
    maxWorkerTimeIsSet_ = false;
}

std::string TopObject::getAvgLogicalReads() const
{
    return avgLogicalReads_;
}

void TopObject::setAvgLogicalReads(const std::string& value)
{
    avgLogicalReads_ = value;
    avgLogicalReadsIsSet_ = true;
}

bool TopObject::avgLogicalReadsIsSet() const
{
    return avgLogicalReadsIsSet_;
}

void TopObject::unsetavgLogicalReads()
{
    avgLogicalReadsIsSet_ = false;
}

std::string TopObject::getTotalLogicalReads() const
{
    return totalLogicalReads_;
}

void TopObject::setTotalLogicalReads(const std::string& value)
{
    totalLogicalReads_ = value;
    totalLogicalReadsIsSet_ = true;
}

bool TopObject::totalLogicalReadsIsSet() const
{
    return totalLogicalReadsIsSet_;
}

void TopObject::unsettotalLogicalReads()
{
    totalLogicalReadsIsSet_ = false;
}

std::string TopObject::getLastLogicalReads() const
{
    return lastLogicalReads_;
}

void TopObject::setLastLogicalReads(const std::string& value)
{
    lastLogicalReads_ = value;
    lastLogicalReadsIsSet_ = true;
}

bool TopObject::lastLogicalReadsIsSet() const
{
    return lastLogicalReadsIsSet_;
}

void TopObject::unsetlastLogicalReads()
{
    lastLogicalReadsIsSet_ = false;
}

std::string TopObject::getMinLogicalReads() const
{
    return minLogicalReads_;
}

void TopObject::setMinLogicalReads(const std::string& value)
{
    minLogicalReads_ = value;
    minLogicalReadsIsSet_ = true;
}

bool TopObject::minLogicalReadsIsSet() const
{
    return minLogicalReadsIsSet_;
}

void TopObject::unsetminLogicalReads()
{
    minLogicalReadsIsSet_ = false;
}

std::string TopObject::getMaxLogicalReads() const
{
    return maxLogicalReads_;
}

void TopObject::setMaxLogicalReads(const std::string& value)
{
    maxLogicalReads_ = value;
    maxLogicalReadsIsSet_ = true;
}

bool TopObject::maxLogicalReadsIsSet() const
{
    return maxLogicalReadsIsSet_;
}

void TopObject::unsetmaxLogicalReads()
{
    maxLogicalReadsIsSet_ = false;
}

std::string TopObject::getAvgLogicalWrites() const
{
    return avgLogicalWrites_;
}

void TopObject::setAvgLogicalWrites(const std::string& value)
{
    avgLogicalWrites_ = value;
    avgLogicalWritesIsSet_ = true;
}

bool TopObject::avgLogicalWritesIsSet() const
{
    return avgLogicalWritesIsSet_;
}

void TopObject::unsetavgLogicalWrites()
{
    avgLogicalWritesIsSet_ = false;
}

std::string TopObject::getTotalLogicalWrites() const
{
    return totalLogicalWrites_;
}

void TopObject::setTotalLogicalWrites(const std::string& value)
{
    totalLogicalWrites_ = value;
    totalLogicalWritesIsSet_ = true;
}

bool TopObject::totalLogicalWritesIsSet() const
{
    return totalLogicalWritesIsSet_;
}

void TopObject::unsettotalLogicalWrites()
{
    totalLogicalWritesIsSet_ = false;
}

std::string TopObject::getLastLogicalWrites() const
{
    return lastLogicalWrites_;
}

void TopObject::setLastLogicalWrites(const std::string& value)
{
    lastLogicalWrites_ = value;
    lastLogicalWritesIsSet_ = true;
}

bool TopObject::lastLogicalWritesIsSet() const
{
    return lastLogicalWritesIsSet_;
}

void TopObject::unsetlastLogicalWrites()
{
    lastLogicalWritesIsSet_ = false;
}

std::string TopObject::getMinLogicalWrites() const
{
    return minLogicalWrites_;
}

void TopObject::setMinLogicalWrites(const std::string& value)
{
    minLogicalWrites_ = value;
    minLogicalWritesIsSet_ = true;
}

bool TopObject::minLogicalWritesIsSet() const
{
    return minLogicalWritesIsSet_;
}

void TopObject::unsetminLogicalWrites()
{
    minLogicalWritesIsSet_ = false;
}

std::string TopObject::getMaxLogicalWrites() const
{
    return maxLogicalWrites_;
}

void TopObject::setMaxLogicalWrites(const std::string& value)
{
    maxLogicalWrites_ = value;
    maxLogicalWritesIsSet_ = true;
}

bool TopObject::maxLogicalWritesIsSet() const
{
    return maxLogicalWritesIsSet_;
}

void TopObject::unsetmaxLogicalWrites()
{
    maxLogicalWritesIsSet_ = false;
}

std::string TopObject::getAvgLogicalIo() const
{
    return avgLogicalIo_;
}

void TopObject::setAvgLogicalIo(const std::string& value)
{
    avgLogicalIo_ = value;
    avgLogicalIoIsSet_ = true;
}

bool TopObject::avgLogicalIoIsSet() const
{
    return avgLogicalIoIsSet_;
}

void TopObject::unsetavgLogicalIo()
{
    avgLogicalIoIsSet_ = false;
}

std::string TopObject::getTotalLogicalIo() const
{
    return totalLogicalIo_;
}

void TopObject::setTotalLogicalIo(const std::string& value)
{
    totalLogicalIo_ = value;
    totalLogicalIoIsSet_ = true;
}

bool TopObject::totalLogicalIoIsSet() const
{
    return totalLogicalIoIsSet_;
}

void TopObject::unsettotalLogicalIo()
{
    totalLogicalIoIsSet_ = false;
}

std::string TopObject::getLastLogicalIo() const
{
    return lastLogicalIo_;
}

void TopObject::setLastLogicalIo(const std::string& value)
{
    lastLogicalIo_ = value;
    lastLogicalIoIsSet_ = true;
}

bool TopObject::lastLogicalIoIsSet() const
{
    return lastLogicalIoIsSet_;
}

void TopObject::unsetlastLogicalIo()
{
    lastLogicalIoIsSet_ = false;
}

std::string TopObject::getMinLogicalIo() const
{
    return minLogicalIo_;
}

void TopObject::setMinLogicalIo(const std::string& value)
{
    minLogicalIo_ = value;
    minLogicalIoIsSet_ = true;
}

bool TopObject::minLogicalIoIsSet() const
{
    return minLogicalIoIsSet_;
}

void TopObject::unsetminLogicalIo()
{
    minLogicalIoIsSet_ = false;
}

std::string TopObject::getMaxLogicalIo() const
{
    return maxLogicalIo_;
}

void TopObject::setMaxLogicalIo(const std::string& value)
{
    maxLogicalIo_ = value;
    maxLogicalIoIsSet_ = true;
}

bool TopObject::maxLogicalIoIsSet() const
{
    return maxLogicalIoIsSet_;
}

void TopObject::unsetmaxLogicalIo()
{
    maxLogicalIoIsSet_ = false;
}

std::string TopObject::getAvgPhysicalReads() const
{
    return avgPhysicalReads_;
}

void TopObject::setAvgPhysicalReads(const std::string& value)
{
    avgPhysicalReads_ = value;
    avgPhysicalReadsIsSet_ = true;
}

bool TopObject::avgPhysicalReadsIsSet() const
{
    return avgPhysicalReadsIsSet_;
}

void TopObject::unsetavgPhysicalReads()
{
    avgPhysicalReadsIsSet_ = false;
}

std::string TopObject::getTotalPhysicalReads() const
{
    return totalPhysicalReads_;
}

void TopObject::setTotalPhysicalReads(const std::string& value)
{
    totalPhysicalReads_ = value;
    totalPhysicalReadsIsSet_ = true;
}

bool TopObject::totalPhysicalReadsIsSet() const
{
    return totalPhysicalReadsIsSet_;
}

void TopObject::unsettotalPhysicalReads()
{
    totalPhysicalReadsIsSet_ = false;
}

std::string TopObject::getLastPhysicalReads() const
{
    return lastPhysicalReads_;
}

void TopObject::setLastPhysicalReads(const std::string& value)
{
    lastPhysicalReads_ = value;
    lastPhysicalReadsIsSet_ = true;
}

bool TopObject::lastPhysicalReadsIsSet() const
{
    return lastPhysicalReadsIsSet_;
}

void TopObject::unsetlastPhysicalReads()
{
    lastPhysicalReadsIsSet_ = false;
}

std::string TopObject::getMinPhysicalReads() const
{
    return minPhysicalReads_;
}

void TopObject::setMinPhysicalReads(const std::string& value)
{
    minPhysicalReads_ = value;
    minPhysicalReadsIsSet_ = true;
}

bool TopObject::minPhysicalReadsIsSet() const
{
    return minPhysicalReadsIsSet_;
}

void TopObject::unsetminPhysicalReads()
{
    minPhysicalReadsIsSet_ = false;
}

std::string TopObject::getMaxPhysicalReads() const
{
    return maxPhysicalReads_;
}

void TopObject::setMaxPhysicalReads(const std::string& value)
{
    maxPhysicalReads_ = value;
    maxPhysicalReadsIsSet_ = true;
}

bool TopObject::maxPhysicalReadsIsSet() const
{
    return maxPhysicalReadsIsSet_;
}

void TopObject::unsetmaxPhysicalReads()
{
    maxPhysicalReadsIsSet_ = false;
}

std::string TopObject::getAvgElapsedTime() const
{
    return avgElapsedTime_;
}

void TopObject::setAvgElapsedTime(const std::string& value)
{
    avgElapsedTime_ = value;
    avgElapsedTimeIsSet_ = true;
}

bool TopObject::avgElapsedTimeIsSet() const
{
    return avgElapsedTimeIsSet_;
}

void TopObject::unsetavgElapsedTime()
{
    avgElapsedTimeIsSet_ = false;
}

std::string TopObject::getTotalElapsedTime() const
{
    return totalElapsedTime_;
}

void TopObject::setTotalElapsedTime(const std::string& value)
{
    totalElapsedTime_ = value;
    totalElapsedTimeIsSet_ = true;
}

bool TopObject::totalElapsedTimeIsSet() const
{
    return totalElapsedTimeIsSet_;
}

void TopObject::unsettotalElapsedTime()
{
    totalElapsedTimeIsSet_ = false;
}

std::string TopObject::getLastElapsedTime() const
{
    return lastElapsedTime_;
}

void TopObject::setLastElapsedTime(const std::string& value)
{
    lastElapsedTime_ = value;
    lastElapsedTimeIsSet_ = true;
}

bool TopObject::lastElapsedTimeIsSet() const
{
    return lastElapsedTimeIsSet_;
}

void TopObject::unsetlastElapsedTime()
{
    lastElapsedTimeIsSet_ = false;
}

std::string TopObject::getMinElapsedTime() const
{
    return minElapsedTime_;
}

void TopObject::setMinElapsedTime(const std::string& value)
{
    minElapsedTime_ = value;
    minElapsedTimeIsSet_ = true;
}

bool TopObject::minElapsedTimeIsSet() const
{
    return minElapsedTimeIsSet_;
}

void TopObject::unsetminElapsedTime()
{
    minElapsedTimeIsSet_ = false;
}

std::string TopObject::getMaxElapsedTime() const
{
    return maxElapsedTime_;
}

void TopObject::setMaxElapsedTime(const std::string& value)
{
    maxElapsedTime_ = value;
    maxElapsedTimeIsSet_ = true;
}

bool TopObject::maxElapsedTimeIsSet() const
{
    return maxElapsedTimeIsSet_;
}

void TopObject::unsetmaxElapsedTime()
{
    maxElapsedTimeIsSet_ = false;
}

std::string TopObject::getAvgRows() const
{
    return avgRows_;
}

void TopObject::setAvgRows(const std::string& value)
{
    avgRows_ = value;
    avgRowsIsSet_ = true;
}

bool TopObject::avgRowsIsSet() const
{
    return avgRowsIsSet_;
}

void TopObject::unsetavgRows()
{
    avgRowsIsSet_ = false;
}

std::string TopObject::getTotalRows() const
{
    return totalRows_;
}

void TopObject::setTotalRows(const std::string& value)
{
    totalRows_ = value;
    totalRowsIsSet_ = true;
}

bool TopObject::totalRowsIsSet() const
{
    return totalRowsIsSet_;
}

void TopObject::unsettotalRows()
{
    totalRowsIsSet_ = false;
}

std::string TopObject::getLastRows() const
{
    return lastRows_;
}

void TopObject::setLastRows(const std::string& value)
{
    lastRows_ = value;
    lastRowsIsSet_ = true;
}

bool TopObject::lastRowsIsSet() const
{
    return lastRowsIsSet_;
}

void TopObject::unsetlastRows()
{
    lastRowsIsSet_ = false;
}

std::string TopObject::getMinRows() const
{
    return minRows_;
}

void TopObject::setMinRows(const std::string& value)
{
    minRows_ = value;
    minRowsIsSet_ = true;
}

bool TopObject::minRowsIsSet() const
{
    return minRowsIsSet_;
}

void TopObject::unsetminRows()
{
    minRowsIsSet_ = false;
}

std::string TopObject::getMaxRows() const
{
    return maxRows_;
}

void TopObject::setMaxRows(const std::string& value)
{
    maxRows_ = value;
    maxRowsIsSet_ = true;
}

bool TopObject::maxRowsIsSet() const
{
    return maxRowsIsSet_;
}

void TopObject::unsetmaxRows()
{
    maxRowsIsSet_ = false;
}

}
}
}
}
}


