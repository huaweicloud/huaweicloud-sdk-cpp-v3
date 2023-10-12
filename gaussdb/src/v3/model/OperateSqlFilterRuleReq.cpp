

#include "huaweicloud/gaussdb/v3/model/OperateSqlFilterRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateSqlFilterRuleReq::OperateSqlFilterRuleReq()
{
    sqlFilterRulesIsSet_ = false;
}

OperateSqlFilterRuleReq::~OperateSqlFilterRuleReq() = default;

void OperateSqlFilterRuleReq::validate()
{
}

web::json::value OperateSqlFilterRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlFilterRulesIsSet_) {
        val[utility::conversions::to_string_t("sql_filter_rules")] = ModelBase::toJson(sqlFilterRules_);
    }

    return val;
}
bool OperateSqlFilterRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_filter_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_filter_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSqlFilterRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlFilterRules(refVal);
        }
    }
    return ok;
}


std::vector<NodeSqlFilterRuleInfo>& OperateSqlFilterRuleReq::getSqlFilterRules()
{
    return sqlFilterRules_;
}

void OperateSqlFilterRuleReq::setSqlFilterRules(const std::vector<NodeSqlFilterRuleInfo>& value)
{
    sqlFilterRules_ = value;
    sqlFilterRulesIsSet_ = true;
}

bool OperateSqlFilterRuleReq::sqlFilterRulesIsSet() const
{
    return sqlFilterRulesIsSet_;
}

void OperateSqlFilterRuleReq::unsetsqlFilterRules()
{
    sqlFilterRulesIsSet_ = false;
}

}
}
}
}
}


