

#include "huaweicloud/dbss/v1/model/ListSqlInjectionRulesNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListSqlInjectionRulesNewResponse::ListSqlInjectionRulesNewResponse()
{
    rulesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListSqlInjectionRulesNewResponse::~ListSqlInjectionRulesNewResponse() = default;

void ListSqlInjectionRulesNewResponse::validate()
{
}

web::json::value ListSqlInjectionRulesNewResponse::toJson() const
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
bool ListSqlInjectionRulesNewResponse::fromJson(const web::json::value& val)
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


std::vector<SqlRuleResponse_rules>& ListSqlInjectionRulesNewResponse::getRules()
{
    return rules_;
}

void ListSqlInjectionRulesNewResponse::setRules(const std::vector<SqlRuleResponse_rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListSqlInjectionRulesNewResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListSqlInjectionRulesNewResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListSqlInjectionRulesNewResponse::getTotal() const
{
    return total_;
}

void ListSqlInjectionRulesNewResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSqlInjectionRulesNewResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSqlInjectionRulesNewResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


