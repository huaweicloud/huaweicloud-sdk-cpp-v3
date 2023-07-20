

#include "huaweicloud/gaussdb/v3/model/DeleteNodeSqlFilterRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteNodeSqlFilterRule::DeleteNodeSqlFilterRule()
{
    sqlType_ = "";
    sqlTypeIsSet_ = false;
    patternsIsSet_ = false;
}

DeleteNodeSqlFilterRule::~DeleteNodeSqlFilterRule() = default;

void DeleteNodeSqlFilterRule::validate()
{
}

web::json::value DeleteNodeSqlFilterRule::toJson() const
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

bool DeleteNodeSqlFilterRule::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPatterns(refVal);
        }
    }
    return ok;
}

std::string DeleteNodeSqlFilterRule::getSqlType() const
{
    return sqlType_;
}

void DeleteNodeSqlFilterRule::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool DeleteNodeSqlFilterRule::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void DeleteNodeSqlFilterRule::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

std::vector<std::string>& DeleteNodeSqlFilterRule::getPatterns()
{
    return patterns_;
}

void DeleteNodeSqlFilterRule::setPatterns(const std::vector<std::string>& value)
{
    patterns_ = value;
    patternsIsSet_ = true;
}

bool DeleteNodeSqlFilterRule::patternsIsSet() const
{
    return patternsIsSet_;
}

void DeleteNodeSqlFilterRule::unsetpatterns()
{
    patternsIsSet_ = false;
}

}
}
}
}
}


