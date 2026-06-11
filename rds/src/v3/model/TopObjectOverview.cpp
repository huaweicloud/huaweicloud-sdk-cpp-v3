

#include "huaweicloud/rds/v3/model/TopObjectOverview.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TopObjectOverview::TopObjectOverview()
{
    avgCpuTime_ = 0.0;
    avgCpuTimeIsSet_ = false;
    avgCpuTimePercentage_ = 0.0;
    avgCpuTimePercentageIsSet_ = false;
    avgExecutionTime_ = 0.0;
    avgExecutionTimeIsSet_ = false;
    avgExecutionTimePercentage_ = 0.0;
    avgExecutionTimePercentageIsSet_ = false;
    avgLogicalIo_ = 0.0;
    avgLogicalIoIsSet_ = false;
    avgLogicalIoPercentage_ = 0.0;
    avgLogicalIoPercentageIsSet_ = false;
    avgLogicalReads_ = 0.0;
    avgLogicalReadsIsSet_ = false;
    avgLogicalReadsPercentage_ = 0.0;
    avgLogicalReadsPercentageIsSet_ = false;
    avgLogicalWrites_ = 0.0;
    avgLogicalWritesIsSet_ = false;
    avgLogicalWritesPercentage_ = 0.0;
    avgLogicalWritesPercentageIsSet_ = false;
    avgPhysicalReads_ = 0.0;
    avgPhysicalReadsIsSet_ = false;
    avgPhysicalReadsPercentage_ = 0.0;
    avgPhysicalReadsPercentageIsSet_ = false;
    avgRows_ = 0.0;
    avgRowsIsSet_ = false;
    avgRowsPercentage_ = 0.0;
    avgRowsPercentageIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    objectName_ = "";
    objectNameIsSet_ = false;
    rowId_ = "";
    rowIdIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    totalCpuTime_ = 0.0;
    totalCpuTimeIsSet_ = false;
    totalCpuTimePercentage_ = 0.0;
    totalCpuTimePercentageIsSet_ = false;
    totalExecutionTime_ = 0.0;
    totalExecutionTimeIsSet_ = false;
    totalExecutionTimePercentage_ = 0.0;
    totalExecutionTimePercentageIsSet_ = false;
    totalExecutionCount_ = 0.0;
    totalExecutionCountIsSet_ = false;
    totalLogicalIo_ = 0.0;
    totalLogicalIoIsSet_ = false;
    totalLogicalIoPercentage_ = 0.0;
    totalLogicalIoPercentageIsSet_ = false;
    totalLogicalReads_ = 0.0;
    totalLogicalReadsIsSet_ = false;
    totalLogicalReadsPercentage_ = 0.0;
    totalLogicalReadsPercentageIsSet_ = false;
    totalLogicalWrites_ = 0.0;
    totalLogicalWritesIsSet_ = false;
    totalLogicalWritesPercentage_ = 0.0;
    totalLogicalWritesPercentageIsSet_ = false;
    totalPhysicalReads_ = 0.0;
    totalPhysicalReadsIsSet_ = false;
    totalPhysicalReadsPercentage_ = 0.0;
    totalPhysicalReadsPercentageIsSet_ = false;
    totalRows_ = 0.0;
    totalRowsIsSet_ = false;
    totalRowsPercentage_ = 0.0;
    totalRowsPercentageIsSet_ = false;
}

TopObjectOverview::~TopObjectOverview() = default;

void TopObjectOverview::validate()
{
}

web::json::value TopObjectOverview::toJson() const
{
    web::json::value val = web::json::value::object();

    if(avgCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time")] = ModelBase::toJson(avgCpuTime_);
    }
    if(avgCpuTimePercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time_percentage")] = ModelBase::toJson(avgCpuTimePercentage_);
    }
    if(avgExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_execution_time")] = ModelBase::toJson(avgExecutionTime_);
    }
    if(avgExecutionTimePercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_execution_time_percentage")] = ModelBase::toJson(avgExecutionTimePercentage_);
    }
    if(avgLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_io")] = ModelBase::toJson(avgLogicalIo_);
    }
    if(avgLogicalIoPercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_io_percentage")] = ModelBase::toJson(avgLogicalIoPercentage_);
    }
    if(avgLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_reads")] = ModelBase::toJson(avgLogicalReads_);
    }
    if(avgLogicalReadsPercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_reads_percentage")] = ModelBase::toJson(avgLogicalReadsPercentage_);
    }
    if(avgLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_writes")] = ModelBase::toJson(avgLogicalWrites_);
    }
    if(avgLogicalWritesPercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_writes_percentage")] = ModelBase::toJson(avgLogicalWritesPercentage_);
    }
    if(avgPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("avg_physical_reads")] = ModelBase::toJson(avgPhysicalReads_);
    }
    if(avgPhysicalReadsPercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_physical_reads_percentage")] = ModelBase::toJson(avgPhysicalReadsPercentage_);
    }
    if(avgRowsIsSet_) {
        val[utility::conversions::to_string_t("avg_rows")] = ModelBase::toJson(avgRows_);
    }
    if(avgRowsPercentageIsSet_) {
        val[utility::conversions::to_string_t("avg_rows_percentage")] = ModelBase::toJson(avgRowsPercentage_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(objectNameIsSet_) {
        val[utility::conversions::to_string_t("object_name")] = ModelBase::toJson(objectName_);
    }
    if(rowIdIsSet_) {
        val[utility::conversions::to_string_t("row_id")] = ModelBase::toJson(rowId_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(totalCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("total_cpu_time")] = ModelBase::toJson(totalCpuTime_);
    }
    if(totalCpuTimePercentageIsSet_) {
        val[utility::conversions::to_string_t("total_cpu_time_percentage")] = ModelBase::toJson(totalCpuTimePercentage_);
    }
    if(totalExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("total_execution_time")] = ModelBase::toJson(totalExecutionTime_);
    }
    if(totalExecutionTimePercentageIsSet_) {
        val[utility::conversions::to_string_t("total_execution_time_percentage")] = ModelBase::toJson(totalExecutionTimePercentage_);
    }
    if(totalExecutionCountIsSet_) {
        val[utility::conversions::to_string_t("total_execution_count")] = ModelBase::toJson(totalExecutionCount_);
    }
    if(totalLogicalIoIsSet_) {
        val[utility::conversions::to_string_t("total_logical_io")] = ModelBase::toJson(totalLogicalIo_);
    }
    if(totalLogicalIoPercentageIsSet_) {
        val[utility::conversions::to_string_t("total_logical_io_percentage")] = ModelBase::toJson(totalLogicalIoPercentage_);
    }
    if(totalLogicalReadsIsSet_) {
        val[utility::conversions::to_string_t("total_logical_reads")] = ModelBase::toJson(totalLogicalReads_);
    }
    if(totalLogicalReadsPercentageIsSet_) {
        val[utility::conversions::to_string_t("total_logical_reads_percentage")] = ModelBase::toJson(totalLogicalReadsPercentage_);
    }
    if(totalLogicalWritesIsSet_) {
        val[utility::conversions::to_string_t("total_logical_writes")] = ModelBase::toJson(totalLogicalWrites_);
    }
    if(totalLogicalWritesPercentageIsSet_) {
        val[utility::conversions::to_string_t("total_logical_writes_percentage")] = ModelBase::toJson(totalLogicalWritesPercentage_);
    }
    if(totalPhysicalReadsIsSet_) {
        val[utility::conversions::to_string_t("total_physical_reads")] = ModelBase::toJson(totalPhysicalReads_);
    }
    if(totalPhysicalReadsPercentageIsSet_) {
        val[utility::conversions::to_string_t("total_physical_reads_percentage")] = ModelBase::toJson(totalPhysicalReadsPercentage_);
    }
    if(totalRowsIsSet_) {
        val[utility::conversions::to_string_t("total_rows")] = ModelBase::toJson(totalRows_);
    }
    if(totalRowsPercentageIsSet_) {
        val[utility::conversions::to_string_t("total_rows_percentage")] = ModelBase::toJson(totalRowsPercentage_);
    }

    return val;
}
bool TopObjectOverview::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("avg_cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_cpu_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_cpu_time_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_cpu_time_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgCpuTimePercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_execution_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_execution_time_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_execution_time_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgExecutionTimePercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_io"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_io_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_io_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalIoPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_reads"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_reads_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_reads_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalReadsPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_writes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_writes_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_writes_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalWritesPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_physical_reads"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_physical_reads_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_physical_reads_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgPhysicalReadsPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_rows"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_rows_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_rows_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgRowsPercentage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("row_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("row_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cpu_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cpu_time_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cpu_time_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCpuTimePercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_execution_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_execution_time_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_execution_time_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalExecutionTimePercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_execution_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_execution_count"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalExecutionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_io"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalIo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_io_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_io_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalIoPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_reads"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_reads_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_reads_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalReadsPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_writes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_writes"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalWrites(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_writes_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_writes_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalWritesPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_physical_reads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_physical_reads"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPhysicalReads(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_physical_reads_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_physical_reads_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPhysicalReadsPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rows"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_rows_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rows_percentage"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRowsPercentage(refVal);
        }
    }
    return ok;
}


double TopObjectOverview::getAvgCpuTime() const
{
    return avgCpuTime_;
}

void TopObjectOverview::setAvgCpuTime(double value)
{
    avgCpuTime_ = value;
    avgCpuTimeIsSet_ = true;
}

bool TopObjectOverview::avgCpuTimeIsSet() const
{
    return avgCpuTimeIsSet_;
}

void TopObjectOverview::unsetavgCpuTime()
{
    avgCpuTimeIsSet_ = false;
}

double TopObjectOverview::getAvgCpuTimePercentage() const
{
    return avgCpuTimePercentage_;
}

void TopObjectOverview::setAvgCpuTimePercentage(double value)
{
    avgCpuTimePercentage_ = value;
    avgCpuTimePercentageIsSet_ = true;
}

bool TopObjectOverview::avgCpuTimePercentageIsSet() const
{
    return avgCpuTimePercentageIsSet_;
}

void TopObjectOverview::unsetavgCpuTimePercentage()
{
    avgCpuTimePercentageIsSet_ = false;
}

double TopObjectOverview::getAvgExecutionTime() const
{
    return avgExecutionTime_;
}

void TopObjectOverview::setAvgExecutionTime(double value)
{
    avgExecutionTime_ = value;
    avgExecutionTimeIsSet_ = true;
}

bool TopObjectOverview::avgExecutionTimeIsSet() const
{
    return avgExecutionTimeIsSet_;
}

void TopObjectOverview::unsetavgExecutionTime()
{
    avgExecutionTimeIsSet_ = false;
}

double TopObjectOverview::getAvgExecutionTimePercentage() const
{
    return avgExecutionTimePercentage_;
}

void TopObjectOverview::setAvgExecutionTimePercentage(double value)
{
    avgExecutionTimePercentage_ = value;
    avgExecutionTimePercentageIsSet_ = true;
}

bool TopObjectOverview::avgExecutionTimePercentageIsSet() const
{
    return avgExecutionTimePercentageIsSet_;
}

void TopObjectOverview::unsetavgExecutionTimePercentage()
{
    avgExecutionTimePercentageIsSet_ = false;
}

double TopObjectOverview::getAvgLogicalIo() const
{
    return avgLogicalIo_;
}

void TopObjectOverview::setAvgLogicalIo(double value)
{
    avgLogicalIo_ = value;
    avgLogicalIoIsSet_ = true;
}

bool TopObjectOverview::avgLogicalIoIsSet() const
{
    return avgLogicalIoIsSet_;
}

void TopObjectOverview::unsetavgLogicalIo()
{
    avgLogicalIoIsSet_ = false;
}

double TopObjectOverview::getAvgLogicalIoPercentage() const
{
    return avgLogicalIoPercentage_;
}

void TopObjectOverview::setAvgLogicalIoPercentage(double value)
{
    avgLogicalIoPercentage_ = value;
    avgLogicalIoPercentageIsSet_ = true;
}

bool TopObjectOverview::avgLogicalIoPercentageIsSet() const
{
    return avgLogicalIoPercentageIsSet_;
}

void TopObjectOverview::unsetavgLogicalIoPercentage()
{
    avgLogicalIoPercentageIsSet_ = false;
}

double TopObjectOverview::getAvgLogicalReads() const
{
    return avgLogicalReads_;
}

void TopObjectOverview::setAvgLogicalReads(double value)
{
    avgLogicalReads_ = value;
    avgLogicalReadsIsSet_ = true;
}

bool TopObjectOverview::avgLogicalReadsIsSet() const
{
    return avgLogicalReadsIsSet_;
}

void TopObjectOverview::unsetavgLogicalReads()
{
    avgLogicalReadsIsSet_ = false;
}

double TopObjectOverview::getAvgLogicalReadsPercentage() const
{
    return avgLogicalReadsPercentage_;
}

void TopObjectOverview::setAvgLogicalReadsPercentage(double value)
{
    avgLogicalReadsPercentage_ = value;
    avgLogicalReadsPercentageIsSet_ = true;
}

bool TopObjectOverview::avgLogicalReadsPercentageIsSet() const
{
    return avgLogicalReadsPercentageIsSet_;
}

void TopObjectOverview::unsetavgLogicalReadsPercentage()
{
    avgLogicalReadsPercentageIsSet_ = false;
}

double TopObjectOverview::getAvgLogicalWrites() const
{
    return avgLogicalWrites_;
}

void TopObjectOverview::setAvgLogicalWrites(double value)
{
    avgLogicalWrites_ = value;
    avgLogicalWritesIsSet_ = true;
}

bool TopObjectOverview::avgLogicalWritesIsSet() const
{
    return avgLogicalWritesIsSet_;
}

void TopObjectOverview::unsetavgLogicalWrites()
{
    avgLogicalWritesIsSet_ = false;
}

double TopObjectOverview::getAvgLogicalWritesPercentage() const
{
    return avgLogicalWritesPercentage_;
}

void TopObjectOverview::setAvgLogicalWritesPercentage(double value)
{
    avgLogicalWritesPercentage_ = value;
    avgLogicalWritesPercentageIsSet_ = true;
}

bool TopObjectOverview::avgLogicalWritesPercentageIsSet() const
{
    return avgLogicalWritesPercentageIsSet_;
}

void TopObjectOverview::unsetavgLogicalWritesPercentage()
{
    avgLogicalWritesPercentageIsSet_ = false;
}

double TopObjectOverview::getAvgPhysicalReads() const
{
    return avgPhysicalReads_;
}

void TopObjectOverview::setAvgPhysicalReads(double value)
{
    avgPhysicalReads_ = value;
    avgPhysicalReadsIsSet_ = true;
}

bool TopObjectOverview::avgPhysicalReadsIsSet() const
{
    return avgPhysicalReadsIsSet_;
}

void TopObjectOverview::unsetavgPhysicalReads()
{
    avgPhysicalReadsIsSet_ = false;
}

double TopObjectOverview::getAvgPhysicalReadsPercentage() const
{
    return avgPhysicalReadsPercentage_;
}

void TopObjectOverview::setAvgPhysicalReadsPercentage(double value)
{
    avgPhysicalReadsPercentage_ = value;
    avgPhysicalReadsPercentageIsSet_ = true;
}

bool TopObjectOverview::avgPhysicalReadsPercentageIsSet() const
{
    return avgPhysicalReadsPercentageIsSet_;
}

void TopObjectOverview::unsetavgPhysicalReadsPercentage()
{
    avgPhysicalReadsPercentageIsSet_ = false;
}

double TopObjectOverview::getAvgRows() const
{
    return avgRows_;
}

void TopObjectOverview::setAvgRows(double value)
{
    avgRows_ = value;
    avgRowsIsSet_ = true;
}

bool TopObjectOverview::avgRowsIsSet() const
{
    return avgRowsIsSet_;
}

void TopObjectOverview::unsetavgRows()
{
    avgRowsIsSet_ = false;
}

double TopObjectOverview::getAvgRowsPercentage() const
{
    return avgRowsPercentage_;
}

void TopObjectOverview::setAvgRowsPercentage(double value)
{
    avgRowsPercentage_ = value;
    avgRowsPercentageIsSet_ = true;
}

bool TopObjectOverview::avgRowsPercentageIsSet() const
{
    return avgRowsPercentageIsSet_;
}

void TopObjectOverview::unsetavgRowsPercentage()
{
    avgRowsPercentageIsSet_ = false;
}

std::string TopObjectOverview::getDatabaseName() const
{
    return databaseName_;
}

void TopObjectOverview::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool TopObjectOverview::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void TopObjectOverview::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string TopObjectOverview::getObjectId() const
{
    return objectId_;
}

void TopObjectOverview::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool TopObjectOverview::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void TopObjectOverview::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string TopObjectOverview::getObjectName() const
{
    return objectName_;
}

void TopObjectOverview::setObjectName(const std::string& value)
{
    objectName_ = value;
    objectNameIsSet_ = true;
}

bool TopObjectOverview::objectNameIsSet() const
{
    return objectNameIsSet_;
}

void TopObjectOverview::unsetobjectName()
{
    objectNameIsSet_ = false;
}

std::string TopObjectOverview::getRowId() const
{
    return rowId_;
}

void TopObjectOverview::setRowId(const std::string& value)
{
    rowId_ = value;
    rowIdIsSet_ = true;
}

bool TopObjectOverview::rowIdIsSet() const
{
    return rowIdIsSet_;
}

void TopObjectOverview::unsetrowId()
{
    rowIdIsSet_ = false;
}

std::string TopObjectOverview::getObjectType() const
{
    return objectType_;
}

void TopObjectOverview::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool TopObjectOverview::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void TopObjectOverview::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string TopObjectOverview::getSchemaName() const
{
    return schemaName_;
}

void TopObjectOverview::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool TopObjectOverview::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void TopObjectOverview::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

double TopObjectOverview::getTotalCpuTime() const
{
    return totalCpuTime_;
}

void TopObjectOverview::setTotalCpuTime(double value)
{
    totalCpuTime_ = value;
    totalCpuTimeIsSet_ = true;
}

bool TopObjectOverview::totalCpuTimeIsSet() const
{
    return totalCpuTimeIsSet_;
}

void TopObjectOverview::unsettotalCpuTime()
{
    totalCpuTimeIsSet_ = false;
}

double TopObjectOverview::getTotalCpuTimePercentage() const
{
    return totalCpuTimePercentage_;
}

void TopObjectOverview::setTotalCpuTimePercentage(double value)
{
    totalCpuTimePercentage_ = value;
    totalCpuTimePercentageIsSet_ = true;
}

bool TopObjectOverview::totalCpuTimePercentageIsSet() const
{
    return totalCpuTimePercentageIsSet_;
}

void TopObjectOverview::unsettotalCpuTimePercentage()
{
    totalCpuTimePercentageIsSet_ = false;
}

double TopObjectOverview::getTotalExecutionTime() const
{
    return totalExecutionTime_;
}

void TopObjectOverview::setTotalExecutionTime(double value)
{
    totalExecutionTime_ = value;
    totalExecutionTimeIsSet_ = true;
}

bool TopObjectOverview::totalExecutionTimeIsSet() const
{
    return totalExecutionTimeIsSet_;
}

void TopObjectOverview::unsettotalExecutionTime()
{
    totalExecutionTimeIsSet_ = false;
}

double TopObjectOverview::getTotalExecutionTimePercentage() const
{
    return totalExecutionTimePercentage_;
}

void TopObjectOverview::setTotalExecutionTimePercentage(double value)
{
    totalExecutionTimePercentage_ = value;
    totalExecutionTimePercentageIsSet_ = true;
}

bool TopObjectOverview::totalExecutionTimePercentageIsSet() const
{
    return totalExecutionTimePercentageIsSet_;
}

void TopObjectOverview::unsettotalExecutionTimePercentage()
{
    totalExecutionTimePercentageIsSet_ = false;
}

double TopObjectOverview::getTotalExecutionCount() const
{
    return totalExecutionCount_;
}

void TopObjectOverview::setTotalExecutionCount(double value)
{
    totalExecutionCount_ = value;
    totalExecutionCountIsSet_ = true;
}

bool TopObjectOverview::totalExecutionCountIsSet() const
{
    return totalExecutionCountIsSet_;
}

void TopObjectOverview::unsettotalExecutionCount()
{
    totalExecutionCountIsSet_ = false;
}

double TopObjectOverview::getTotalLogicalIo() const
{
    return totalLogicalIo_;
}

void TopObjectOverview::setTotalLogicalIo(double value)
{
    totalLogicalIo_ = value;
    totalLogicalIoIsSet_ = true;
}

bool TopObjectOverview::totalLogicalIoIsSet() const
{
    return totalLogicalIoIsSet_;
}

void TopObjectOverview::unsettotalLogicalIo()
{
    totalLogicalIoIsSet_ = false;
}

double TopObjectOverview::getTotalLogicalIoPercentage() const
{
    return totalLogicalIoPercentage_;
}

void TopObjectOverview::setTotalLogicalIoPercentage(double value)
{
    totalLogicalIoPercentage_ = value;
    totalLogicalIoPercentageIsSet_ = true;
}

bool TopObjectOverview::totalLogicalIoPercentageIsSet() const
{
    return totalLogicalIoPercentageIsSet_;
}

void TopObjectOverview::unsettotalLogicalIoPercentage()
{
    totalLogicalIoPercentageIsSet_ = false;
}

double TopObjectOverview::getTotalLogicalReads() const
{
    return totalLogicalReads_;
}

void TopObjectOverview::setTotalLogicalReads(double value)
{
    totalLogicalReads_ = value;
    totalLogicalReadsIsSet_ = true;
}

bool TopObjectOverview::totalLogicalReadsIsSet() const
{
    return totalLogicalReadsIsSet_;
}

void TopObjectOverview::unsettotalLogicalReads()
{
    totalLogicalReadsIsSet_ = false;
}

double TopObjectOverview::getTotalLogicalReadsPercentage() const
{
    return totalLogicalReadsPercentage_;
}

void TopObjectOverview::setTotalLogicalReadsPercentage(double value)
{
    totalLogicalReadsPercentage_ = value;
    totalLogicalReadsPercentageIsSet_ = true;
}

bool TopObjectOverview::totalLogicalReadsPercentageIsSet() const
{
    return totalLogicalReadsPercentageIsSet_;
}

void TopObjectOverview::unsettotalLogicalReadsPercentage()
{
    totalLogicalReadsPercentageIsSet_ = false;
}

double TopObjectOverview::getTotalLogicalWrites() const
{
    return totalLogicalWrites_;
}

void TopObjectOverview::setTotalLogicalWrites(double value)
{
    totalLogicalWrites_ = value;
    totalLogicalWritesIsSet_ = true;
}

bool TopObjectOverview::totalLogicalWritesIsSet() const
{
    return totalLogicalWritesIsSet_;
}

void TopObjectOverview::unsettotalLogicalWrites()
{
    totalLogicalWritesIsSet_ = false;
}

double TopObjectOverview::getTotalLogicalWritesPercentage() const
{
    return totalLogicalWritesPercentage_;
}

void TopObjectOverview::setTotalLogicalWritesPercentage(double value)
{
    totalLogicalWritesPercentage_ = value;
    totalLogicalWritesPercentageIsSet_ = true;
}

bool TopObjectOverview::totalLogicalWritesPercentageIsSet() const
{
    return totalLogicalWritesPercentageIsSet_;
}

void TopObjectOverview::unsettotalLogicalWritesPercentage()
{
    totalLogicalWritesPercentageIsSet_ = false;
}

double TopObjectOverview::getTotalPhysicalReads() const
{
    return totalPhysicalReads_;
}

void TopObjectOverview::setTotalPhysicalReads(double value)
{
    totalPhysicalReads_ = value;
    totalPhysicalReadsIsSet_ = true;
}

bool TopObjectOverview::totalPhysicalReadsIsSet() const
{
    return totalPhysicalReadsIsSet_;
}

void TopObjectOverview::unsettotalPhysicalReads()
{
    totalPhysicalReadsIsSet_ = false;
}

double TopObjectOverview::getTotalPhysicalReadsPercentage() const
{
    return totalPhysicalReadsPercentage_;
}

void TopObjectOverview::setTotalPhysicalReadsPercentage(double value)
{
    totalPhysicalReadsPercentage_ = value;
    totalPhysicalReadsPercentageIsSet_ = true;
}

bool TopObjectOverview::totalPhysicalReadsPercentageIsSet() const
{
    return totalPhysicalReadsPercentageIsSet_;
}

void TopObjectOverview::unsettotalPhysicalReadsPercentage()
{
    totalPhysicalReadsPercentageIsSet_ = false;
}

double TopObjectOverview::getTotalRows() const
{
    return totalRows_;
}

void TopObjectOverview::setTotalRows(double value)
{
    totalRows_ = value;
    totalRowsIsSet_ = true;
}

bool TopObjectOverview::totalRowsIsSet() const
{
    return totalRowsIsSet_;
}

void TopObjectOverview::unsettotalRows()
{
    totalRowsIsSet_ = false;
}

double TopObjectOverview::getTotalRowsPercentage() const
{
    return totalRowsPercentage_;
}

void TopObjectOverview::setTotalRowsPercentage(double value)
{
    totalRowsPercentage_ = value;
    totalRowsPercentageIsSet_ = true;
}

bool TopObjectOverview::totalRowsPercentageIsSet() const
{
    return totalRowsPercentageIsSet_;
}

void TopObjectOverview::unsettotalRowsPercentage()
{
    totalRowsPercentageIsSet_ = false;
}

}
}
}
}
}


