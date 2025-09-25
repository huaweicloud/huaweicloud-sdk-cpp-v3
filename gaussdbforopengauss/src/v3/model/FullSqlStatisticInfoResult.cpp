

#include "huaweicloud/gaussdbforopengauss/v3/model/FullSqlStatisticInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FullSqlStatisticInfoResult::FullSqlStatisticInfoResult()
{
    template_ = "";
    templateIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlCount_ = 0L;
    sqlCountIsSet_ = false;
    totalSqlTime_ = 0L;
    totalSqlTimeIsSet_ = false;
    avgSqlTime_ = 0L;
    avgSqlTimeIsSet_ = false;
    totalDbTime_ = 0L;
    totalDbTimeIsSet_ = false;
    totalCpuTime_ = 0L;
    totalCpuTimeIsSet_ = false;
    avgParseTime_ = 0L;
    avgParseTimeIsSet_ = false;
    avgPlanTime_ = 0L;
    avgPlanTimeIsSet_ = false;
    totalDataIoTime_ = 0L;
    totalDataIoTimeIsSet_ = false;
    avgNReturnedRows_ = 0L;
    avgNReturnedRowsIsSet_ = false;
    avgNTuplesFetched_ = 0L;
    avgNTuplesFetchedIsSet_ = false;
    avgDbTime_ = 0L;
    avgDbTimeIsSet_ = false;
    avgCpuTime_ = 0L;
    avgCpuTimeIsSet_ = false;
    avgDataIoTime_ = 0L;
    avgDataIoTimeIsSet_ = false;
    avgExecutionTime_ = 0L;
    avgExecutionTimeIsSet_ = false;
    avgNBlocksHit_ = 0L;
    avgNBlocksHitIsSet_ = false;
    startTimeStamp_ = 0L;
    startTimeStampIsSet_ = false;
    endTimeStamp_ = 0L;
    endTimeStampIsSet_ = false;
}

FullSqlStatisticInfoResult::~FullSqlStatisticInfoResult() = default;

void FullSqlStatisticInfoResult::validate()
{
}

web::json::value FullSqlStatisticInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlCountIsSet_) {
        val[utility::conversions::to_string_t("sql_count")] = ModelBase::toJson(sqlCount_);
    }
    if(totalSqlTimeIsSet_) {
        val[utility::conversions::to_string_t("total_sql_time")] = ModelBase::toJson(totalSqlTime_);
    }
    if(avgSqlTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_sql_time")] = ModelBase::toJson(avgSqlTime_);
    }
    if(totalDbTimeIsSet_) {
        val[utility::conversions::to_string_t("total_db_time")] = ModelBase::toJson(totalDbTime_);
    }
    if(totalCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("total_cpu_time")] = ModelBase::toJson(totalCpuTime_);
    }
    if(avgParseTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_parse_time")] = ModelBase::toJson(avgParseTime_);
    }
    if(avgPlanTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_plan_time")] = ModelBase::toJson(avgPlanTime_);
    }
    if(totalDataIoTimeIsSet_) {
        val[utility::conversions::to_string_t("total_data_io_time")] = ModelBase::toJson(totalDataIoTime_);
    }
    if(avgNReturnedRowsIsSet_) {
        val[utility::conversions::to_string_t("avg_n_returned_rows")] = ModelBase::toJson(avgNReturnedRows_);
    }
    if(avgNTuplesFetchedIsSet_) {
        val[utility::conversions::to_string_t("avg_n_tuples_fetched")] = ModelBase::toJson(avgNTuplesFetched_);
    }
    if(avgDbTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_db_time")] = ModelBase::toJson(avgDbTime_);
    }
    if(avgCpuTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time")] = ModelBase::toJson(avgCpuTime_);
    }
    if(avgDataIoTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_data_io_time")] = ModelBase::toJson(avgDataIoTime_);
    }
    if(avgExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_execution_time")] = ModelBase::toJson(avgExecutionTime_);
    }
    if(avgNBlocksHitIsSet_) {
        val[utility::conversions::to_string_t("avg_n_blocks_hit")] = ModelBase::toJson(avgNBlocksHit_);
    }
    if(startTimeStampIsSet_) {
        val[utility::conversions::to_string_t("start_time_stamp")] = ModelBase::toJson(startTimeStamp_);
    }
    if(endTimeStampIsSet_) {
        val[utility::conversions::to_string_t("end_time_stamp")] = ModelBase::toJson(endTimeStamp_);
    }

    return val;
}
bool FullSqlStatisticInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_sql_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_sql_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSqlTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_sql_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_sql_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgSqlTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_db_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_db_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDbTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cpu_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_parse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_parse_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgParseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_plan_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_plan_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgPlanTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_data_io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_data_io_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDataIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_n_returned_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_n_returned_rows"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgNReturnedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_n_tuples_fetched"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_n_tuples_fetched"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgNTuplesFetched(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_db_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_db_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgDbTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_cpu_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_data_io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_data_io_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgDataIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_execution_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_n_blocks_hit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_n_blocks_hit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgNBlocksHit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeStamp(refVal);
        }
    }
    return ok;
}


std::string FullSqlStatisticInfoResult::getTemplate() const
{
    return template_;
}

void FullSqlStatisticInfoResult::setTemplate(const std::string& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool FullSqlStatisticInfoResult::templateIsSet() const
{
    return templateIsSet_;
}

void FullSqlStatisticInfoResult::unsettemplate()
{
    templateIsSet_ = false;
}

std::string FullSqlStatisticInfoResult::getSqlId() const
{
    return sqlId_;
}

void FullSqlStatisticInfoResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool FullSqlStatisticInfoResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void FullSqlStatisticInfoResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getSqlCount() const
{
    return sqlCount_;
}

void FullSqlStatisticInfoResult::setSqlCount(int64_t value)
{
    sqlCount_ = value;
    sqlCountIsSet_ = true;
}

bool FullSqlStatisticInfoResult::sqlCountIsSet() const
{
    return sqlCountIsSet_;
}

void FullSqlStatisticInfoResult::unsetsqlCount()
{
    sqlCountIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getTotalSqlTime() const
{
    return totalSqlTime_;
}

void FullSqlStatisticInfoResult::setTotalSqlTime(int64_t value)
{
    totalSqlTime_ = value;
    totalSqlTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::totalSqlTimeIsSet() const
{
    return totalSqlTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsettotalSqlTime()
{
    totalSqlTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgSqlTime() const
{
    return avgSqlTime_;
}

void FullSqlStatisticInfoResult::setAvgSqlTime(int64_t value)
{
    avgSqlTime_ = value;
    avgSqlTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgSqlTimeIsSet() const
{
    return avgSqlTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgSqlTime()
{
    avgSqlTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getTotalDbTime() const
{
    return totalDbTime_;
}

void FullSqlStatisticInfoResult::setTotalDbTime(int64_t value)
{
    totalDbTime_ = value;
    totalDbTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::totalDbTimeIsSet() const
{
    return totalDbTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsettotalDbTime()
{
    totalDbTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getTotalCpuTime() const
{
    return totalCpuTime_;
}

void FullSqlStatisticInfoResult::setTotalCpuTime(int64_t value)
{
    totalCpuTime_ = value;
    totalCpuTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::totalCpuTimeIsSet() const
{
    return totalCpuTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsettotalCpuTime()
{
    totalCpuTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgParseTime() const
{
    return avgParseTime_;
}

void FullSqlStatisticInfoResult::setAvgParseTime(int64_t value)
{
    avgParseTime_ = value;
    avgParseTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgParseTimeIsSet() const
{
    return avgParseTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgParseTime()
{
    avgParseTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgPlanTime() const
{
    return avgPlanTime_;
}

void FullSqlStatisticInfoResult::setAvgPlanTime(int64_t value)
{
    avgPlanTime_ = value;
    avgPlanTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgPlanTimeIsSet() const
{
    return avgPlanTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgPlanTime()
{
    avgPlanTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getTotalDataIoTime() const
{
    return totalDataIoTime_;
}

void FullSqlStatisticInfoResult::setTotalDataIoTime(int64_t value)
{
    totalDataIoTime_ = value;
    totalDataIoTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::totalDataIoTimeIsSet() const
{
    return totalDataIoTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsettotalDataIoTime()
{
    totalDataIoTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgNReturnedRows() const
{
    return avgNReturnedRows_;
}

void FullSqlStatisticInfoResult::setAvgNReturnedRows(int64_t value)
{
    avgNReturnedRows_ = value;
    avgNReturnedRowsIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgNReturnedRowsIsSet() const
{
    return avgNReturnedRowsIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgNReturnedRows()
{
    avgNReturnedRowsIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgNTuplesFetched() const
{
    return avgNTuplesFetched_;
}

void FullSqlStatisticInfoResult::setAvgNTuplesFetched(int64_t value)
{
    avgNTuplesFetched_ = value;
    avgNTuplesFetchedIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgNTuplesFetchedIsSet() const
{
    return avgNTuplesFetchedIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgNTuplesFetched()
{
    avgNTuplesFetchedIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgDbTime() const
{
    return avgDbTime_;
}

void FullSqlStatisticInfoResult::setAvgDbTime(int64_t value)
{
    avgDbTime_ = value;
    avgDbTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgDbTimeIsSet() const
{
    return avgDbTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgDbTime()
{
    avgDbTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgCpuTime() const
{
    return avgCpuTime_;
}

void FullSqlStatisticInfoResult::setAvgCpuTime(int64_t value)
{
    avgCpuTime_ = value;
    avgCpuTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgCpuTimeIsSet() const
{
    return avgCpuTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgCpuTime()
{
    avgCpuTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgDataIoTime() const
{
    return avgDataIoTime_;
}

void FullSqlStatisticInfoResult::setAvgDataIoTime(int64_t value)
{
    avgDataIoTime_ = value;
    avgDataIoTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgDataIoTimeIsSet() const
{
    return avgDataIoTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgDataIoTime()
{
    avgDataIoTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgExecutionTime() const
{
    return avgExecutionTime_;
}

void FullSqlStatisticInfoResult::setAvgExecutionTime(int64_t value)
{
    avgExecutionTime_ = value;
    avgExecutionTimeIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgExecutionTimeIsSet() const
{
    return avgExecutionTimeIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgExecutionTime()
{
    avgExecutionTimeIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getAvgNBlocksHit() const
{
    return avgNBlocksHit_;
}

void FullSqlStatisticInfoResult::setAvgNBlocksHit(int64_t value)
{
    avgNBlocksHit_ = value;
    avgNBlocksHitIsSet_ = true;
}

bool FullSqlStatisticInfoResult::avgNBlocksHitIsSet() const
{
    return avgNBlocksHitIsSet_;
}

void FullSqlStatisticInfoResult::unsetavgNBlocksHit()
{
    avgNBlocksHitIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getStartTimeStamp() const
{
    return startTimeStamp_;
}

void FullSqlStatisticInfoResult::setStartTimeStamp(int64_t value)
{
    startTimeStamp_ = value;
    startTimeStampIsSet_ = true;
}

bool FullSqlStatisticInfoResult::startTimeStampIsSet() const
{
    return startTimeStampIsSet_;
}

void FullSqlStatisticInfoResult::unsetstartTimeStamp()
{
    startTimeStampIsSet_ = false;
}

int64_t FullSqlStatisticInfoResult::getEndTimeStamp() const
{
    return endTimeStamp_;
}

void FullSqlStatisticInfoResult::setEndTimeStamp(int64_t value)
{
    endTimeStamp_ = value;
    endTimeStampIsSet_ = true;
}

bool FullSqlStatisticInfoResult::endTimeStampIsSet() const
{
    return endTimeStampIsSet_;
}

void FullSqlStatisticInfoResult::unsetendTimeStamp()
{
    endTimeStampIsSet_ = false;
}

}
}
}
}
}


