

#include "huaweicloud/rds/v3/model/IntelligentKillSessionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




IntelligentKillSessionReq::IntelligentKillSessionReq()
{
    autoAddSqlLimitRule_ = false;
    autoAddSqlLimitRuleIsSet_ = false;
}

IntelligentKillSessionReq::~IntelligentKillSessionReq() = default;

void IntelligentKillSessionReq::validate()
{
}

web::json::value IntelligentKillSessionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoAddSqlLimitRuleIsSet_) {
        val[utility::conversions::to_string_t("auto_add_sql_limit_rule")] = ModelBase::toJson(autoAddSqlLimitRule_);
    }

    return val;
}
bool IntelligentKillSessionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_add_sql_limit_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_add_sql_limit_rule"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoAddSqlLimitRule(refVal);
        }
    }
    return ok;
}


bool IntelligentKillSessionReq::isAutoAddSqlLimitRule() const
{
    return autoAddSqlLimitRule_;
}

void IntelligentKillSessionReq::setAutoAddSqlLimitRule(bool value)
{
    autoAddSqlLimitRule_ = value;
    autoAddSqlLimitRuleIsSet_ = true;
}

bool IntelligentKillSessionReq::autoAddSqlLimitRuleIsSet() const
{
    return autoAddSqlLimitRuleIsSet_;
}

void IntelligentKillSessionReq::unsetautoAddSqlLimitRule()
{
    autoAddSqlLimitRuleIsSet_ = false;
}

}
}
}
}
}


