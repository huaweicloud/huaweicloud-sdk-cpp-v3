

#include "huaweicloud/dbss/v1/model/ListAuditSummaryInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSummaryInfosResponse::ListAuditSummaryInfosResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
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
    dataListIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditSummaryInfosResponse::~ListAuditSummaryInfosResponse() = default;

void ListAuditSummaryInfosResponse::validate()
{
}

web::json::value ListAuditSummaryInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditSummaryInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditSummaryResponse_data_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::string ListAuditSummaryInfosResponse::getProjectId() const
{
    return projectId_;
}

void ListAuditSummaryInfosResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAuditSummaryInfosResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getAuditDuration() const
{
    return auditDuration_;
}

void ListAuditSummaryInfosResponse::setAuditDuration(int64_t value)
{
    auditDuration_ = value;
    auditDurationIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::auditDurationIsSet() const
{
    return auditDurationIsSet_;
}

void ListAuditSummaryInfosResponse::unsetauditDuration()
{
    auditDurationIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getTotalSql() const
{
    return totalSql_;
}

void ListAuditSummaryInfosResponse::setTotalSql(int64_t value)
{
    totalSql_ = value;
    totalSqlIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::totalSqlIsSet() const
{
    return totalSqlIsSet_;
}

void ListAuditSummaryInfosResponse::unsettotalSql()
{
    totalSqlIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getTotalRisk() const
{
    return totalRisk_;
}

void ListAuditSummaryInfosResponse::setTotalRisk(int64_t value)
{
    totalRisk_ = value;
    totalRiskIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::totalRiskIsSet() const
{
    return totalRiskIsSet_;
}

void ListAuditSummaryInfosResponse::unsettotalRisk()
{
    totalRiskIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getTodaySql() const
{
    return todaySql_;
}

void ListAuditSummaryInfosResponse::setTodaySql(int64_t value)
{
    todaySql_ = value;
    todaySqlIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::todaySqlIsSet() const
{
    return todaySqlIsSet_;
}

void ListAuditSummaryInfosResponse::unsettodaySql()
{
    todaySqlIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getTodayRisk() const
{
    return todayRisk_;
}

void ListAuditSummaryInfosResponse::setTodayRisk(int64_t value)
{
    todayRisk_ = value;
    todayRiskIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::todayRiskIsSet() const
{
    return todayRiskIsSet_;
}

void ListAuditSummaryInfosResponse::unsettodayRisk()
{
    todayRiskIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getTodaySession() const
{
    return todaySession_;
}

void ListAuditSummaryInfosResponse::setTodaySession(int64_t value)
{
    todaySession_ = value;
    todaySessionIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::todaySessionIsSet() const
{
    return todaySessionIsSet_;
}

void ListAuditSummaryInfosResponse::unsettodaySession()
{
    todaySessionIsSet_ = false;
}

int64_t ListAuditSummaryInfosResponse::getUpdateTime() const
{
    return updateTime_;
}

void ListAuditSummaryInfosResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListAuditSummaryInfosResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<AuditSummaryResponse_data_list>& ListAuditSummaryInfosResponse::getDataList()
{
    return dataList_;
}

void ListAuditSummaryInfosResponse::setDataList(const std::vector<AuditSummaryResponse_data_list>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ListAuditSummaryInfosResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

int32_t ListAuditSummaryInfosResponse::getTotal() const
{
    return total_;
}

void ListAuditSummaryInfosResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditSummaryInfosResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditSummaryInfosResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


