

#include "huaweicloud/cdn/v2/model/FullUpdateRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




FullUpdateRulesRequest::FullUpdateRulesRequest()
{
    rulesIsSet_ = false;
}

FullUpdateRulesRequest::~FullUpdateRulesRequest() = default;

void FullUpdateRulesRequest::validate()
{
}

web::json::value FullUpdateRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool FullUpdateRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateRuleRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::vector<CreateRuleRequest>& FullUpdateRulesRequest::getRules()
{
    return rules_;
}

void FullUpdateRulesRequest::setRules(const std::vector<CreateRuleRequest>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool FullUpdateRulesRequest::rulesIsSet() const
{
    return rulesIsSet_;
}

void FullUpdateRulesRequest::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


