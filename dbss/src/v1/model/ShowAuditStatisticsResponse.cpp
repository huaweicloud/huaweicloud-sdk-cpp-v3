

#include "huaweicloud/dbss/v1/model/ShowAuditStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditStatisticsResponse::ShowAuditStatisticsResponse()
{
    dbRiskStatisticsIsSet_ = false;
    highRiskTotal_ = 0L;
    highRiskTotalIsSet_ = false;
    lowRiskTotal_ = 0L;
    lowRiskTotalIsSet_ = false;
    mediumRiskTotal_ = 0L;
    mediumRiskTotalIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    ruleRiskStatisticsIsSet_ = false;
    unsupportedAuditInfosIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
}

ShowAuditStatisticsResponse::~ShowAuditStatisticsResponse() = default;

void ShowAuditStatisticsResponse::validate()
{
}

web::json::value ShowAuditStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbRiskStatisticsIsSet_) {
        val[utility::conversions::to_string_t("db_risk_statistics")] = ModelBase::toJson(dbRiskStatistics_);
    }
    if(highRiskTotalIsSet_) {
        val[utility::conversions::to_string_t("high_risk_total")] = ModelBase::toJson(highRiskTotal_);
    }
    if(lowRiskTotalIsSet_) {
        val[utility::conversions::to_string_t("low_risk_total")] = ModelBase::toJson(lowRiskTotal_);
    }
    if(mediumRiskTotalIsSet_) {
        val[utility::conversions::to_string_t("medium_risk_total")] = ModelBase::toJson(mediumRiskTotal_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(ruleRiskStatisticsIsSet_) {
        val[utility::conversions::to_string_t("rule_risk_statistics")] = ModelBase::toJson(ruleRiskStatistics_);
    }
    if(unsupportedAuditInfosIsSet_) {
        val[utility::conversions::to_string_t("unsupported_audit_infos")] = ModelBase::toJson(unsupportedAuditInfos_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ShowAuditStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_risk_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_risk_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseRiskStatisticsDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbRiskStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_risk_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_risk_total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighRiskTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low_risk_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("low_risk_total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowRiskTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("medium_risk_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("medium_risk_total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediumRiskTotal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_risk_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_risk_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleRiskStatisticsDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleRiskStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unsupported_audit_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unsupported_audit_infos"));
        if(!fieldValue.is_null())
        {
            UnSupportAuditInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnsupportedAuditInfos(refVal);
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
    return ok;
}


std::vector<DatabaseRiskStatisticsDto>& ShowAuditStatisticsResponse::getDbRiskStatistics()
{
    return dbRiskStatistics_;
}

void ShowAuditStatisticsResponse::setDbRiskStatistics(const std::vector<DatabaseRiskStatisticsDto>& value)
{
    dbRiskStatistics_ = value;
    dbRiskStatisticsIsSet_ = true;
}

bool ShowAuditStatisticsResponse::dbRiskStatisticsIsSet() const
{
    return dbRiskStatisticsIsSet_;
}

void ShowAuditStatisticsResponse::unsetdbRiskStatistics()
{
    dbRiskStatisticsIsSet_ = false;
}

int64_t ShowAuditStatisticsResponse::getHighRiskTotal() const
{
    return highRiskTotal_;
}

void ShowAuditStatisticsResponse::setHighRiskTotal(int64_t value)
{
    highRiskTotal_ = value;
    highRiskTotalIsSet_ = true;
}

bool ShowAuditStatisticsResponse::highRiskTotalIsSet() const
{
    return highRiskTotalIsSet_;
}

void ShowAuditStatisticsResponse::unsethighRiskTotal()
{
    highRiskTotalIsSet_ = false;
}

int64_t ShowAuditStatisticsResponse::getLowRiskTotal() const
{
    return lowRiskTotal_;
}

void ShowAuditStatisticsResponse::setLowRiskTotal(int64_t value)
{
    lowRiskTotal_ = value;
    lowRiskTotalIsSet_ = true;
}

bool ShowAuditStatisticsResponse::lowRiskTotalIsSet() const
{
    return lowRiskTotalIsSet_;
}

void ShowAuditStatisticsResponse::unsetlowRiskTotal()
{
    lowRiskTotalIsSet_ = false;
}

int64_t ShowAuditStatisticsResponse::getMediumRiskTotal() const
{
    return mediumRiskTotal_;
}

void ShowAuditStatisticsResponse::setMediumRiskTotal(int64_t value)
{
    mediumRiskTotal_ = value;
    mediumRiskTotalIsSet_ = true;
}

bool ShowAuditStatisticsResponse::mediumRiskTotalIsSet() const
{
    return mediumRiskTotalIsSet_;
}

void ShowAuditStatisticsResponse::unsetmediumRiskTotal()
{
    mediumRiskTotalIsSet_ = false;
}

std::string ShowAuditStatisticsResponse::getProjectId() const
{
    return projectId_;
}

void ShowAuditStatisticsResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAuditStatisticsResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAuditStatisticsResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<RuleRiskStatisticsDto>& ShowAuditStatisticsResponse::getRuleRiskStatistics()
{
    return ruleRiskStatistics_;
}

void ShowAuditStatisticsResponse::setRuleRiskStatistics(const std::vector<RuleRiskStatisticsDto>& value)
{
    ruleRiskStatistics_ = value;
    ruleRiskStatisticsIsSet_ = true;
}

bool ShowAuditStatisticsResponse::ruleRiskStatisticsIsSet() const
{
    return ruleRiskStatisticsIsSet_;
}

void ShowAuditStatisticsResponse::unsetruleRiskStatistics()
{
    ruleRiskStatisticsIsSet_ = false;
}

UnSupportAuditInfoResponse ShowAuditStatisticsResponse::getUnsupportedAuditInfos() const
{
    return unsupportedAuditInfos_;
}

void ShowAuditStatisticsResponse::setUnsupportedAuditInfos(const UnSupportAuditInfoResponse& value)
{
    unsupportedAuditInfos_ = value;
    unsupportedAuditInfosIsSet_ = true;
}

bool ShowAuditStatisticsResponse::unsupportedAuditInfosIsSet() const
{
    return unsupportedAuditInfosIsSet_;
}

void ShowAuditStatisticsResponse::unsetunsupportedAuditInfos()
{
    unsupportedAuditInfosIsSet_ = false;
}

int64_t ShowAuditStatisticsResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowAuditStatisticsResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowAuditStatisticsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowAuditStatisticsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


