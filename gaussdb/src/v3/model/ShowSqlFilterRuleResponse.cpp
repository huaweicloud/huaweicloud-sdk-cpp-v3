

#include "huaweicloud/gaussdb/v3/model/ShowSqlFilterRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSqlFilterRuleResponse::ShowSqlFilterRuleResponse()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlFilterRulesIsSet_ = false;
}

ShowSqlFilterRuleResponse::~ShowSqlFilterRuleResponse() = default;

void ShowSqlFilterRuleResponse::validate()
{
}

web::json::value ShowSqlFilterRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sqlFilterRulesIsSet_) {
        val[utility::conversions::to_string_t("sql_filter_rules")] = ModelBase::toJson(sqlFilterRules_);
    }

    return val;
}

bool ShowSqlFilterRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_filter_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_filter_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlFilterRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlFilterRules(refVal);
        }
    }
    return ok;
}

std::string ShowSqlFilterRuleResponse::getNodeId() const
{
    return nodeId_;
}

void ShowSqlFilterRuleResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSqlFilterRuleResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSqlFilterRuleResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<SqlFilterRule>& ShowSqlFilterRuleResponse::getSqlFilterRules()
{
    return sqlFilterRules_;
}

void ShowSqlFilterRuleResponse::setSqlFilterRules(const std::vector<SqlFilterRule>& value)
{
    sqlFilterRules_ = value;
    sqlFilterRulesIsSet_ = true;
}

bool ShowSqlFilterRuleResponse::sqlFilterRulesIsSet() const
{
    return sqlFilterRulesIsSet_;
}

void ShowSqlFilterRuleResponse::unsetsqlFilterRules()
{
    sqlFilterRulesIsSet_ = false;
}

}
}
}
}
}


