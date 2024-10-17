

#include "huaweicloud/dbss/v1/model/AuditSummaryResponse_data_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditSummaryResponse_data_list::AuditSummaryResponse_data_list()
{
    id_ = 0L;
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    instanceId_ = 0L;
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    auditDuration_ = 0L;
    auditDurationIsSet_ = false;
    totalSql_ = 0L;
    totalSqlIsSet_ = false;
    totalRisk_ = 0L;
    totalRiskIsSet_ = false;
    todaySql_ = 0L;
    todaySqlIsSet_ = false;
    todayRisk_ = 0L;
    todayRiskIsSet_ = false;
    todaySession_ = 0L;
    todaySessionIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    reserve1_ = "";
    reserve1IsSet_ = false;
    reserve2_ = "";
    reserve2IsSet_ = false;
}

AuditSummaryResponse_data_list::~AuditSummaryResponse_data_list() = default;

void AuditSummaryResponse_data_list::validate()
{
}

web::json::value AuditSummaryResponse_data_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(auditDurationIsSet_) {
        val[utility::conversions::to_string_t("audit_duration")] = ModelBase::toJson(auditDuration_);
    }
    if(totalSqlIsSet_) {
        val[utility::conversions::to_string_t("total_sql")] = ModelBase::toJson(totalSql_);
    }
    if(totalRiskIsSet_) {
        val[utility::conversions::to_string_t("total_risk")] = ModelBase::toJson(totalRisk_);
    }
    if(todaySqlIsSet_) {
        val[utility::conversions::to_string_t("today_sql")] = ModelBase::toJson(todaySql_);
    }
    if(todayRiskIsSet_) {
        val[utility::conversions::to_string_t("today_risk")] = ModelBase::toJson(todayRisk_);
    }
    if(todaySessionIsSet_) {
        val[utility::conversions::to_string_t("today_session")] = ModelBase::toJson(todaySession_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(reserve1IsSet_) {
        val[utility::conversions::to_string_t("reserve1")] = ModelBase::toJson(reserve1_);
    }
    if(reserve2IsSet_) {
        val[utility::conversions::to_string_t("reserve2")] = ModelBase::toJson(reserve2_);
    }

    return val;
}
bool AuditSummaryResponse_data_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_risk"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("today_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("today_sql"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTodaySql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("today_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("today_risk"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTodayRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("today_session"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("today_session"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTodaySession(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserve1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserve2(refVal);
        }
    }
    return ok;
}


int64_t AuditSummaryResponse_data_list::getId() const
{
    return id_;
}

void AuditSummaryResponse_data_list::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuditSummaryResponse_data_list::idIsSet() const
{
    return idIsSet_;
}

void AuditSummaryResponse_data_list::unsetid()
{
    idIsSet_ = false;
}

std::string AuditSummaryResponse_data_list::getStatus() const
{
    return status_;
}

void AuditSummaryResponse_data_list::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AuditSummaryResponse_data_list::statusIsSet() const
{
    return statusIsSet_;
}

void AuditSummaryResponse_data_list::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AuditSummaryResponse_data_list::getProjectId() const
{
    return projectId_;
}

void AuditSummaryResponse_data_list::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AuditSummaryResponse_data_list::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AuditSummaryResponse_data_list::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getInstanceId() const
{
    return instanceId_;
}

void AuditSummaryResponse_data_list::setInstanceId(int64_t value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AuditSummaryResponse_data_list::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AuditSummaryResponse_data_list::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AuditSummaryResponse_data_list::getInstanceName() const
{
    return instanceName_;
}

void AuditSummaryResponse_data_list::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AuditSummaryResponse_data_list::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AuditSummaryResponse_data_list::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getAuditDuration() const
{
    return auditDuration_;
}

void AuditSummaryResponse_data_list::setAuditDuration(int64_t value)
{
    auditDuration_ = value;
    auditDurationIsSet_ = true;
}

bool AuditSummaryResponse_data_list::auditDurationIsSet() const
{
    return auditDurationIsSet_;
}

void AuditSummaryResponse_data_list::unsetauditDuration()
{
    auditDurationIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getTotalSql() const
{
    return totalSql_;
}

void AuditSummaryResponse_data_list::setTotalSql(int64_t value)
{
    totalSql_ = value;
    totalSqlIsSet_ = true;
}

bool AuditSummaryResponse_data_list::totalSqlIsSet() const
{
    return totalSqlIsSet_;
}

void AuditSummaryResponse_data_list::unsettotalSql()
{
    totalSqlIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getTotalRisk() const
{
    return totalRisk_;
}

void AuditSummaryResponse_data_list::setTotalRisk(int64_t value)
{
    totalRisk_ = value;
    totalRiskIsSet_ = true;
}

bool AuditSummaryResponse_data_list::totalRiskIsSet() const
{
    return totalRiskIsSet_;
}

void AuditSummaryResponse_data_list::unsettotalRisk()
{
    totalRiskIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getTodaySql() const
{
    return todaySql_;
}

void AuditSummaryResponse_data_list::setTodaySql(int64_t value)
{
    todaySql_ = value;
    todaySqlIsSet_ = true;
}

bool AuditSummaryResponse_data_list::todaySqlIsSet() const
{
    return todaySqlIsSet_;
}

void AuditSummaryResponse_data_list::unsettodaySql()
{
    todaySqlIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getTodayRisk() const
{
    return todayRisk_;
}

void AuditSummaryResponse_data_list::setTodayRisk(int64_t value)
{
    todayRisk_ = value;
    todayRiskIsSet_ = true;
}

bool AuditSummaryResponse_data_list::todayRiskIsSet() const
{
    return todayRiskIsSet_;
}

void AuditSummaryResponse_data_list::unsettodayRisk()
{
    todayRiskIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getTodaySession() const
{
    return todaySession_;
}

void AuditSummaryResponse_data_list::setTodaySession(int64_t value)
{
    todaySession_ = value;
    todaySessionIsSet_ = true;
}

bool AuditSummaryResponse_data_list::todaySessionIsSet() const
{
    return todaySessionIsSet_;
}

void AuditSummaryResponse_data_list::unsettodaySession()
{
    todaySessionIsSet_ = false;
}

int64_t AuditSummaryResponse_data_list::getUpdateTime() const
{
    return updateTime_;
}

void AuditSummaryResponse_data_list::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AuditSummaryResponse_data_list::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AuditSummaryResponse_data_list::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string AuditSummaryResponse_data_list::getReserve1() const
{
    return reserve1_;
}

void AuditSummaryResponse_data_list::setReserve1(const std::string& value)
{
    reserve1_ = value;
    reserve1IsSet_ = true;
}

bool AuditSummaryResponse_data_list::reserve1IsSet() const
{
    return reserve1IsSet_;
}

void AuditSummaryResponse_data_list::unsetreserve1()
{
    reserve1IsSet_ = false;
}

std::string AuditSummaryResponse_data_list::getReserve2() const
{
    return reserve2_;
}

void AuditSummaryResponse_data_list::setReserve2(const std::string& value)
{
    reserve2_ = value;
    reserve2IsSet_ = true;
}

bool AuditSummaryResponse_data_list::reserve2IsSet() const
{
    return reserve2IsSet_;
}

void AuditSummaryResponse_data_list::unsetreserve2()
{
    reserve2IsSet_ = false;
}

}
}
}
}
}


