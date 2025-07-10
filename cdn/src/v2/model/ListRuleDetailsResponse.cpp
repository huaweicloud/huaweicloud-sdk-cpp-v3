

#include "huaweicloud/cdn/v2/model/ListRuleDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListRuleDetailsResponse::ListRuleDetailsResponse()
{
    rulesIsSet_ = false;
}

ListRuleDetailsResponse::~ListRuleDetailsResponse() = default;

void ListRuleDetailsResponse::validate()
{
}

web::json::value ListRuleDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool ListRuleDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::vector<RuleResponse>& ListRuleDetailsResponse::getRules()
{
    return rules_;
}

void ListRuleDetailsResponse::setRules(const std::vector<RuleResponse>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListRuleDetailsResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListRuleDetailsResponse::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


