

#include "huaweicloud/gaussdb/v3/model/SqlFilterRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SqlFilterRule::SqlFilterRule()
{
    sqlType_ = "";
    sqlTypeIsSet_ = false;
    patternsIsSet_ = false;
}

SqlFilterRule::~SqlFilterRule() = default;

void SqlFilterRule::validate()
{
}

web::json::value SqlFilterRule::toJson() const
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

bool SqlFilterRule::fromJson(const web::json::value& val)
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
            std::vector<SqlFilterRulePattern> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatterns(refVal);
        }
    }
    return ok;
}

std::string SqlFilterRule::getSqlType() const
{
    return sqlType_;
}

void SqlFilterRule::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool SqlFilterRule::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void SqlFilterRule::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

std::vector<SqlFilterRulePattern>& SqlFilterRule::getPatterns()
{
    return patterns_;
}

void SqlFilterRule::setPatterns(const std::vector<SqlFilterRulePattern>& value)
{
    patterns_ = value;
    patternsIsSet_ = true;
}

bool SqlFilterRule::patternsIsSet() const
{
    return patternsIsSet_;
}

void SqlFilterRule::unsetpatterns()
{
    patternsIsSet_ = false;
}

}
}
}
}
}


