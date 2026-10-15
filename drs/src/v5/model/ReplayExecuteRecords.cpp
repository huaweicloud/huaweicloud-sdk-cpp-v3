

#include "huaweicloud/drs/v5/model/ReplayExecuteRecords.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayExecuteRecords::ReplayExecuteRecords()
{
    executeTime_ = 0L;
    executeTimeIsSet_ = false;
    finishedSql_ = 0L;
    finishedSqlIsSet_ = false;
    abnormalSql_ = 0L;
    abnormalSqlIsSet_ = false;
    slowSql_ = 0L;
    slowSqlIsSet_ = false;
    totalSql_ = 0L;
    totalSqlIsSet_ = false;
}

ReplayExecuteRecords::~ReplayExecuteRecords() = default;

void ReplayExecuteRecords::validate()
{
}

web::json::value ReplayExecuteRecords::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executeTimeIsSet_) {
        val[utility::conversions::to_string_t("execute_time")] = ModelBase::toJson(executeTime_);
    }
    if(finishedSqlIsSet_) {
        val[utility::conversions::to_string_t("finished_sql")] = ModelBase::toJson(finishedSql_);
    }
    if(abnormalSqlIsSet_) {
        val[utility::conversions::to_string_t("abnormal_sql")] = ModelBase::toJson(abnormalSql_);
    }
    if(slowSqlIsSet_) {
        val[utility::conversions::to_string_t("slow_sql")] = ModelBase::toJson(slowSql_);
    }
    if(totalSqlIsSet_) {
        val[utility::conversions::to_string_t("total_sql")] = ModelBase::toJson(totalSql_);
    }

    return val;
}
bool ReplayExecuteRecords::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execute_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_sql"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_sql"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_sql"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSql(refVal);
        }
    }
    return ok;
}


int64_t ReplayExecuteRecords::getExecuteTime() const
{
    return executeTime_;
}

void ReplayExecuteRecords::setExecuteTime(int64_t value)
{
    executeTime_ = value;
    executeTimeIsSet_ = true;
}

bool ReplayExecuteRecords::executeTimeIsSet() const
{
    return executeTimeIsSet_;
}

void ReplayExecuteRecords::unsetexecuteTime()
{
    executeTimeIsSet_ = false;
}

int64_t ReplayExecuteRecords::getFinishedSql() const
{
    return finishedSql_;
}

void ReplayExecuteRecords::setFinishedSql(int64_t value)
{
    finishedSql_ = value;
    finishedSqlIsSet_ = true;
}

bool ReplayExecuteRecords::finishedSqlIsSet() const
{
    return finishedSqlIsSet_;
}

void ReplayExecuteRecords::unsetfinishedSql()
{
    finishedSqlIsSet_ = false;
}

int64_t ReplayExecuteRecords::getAbnormalSql() const
{
    return abnormalSql_;
}

void ReplayExecuteRecords::setAbnormalSql(int64_t value)
{
    abnormalSql_ = value;
    abnormalSqlIsSet_ = true;
}

bool ReplayExecuteRecords::abnormalSqlIsSet() const
{
    return abnormalSqlIsSet_;
}

void ReplayExecuteRecords::unsetabnormalSql()
{
    abnormalSqlIsSet_ = false;
}

int64_t ReplayExecuteRecords::getSlowSql() const
{
    return slowSql_;
}

void ReplayExecuteRecords::setSlowSql(int64_t value)
{
    slowSql_ = value;
    slowSqlIsSet_ = true;
}

bool ReplayExecuteRecords::slowSqlIsSet() const
{
    return slowSqlIsSet_;
}

void ReplayExecuteRecords::unsetslowSql()
{
    slowSqlIsSet_ = false;
}

int64_t ReplayExecuteRecords::getTotalSql() const
{
    return totalSql_;
}

void ReplayExecuteRecords::setTotalSql(int64_t value)
{
    totalSql_ = value;
    totalSqlIsSet_ = true;
}

bool ReplayExecuteRecords::totalSqlIsSet() const
{
    return totalSqlIsSet_;
}

void ReplayExecuteRecords::unsettotalSql()
{
    totalSqlIsSet_ = false;
}

}
}
}
}
}


