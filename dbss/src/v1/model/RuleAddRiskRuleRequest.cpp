

#include "huaweicloud/dbss/v1/model/RuleAddRiskRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleAddRiskRuleRequest::RuleAddRiskRuleRequest()
{
    action_ = "";
    actionIsSet_ = false;
    affectRows_ = 0;
    affectRowsIsSet_ = false;
    affectSymbol_ = "";
    affectSymbolIsSet_ = false;
    clientIps_ = "";
    clientIpsIsSet_ = false;
    dbIds_ = "";
    dbIdsIsSet_ = false;
    exceptionIps_ = "";
    exceptionIpsIsSet_ = false;
    executionSymbol_ = "";
    executionSymbolIsSet_ = false;
    executionTime_ = 0L;
    executionTimeIsSet_ = false;
    ignoreCase_ = false;
    ignoreCaseIsSet_ = false;
    riskLevel_ = "";
    riskLevelIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    schemasIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

RuleAddRiskRuleRequest::~RuleAddRiskRuleRequest() = default;

void RuleAddRiskRuleRequest::validate()
{
}

web::json::value RuleAddRiskRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(affectRowsIsSet_) {
        val[utility::conversions::to_string_t("affect_rows")] = ModelBase::toJson(affectRows_);
    }
    if(affectSymbolIsSet_) {
        val[utility::conversions::to_string_t("affect_symbol")] = ModelBase::toJson(affectSymbol_);
    }
    if(clientIpsIsSet_) {
        val[utility::conversions::to_string_t("client_ips")] = ModelBase::toJson(clientIps_);
    }
    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(exceptionIpsIsSet_) {
        val[utility::conversions::to_string_t("exception_ips")] = ModelBase::toJson(exceptionIps_);
    }
    if(executionSymbolIsSet_) {
        val[utility::conversions::to_string_t("execution_symbol")] = ModelBase::toJson(executionSymbol_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(ignoreCaseIsSet_) {
        val[utility::conversions::to_string_t("ignore_case")] = ModelBase::toJson(ignoreCase_);
    }
    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RuleAddRiskRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("affect_symbol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affect_symbol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectSymbol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exception_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exception_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExceptionIps(refVal);
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<SchemaBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
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
    return ok;
}


std::string RuleAddRiskRuleRequest::getAction() const
{
    return action_;
}

void RuleAddRiskRuleRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RuleAddRiskRuleRequest::actionIsSet() const
{
    return actionIsSet_;
}

void RuleAddRiskRuleRequest::unsetaction()
{
    actionIsSet_ = false;
}

int32_t RuleAddRiskRuleRequest::getAffectRows() const
{
    return affectRows_;
}

void RuleAddRiskRuleRequest::setAffectRows(int32_t value)
{
    affectRows_ = value;
    affectRowsIsSet_ = true;
}

bool RuleAddRiskRuleRequest::affectRowsIsSet() const
{
    return affectRowsIsSet_;
}

void RuleAddRiskRuleRequest::unsetaffectRows()
{
    affectRowsIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getAffectSymbol() const
{
    return affectSymbol_;
}

void RuleAddRiskRuleRequest::setAffectSymbol(const std::string& value)
{
    affectSymbol_ = value;
    affectSymbolIsSet_ = true;
}

bool RuleAddRiskRuleRequest::affectSymbolIsSet() const
{
    return affectSymbolIsSet_;
}

void RuleAddRiskRuleRequest::unsetaffectSymbol()
{
    affectSymbolIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getClientIps() const
{
    return clientIps_;
}

void RuleAddRiskRuleRequest::setClientIps(const std::string& value)
{
    clientIps_ = value;
    clientIpsIsSet_ = true;
}

bool RuleAddRiskRuleRequest::clientIpsIsSet() const
{
    return clientIpsIsSet_;
}

void RuleAddRiskRuleRequest::unsetclientIps()
{
    clientIpsIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getDbIds() const
{
    return dbIds_;
}

void RuleAddRiskRuleRequest::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool RuleAddRiskRuleRequest::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void RuleAddRiskRuleRequest::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getExceptionIps() const
{
    return exceptionIps_;
}

void RuleAddRiskRuleRequest::setExceptionIps(const std::string& value)
{
    exceptionIps_ = value;
    exceptionIpsIsSet_ = true;
}

bool RuleAddRiskRuleRequest::exceptionIpsIsSet() const
{
    return exceptionIpsIsSet_;
}

void RuleAddRiskRuleRequest::unsetexceptionIps()
{
    exceptionIpsIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getExecutionSymbol() const
{
    return executionSymbol_;
}

void RuleAddRiskRuleRequest::setExecutionSymbol(const std::string& value)
{
    executionSymbol_ = value;
    executionSymbolIsSet_ = true;
}

bool RuleAddRiskRuleRequest::executionSymbolIsSet() const
{
    return executionSymbolIsSet_;
}

void RuleAddRiskRuleRequest::unsetexecutionSymbol()
{
    executionSymbolIsSet_ = false;
}

int64_t RuleAddRiskRuleRequest::getExecutionTime() const
{
    return executionTime_;
}

void RuleAddRiskRuleRequest::setExecutionTime(int64_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool RuleAddRiskRuleRequest::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void RuleAddRiskRuleRequest::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

bool RuleAddRiskRuleRequest::isIgnoreCase() const
{
    return ignoreCase_;
}

void RuleAddRiskRuleRequest::setIgnoreCase(bool value)
{
    ignoreCase_ = value;
    ignoreCaseIsSet_ = true;
}

bool RuleAddRiskRuleRequest::ignoreCaseIsSet() const
{
    return ignoreCaseIsSet_;
}

void RuleAddRiskRuleRequest::unsetignoreCase()
{
    ignoreCaseIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getRiskLevel() const
{
    return riskLevel_;
}

void RuleAddRiskRuleRequest::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool RuleAddRiskRuleRequest::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void RuleAddRiskRuleRequest::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getRuleName() const
{
    return ruleName_;
}

void RuleAddRiskRuleRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RuleAddRiskRuleRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RuleAddRiskRuleRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::vector<SchemaBean>& RuleAddRiskRuleRequest::getSchemas()
{
    return schemas_;
}

void RuleAddRiskRuleRequest::setSchemas(const std::vector<SchemaBean>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool RuleAddRiskRuleRequest::schemasIsSet() const
{
    return schemasIsSet_;
}

void RuleAddRiskRuleRequest::unsetschemas()
{
    schemasIsSet_ = false;
}

std::string RuleAddRiskRuleRequest::getStatus() const
{
    return status_;
}

void RuleAddRiskRuleRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleAddRiskRuleRequest::statusIsSet() const
{
    return statusIsSet_;
}

void RuleAddRiskRuleRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


