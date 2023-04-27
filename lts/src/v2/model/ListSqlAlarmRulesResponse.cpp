

#include "huaweicloud/lts/v2/model/ListSqlAlarmRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListSqlAlarmRulesResponse::ListSqlAlarmRulesResponse()
{
    sqlAlarmRulesIsSet_ = false;
}

ListSqlAlarmRulesResponse::~ListSqlAlarmRulesResponse() = default;

void ListSqlAlarmRulesResponse::validate()
{
}

web::json::value ListSqlAlarmRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRulesIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rules")] = ModelBase::toJson(sqlAlarmRules_);
    }

    return val;
}

bool ListSqlAlarmRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlAlarmRuleRespList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRules(refVal);
        }
    }
    return ok;
}


std::vector<SqlAlarmRuleRespList>& ListSqlAlarmRulesResponse::getSqlAlarmRules()
{
    return sqlAlarmRules_;
}

void ListSqlAlarmRulesResponse::setSqlAlarmRules(const std::vector<SqlAlarmRuleRespList>& value)
{
    sqlAlarmRules_ = value;
    sqlAlarmRulesIsSet_ = true;
}

bool ListSqlAlarmRulesResponse::sqlAlarmRulesIsSet() const
{
    return sqlAlarmRulesIsSet_;
}

void ListSqlAlarmRulesResponse::unsetsqlAlarmRules()
{
    sqlAlarmRulesIsSet_ = false;
}

}
}
}
}
}


