

#include "huaweicloud/gaussdb/v3/model/NodeSqlFilterRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




NodeSqlFilterRule::NodeSqlFilterRule()
{
    sqlType_ = "";
    sqlTypeIsSet_ = false;
    patternsIsSet_ = false;
}

NodeSqlFilterRule::~NodeSqlFilterRule() = default;

void NodeSqlFilterRule::validate()
{
}

web::json::value NodeSqlFilterRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlTypeIsSet_) {
        val[utility::conversions::to_string_t("sql_type")] = ModelBase::toJson(sqlType_);
    }
    if(patternsIsSet_) {
        val[utility::conversions::to_string_t("patterns")] = ModelBase::toJson(patterns_);
    }

    return val;
}

bool NodeSqlFilterRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("patterns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("patterns"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSqlFilterRulePattern> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatterns(refVal);
        }
    }
    return ok;
}

std::string NodeSqlFilterRule::getSqlType() const
{
    return sqlType_;
}

void NodeSqlFilterRule::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool NodeSqlFilterRule::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void NodeSqlFilterRule::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

std::vector<NodeSqlFilterRulePattern>& NodeSqlFilterRule::getPatterns()
{
    return patterns_;
}

void NodeSqlFilterRule::setPatterns(const std::vector<NodeSqlFilterRulePattern>& value)
{
    patterns_ = value;
    patternsIsSet_ = true;
}

bool NodeSqlFilterRule::patternsIsSet() const
{
    return patternsIsSet_;
}

void NodeSqlFilterRule::unsetpatterns()
{
    patternsIsSet_ = false;
}

}
}
}
}
}


