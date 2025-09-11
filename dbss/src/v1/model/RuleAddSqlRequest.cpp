

#include "huaweicloud/dbss/v1/model/RuleAddSqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleAddSqlRequest::RuleAddSqlRequest()
{
    riskLevel_ = "";
    riskLevelIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    sqlRegex_ = "";
    sqlRegexIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

RuleAddSqlRequest::~RuleAddSqlRequest() = default;

void RuleAddSqlRequest::validate()
{
}

web::json::value RuleAddSqlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(sqlRegexIsSet_) {
        val[utility::conversions::to_string_t("sql_regex")] = ModelBase::toJson(sqlRegex_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RuleAddSqlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("sql_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlRegex(refVal);
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


std::string RuleAddSqlRequest::getRiskLevel() const
{
    return riskLevel_;
}

void RuleAddSqlRequest::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool RuleAddSqlRequest::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void RuleAddSqlRequest::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

std::string RuleAddSqlRequest::getRuleName() const
{
    return ruleName_;
}

void RuleAddSqlRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RuleAddSqlRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RuleAddSqlRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string RuleAddSqlRequest::getSqlRegex() const
{
    return sqlRegex_;
}

void RuleAddSqlRequest::setSqlRegex(const std::string& value)
{
    sqlRegex_ = value;
    sqlRegexIsSet_ = true;
}

bool RuleAddSqlRequest::sqlRegexIsSet() const
{
    return sqlRegexIsSet_;
}

void RuleAddSqlRequest::unsetsqlRegex()
{
    sqlRegexIsSet_ = false;
}

std::string RuleAddSqlRequest::getStatus() const
{
    return status_;
}

void RuleAddSqlRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleAddSqlRequest::statusIsSet() const
{
    return statusIsSet_;
}

void RuleAddSqlRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


