

#include "huaweicloud/gaussdb/v3/model/ShowHistoricalSqlFilterRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHistoricalSqlFilterRuleResponse::ShowHistoricalSqlFilterRuleResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    sqlFilterRulesIsSet_ = false;
}

ShowHistoricalSqlFilterRuleResponse::~ShowHistoricalSqlFilterRuleResponse() = default;

void ShowHistoricalSqlFilterRuleResponse::validate()
{
}

web::json::value ShowHistoricalSqlFilterRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(sqlFilterRulesIsSet_) {
        val[utility::conversions::to_string_t("sql_filter_rules")] = ModelBase::toJson(sqlFilterRules_);
    }

    return val;
}
bool ShowHistoricalSqlFilterRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_filter_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_filter_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<HistoricalSqlFilterRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlFilterRules(refVal);
        }
    }
    return ok;
}


int32_t ShowHistoricalSqlFilterRuleResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowHistoricalSqlFilterRuleResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowHistoricalSqlFilterRuleResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowHistoricalSqlFilterRuleResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<HistoricalSqlFilterRule>& ShowHistoricalSqlFilterRuleResponse::getSqlFilterRules()
{
    return sqlFilterRules_;
}

void ShowHistoricalSqlFilterRuleResponse::setSqlFilterRules(const std::vector<HistoricalSqlFilterRule>& value)
{
    sqlFilterRules_ = value;
    sqlFilterRulesIsSet_ = true;
}

bool ShowHistoricalSqlFilterRuleResponse::sqlFilterRulesIsSet() const
{
    return sqlFilterRulesIsSet_;
}

void ShowHistoricalSqlFilterRuleResponse::unsetsqlFilterRules()
{
    sqlFilterRulesIsSet_ = false;
}

}
}
}
}
}


