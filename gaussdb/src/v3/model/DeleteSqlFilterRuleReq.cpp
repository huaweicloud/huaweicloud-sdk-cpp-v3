

#include "huaweicloud/gaussdb/v3/model/DeleteSqlFilterRuleReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteSqlFilterRuleReq::DeleteSqlFilterRuleReq()
{
    sqlFilterRulesIsSet_ = false;
}

DeleteSqlFilterRuleReq::~DeleteSqlFilterRuleReq() = default;

void DeleteSqlFilterRuleReq::validate()
{
}

web::json::value DeleteSqlFilterRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlFilterRulesIsSet_) {
        val[utility::conversions::to_string_t("sql_filter_rules")] = ModelBase::toJson(sqlFilterRules_);
    }

    return val;
}

bool DeleteSqlFilterRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_filter_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_filter_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteNodeSqlFilterRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlFilterRules(refVal);
        }
    }
    return ok;
}

std::vector<DeleteNodeSqlFilterRuleInfo>& DeleteSqlFilterRuleReq::getSqlFilterRules()
{
    return sqlFilterRules_;
}

void DeleteSqlFilterRuleReq::setSqlFilterRules(const std::vector<DeleteNodeSqlFilterRuleInfo>& value)
{
    sqlFilterRules_ = value;
    sqlFilterRulesIsSet_ = true;
}

bool DeleteSqlFilterRuleReq::sqlFilterRulesIsSet() const
{
    return sqlFilterRulesIsSet_;
}

void DeleteSqlFilterRuleReq::unsetsqlFilterRules()
{
    sqlFilterRulesIsSet_ = false;
}

}
}
}
}
}


