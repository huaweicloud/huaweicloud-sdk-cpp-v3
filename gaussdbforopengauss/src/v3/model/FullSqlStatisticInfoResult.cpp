

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
    startTimeStamp_ = "";
    startTimeStampIsSet_ = false;
    endTimeStamp_ = "";
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_stamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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

std::string FullSqlStatisticInfoResult::getStartTimeStamp() const
{
    return startTimeStamp_;
}

void FullSqlStatisticInfoResult::setStartTimeStamp(const std::string& value)
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

std::string FullSqlStatisticInfoResult::getEndTimeStamp() const
{
    return endTimeStamp_;
}

void FullSqlStatisticInfoResult::setEndTimeStamp(const std::string& value)
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


