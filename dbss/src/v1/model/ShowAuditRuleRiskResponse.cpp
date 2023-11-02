

#include "huaweicloud/dbss/v1/model/ShowAuditRuleRiskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditRuleRiskResponse::ShowAuditRuleRiskResponse()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    schemasIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    ignoreCase_ = false;
    ignoreCaseIsSet_ = false;
    riskLevel_ = "";
    riskLevelIsSet_ = false;
    dbIds_ = "";
    dbIdsIsSet_ = false;
    executionSymbol_ = "";
    executionSymbolIsSet_ = false;
    executionTime_ = 0;
    executionTimeIsSet_ = false;
    affectSymbol_ = "";
    affectSymbolIsSet_ = false;
    affectRows_ = 0;
    affectRowsIsSet_ = false;
    clientIps_ = "";
    clientIpsIsSet_ = false;
}

ShowAuditRuleRiskResponse::~ShowAuditRuleRiskResponse() = default;

void ShowAuditRuleRiskResponse::validate()
{
}

web::json::value ShowAuditRuleRiskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(ignoreCaseIsSet_) {
        val[utility::conversions::to_string_t("ignore_case")] = ModelBase::toJson(ignoreCase_);
    }
    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }
    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(executionSymbolIsSet_) {
        val[utility::conversions::to_string_t("execution_symbol")] = ModelBase::toJson(executionSymbol_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(affectSymbolIsSet_) {
        val[utility::conversions::to_string_t("affect_symbol")] = ModelBase::toJson(affectSymbol_);
    }
    if(affectRowsIsSet_) {
        val[utility::conversions::to_string_t("affect_rows")] = ModelBase::toJson(affectRows_);
    }
    if(clientIpsIsSet_) {
        val[utility::conversions::to_string_t("client_ips")] = ModelBase::toJson(clientIps_);
    }

    return val;
}
bool ShowAuditRuleRiskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleRiskInfoBean_schemas> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_case"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_case"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreCase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_symbol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_symbol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionSymbol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("affect_symbol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affect_symbol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectSymbol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affect_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affect_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIps(refVal);
        }
    }
    return ok;
}


std::string ShowAuditRuleRiskResponse::getRuleId() const
{
    return ruleId_;
}

void ShowAuditRuleRiskResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowAuditRuleRiskResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getRuleName() const
{
    return ruleName_;
}

void ShowAuditRuleRiskResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ShowAuditRuleRiskResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getStatus() const
{
    return status_;
}

void ShowAuditRuleRiskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAuditRuleRiskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getAction() const
{
    return action_;
}

void ShowAuditRuleRiskResponse::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::actionIsSet() const
{
    return actionIsSet_;
}

void ShowAuditRuleRiskResponse::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<RuleRiskInfoBean_schemas>& ShowAuditRuleRiskResponse::getSchemas()
{
    return schemas_;
}

void ShowAuditRuleRiskResponse::setSchemas(const std::vector<RuleRiskInfoBean_schemas>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::schemasIsSet() const
{
    return schemasIsSet_;
}

void ShowAuditRuleRiskResponse::unsetschemas()
{
    schemasIsSet_ = false;
}

int32_t ShowAuditRuleRiskResponse::getRank() const
{
    return rank_;
}

void ShowAuditRuleRiskResponse::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::rankIsSet() const
{
    return rankIsSet_;
}

void ShowAuditRuleRiskResponse::unsetrank()
{
    rankIsSet_ = false;
}

bool ShowAuditRuleRiskResponse::isIgnoreCase() const
{
    return ignoreCase_;
}

void ShowAuditRuleRiskResponse::setIgnoreCase(bool value)
{
    ignoreCase_ = value;
    ignoreCaseIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::ignoreCaseIsSet() const
{
    return ignoreCaseIsSet_;
}

void ShowAuditRuleRiskResponse::unsetignoreCase()
{
    ignoreCaseIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getRiskLevel() const
{
    return riskLevel_;
}

void ShowAuditRuleRiskResponse::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void ShowAuditRuleRiskResponse::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getDbIds() const
{
    return dbIds_;
}

void ShowAuditRuleRiskResponse::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void ShowAuditRuleRiskResponse::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getExecutionSymbol() const
{
    return executionSymbol_;
}

void ShowAuditRuleRiskResponse::setExecutionSymbol(const std::string& value)
{
    executionSymbol_ = value;
    executionSymbolIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::executionSymbolIsSet() const
{
    return executionSymbolIsSet_;
}

void ShowAuditRuleRiskResponse::unsetexecutionSymbol()
{
    executionSymbolIsSet_ = false;
}

int32_t ShowAuditRuleRiskResponse::getExecutionTime() const
{
    return executionTime_;
}

void ShowAuditRuleRiskResponse::setExecutionTime(int32_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void ShowAuditRuleRiskResponse::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getAffectSymbol() const
{
    return affectSymbol_;
}

void ShowAuditRuleRiskResponse::setAffectSymbol(const std::string& value)
{
    affectSymbol_ = value;
    affectSymbolIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::affectSymbolIsSet() const
{
    return affectSymbolIsSet_;
}

void ShowAuditRuleRiskResponse::unsetaffectSymbol()
{
    affectSymbolIsSet_ = false;
}

int32_t ShowAuditRuleRiskResponse::getAffectRows() const
{
    return affectRows_;
}

void ShowAuditRuleRiskResponse::setAffectRows(int32_t value)
{
    affectRows_ = value;
    affectRowsIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::affectRowsIsSet() const
{
    return affectRowsIsSet_;
}

void ShowAuditRuleRiskResponse::unsetaffectRows()
{
    affectRowsIsSet_ = false;
}

std::string ShowAuditRuleRiskResponse::getClientIps() const
{
    return clientIps_;
}

void ShowAuditRuleRiskResponse::setClientIps(const std::string& value)
{
    clientIps_ = value;
    clientIpsIsSet_ = true;
}

bool ShowAuditRuleRiskResponse::clientIpsIsSet() const
{
    return clientIpsIsSet_;
}

void ShowAuditRuleRiskResponse::unsetclientIps()
{
    clientIpsIsSet_ = false;
}

}
}
}
}
}


