

#include "huaweicloud/lts/v2/model/CreateSqlAlarmRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSqlAlarmRuleResponse::CreateSqlAlarmRuleResponse()
{
    sqlAlarmRuleId_ = "";
    sqlAlarmRuleIdIsSet_ = false;
}

CreateSqlAlarmRuleResponse::~CreateSqlAlarmRuleResponse() = default;

void CreateSqlAlarmRuleResponse::validate()
{
}

web::json::value CreateSqlAlarmRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_id")] = ModelBase::toJson(sqlAlarmRuleId_);
    }

    return val;
}

bool CreateSqlAlarmRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRuleId(refVal);
        }
    }
    return ok;
}


std::string CreateSqlAlarmRuleResponse::getSqlAlarmRuleId() const
{
    return sqlAlarmRuleId_;
}

void CreateSqlAlarmRuleResponse::setSqlAlarmRuleId(const std::string& value)
{
    sqlAlarmRuleId_ = value;
    sqlAlarmRuleIdIsSet_ = true;
}

bool CreateSqlAlarmRuleResponse::sqlAlarmRuleIdIsSet() const
{
    return sqlAlarmRuleIdIsSet_;
}

void CreateSqlAlarmRuleResponse::unsetsqlAlarmRuleId()
{
    sqlAlarmRuleIdIsSet_ = false;
}

}
}
}
}
}


