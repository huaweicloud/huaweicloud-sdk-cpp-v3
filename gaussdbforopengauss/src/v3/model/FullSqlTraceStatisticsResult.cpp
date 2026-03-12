

#include "huaweicloud/gaussdbforopengauss/v3/model/FullSqlTraceStatisticsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FullSqlTraceStatisticsResult::FullSqlTraceStatisticsResult()
{
    hitRate_ = 0.0;
    hitRateIsSet_ = false;
    dbTime_ = 0;
    dbTimeIsSet_ = false;
    cpuTime_ = 0;
    cpuTimeIsSet_ = false;
    ioTime_ = 0;
    ioTimeIsSet_ = false;
    executionTime_ = 0;
    executionTimeIsSet_ = false;
    scanRows_ = 0;
    scanRowsIsSet_ = false;
    updateRows_ = 0;
    updateRowsIsSet_ = false;
    insertRows_ = 0;
    insertRowsIsSet_ = false;
    deleteRows_ = 0;
    deleteRowsIsSet_ = false;
}

FullSqlTraceStatisticsResult::~FullSqlTraceStatisticsResult() = default;

void FullSqlTraceStatisticsResult::validate()
{
}

web::json::value FullSqlTraceStatisticsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hitRateIsSet_) {
        val[utility::conversions::to_string_t("hit_rate")] = ModelBase::toJson(hitRate_);
    }
    if(dbTimeIsSet_) {
        val[utility::conversions::to_string_t("db_time")] = ModelBase::toJson(dbTime_);
    }
    if(cpuTimeIsSet_) {
        val[utility::conversions::to_string_t("cpu_time")] = ModelBase::toJson(cpuTime_);
    }
    if(ioTimeIsSet_) {
        val[utility::conversions::to_string_t("io_time")] = ModelBase::toJson(ioTime_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(scanRowsIsSet_) {
        val[utility::conversions::to_string_t("scan_rows")] = ModelBase::toJson(scanRows_);
    }
    if(updateRowsIsSet_) {
        val[utility::conversions::to_string_t("update_rows")] = ModelBase::toJson(updateRows_);
    }
    if(insertRowsIsSet_) {
        val[utility::conversions::to_string_t("insert_rows")] = ModelBase::toJson(insertRows_);
    }
    if(deleteRowsIsSet_) {
        val[utility::conversions::to_string_t("delete_rows")] = ModelBase::toJson(deleteRows_);
    }

    return val;
}
bool FullSqlTraceStatisticsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scan_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scan_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScanRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteRows(refVal);
        }
    }
    return ok;
}


double FullSqlTraceStatisticsResult::getHitRate() const
{
    return hitRate_;
}

void FullSqlTraceStatisticsResult::setHitRate(double value)
{
    hitRate_ = value;
    hitRateIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::hitRateIsSet() const
{
    return hitRateIsSet_;
}

void FullSqlTraceStatisticsResult::unsethitRate()
{
    hitRateIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getDbTime() const
{
    return dbTime_;
}

void FullSqlTraceStatisticsResult::setDbTime(int32_t value)
{
    dbTime_ = value;
    dbTimeIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::dbTimeIsSet() const
{
    return dbTimeIsSet_;
}

void FullSqlTraceStatisticsResult::unsetdbTime()
{
    dbTimeIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getCpuTime() const
{
    return cpuTime_;
}

void FullSqlTraceStatisticsResult::setCpuTime(int32_t value)
{
    cpuTime_ = value;
    cpuTimeIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::cpuTimeIsSet() const
{
    return cpuTimeIsSet_;
}

void FullSqlTraceStatisticsResult::unsetcpuTime()
{
    cpuTimeIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getIoTime() const
{
    return ioTime_;
}

void FullSqlTraceStatisticsResult::setIoTime(int32_t value)
{
    ioTime_ = value;
    ioTimeIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::ioTimeIsSet() const
{
    return ioTimeIsSet_;
}

void FullSqlTraceStatisticsResult::unsetioTime()
{
    ioTimeIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getExecutionTime() const
{
    return executionTime_;
}

void FullSqlTraceStatisticsResult::setExecutionTime(int32_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void FullSqlTraceStatisticsResult::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getScanRows() const
{
    return scanRows_;
}

void FullSqlTraceStatisticsResult::setScanRows(int32_t value)
{
    scanRows_ = value;
    scanRowsIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::scanRowsIsSet() const
{
    return scanRowsIsSet_;
}

void FullSqlTraceStatisticsResult::unsetscanRows()
{
    scanRowsIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getUpdateRows() const
{
    return updateRows_;
}

void FullSqlTraceStatisticsResult::setUpdateRows(int32_t value)
{
    updateRows_ = value;
    updateRowsIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::updateRowsIsSet() const
{
    return updateRowsIsSet_;
}

void FullSqlTraceStatisticsResult::unsetupdateRows()
{
    updateRowsIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getInsertRows() const
{
    return insertRows_;
}

void FullSqlTraceStatisticsResult::setInsertRows(int32_t value)
{
    insertRows_ = value;
    insertRowsIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::insertRowsIsSet() const
{
    return insertRowsIsSet_;
}

void FullSqlTraceStatisticsResult::unsetinsertRows()
{
    insertRowsIsSet_ = false;
}

int32_t FullSqlTraceStatisticsResult::getDeleteRows() const
{
    return deleteRows_;
}

void FullSqlTraceStatisticsResult::setDeleteRows(int32_t value)
{
    deleteRows_ = value;
    deleteRowsIsSet_ = true;
}

bool FullSqlTraceStatisticsResult::deleteRowsIsSet() const
{
    return deleteRowsIsSet_;
}

void FullSqlTraceStatisticsResult::unsetdeleteRows()
{
    deleteRowsIsSet_ = false;
}

}
}
}
}
}


