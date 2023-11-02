

#include "huaweicloud/dbss/v1/model/ListSqlInjectionRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListSqlInjectionRulesResponse::ListSqlInjectionRulesResponse()
{
    rulesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListSqlInjectionRulesResponse::~ListSqlInjectionRulesResponse() = default;

void ListSqlInjectionRulesResponse::validate()
{
}

web::json::value ListSqlInjectionRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListSqlInjectionRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlRuleResponse_rules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<SqlRuleResponse_rules>& ListSqlInjectionRulesResponse::getRules()
{
    return rules_;
}

void ListSqlInjectionRulesResponse::setRules(const std::vector<SqlRuleResponse_rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListSqlInjectionRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListSqlInjectionRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListSqlInjectionRulesResponse::getTotal() const
{
    return total_;
}

void ListSqlInjectionRulesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSqlInjectionRulesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSqlInjectionRulesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


