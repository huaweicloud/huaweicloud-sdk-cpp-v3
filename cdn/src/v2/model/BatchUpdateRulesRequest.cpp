

#include "huaweicloud/cdn/v2/model/BatchUpdateRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchUpdateRulesRequest::BatchUpdateRulesRequest()
{
    rulesIsSet_ = false;
}

BatchUpdateRulesRequest::~BatchUpdateRulesRequest() = default;

void BatchUpdateRulesRequest::validate()
{
}

web::json::value BatchUpdateRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool BatchUpdateRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateRuleStatusRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::vector<UpdateRuleStatusRequest>& BatchUpdateRulesRequest::getRules()
{
    return rules_;
}

void BatchUpdateRulesRequest::setRules(const std::vector<UpdateRuleStatusRequest>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool BatchUpdateRulesRequest::rulesIsSet() const
{
    return rulesIsSet_;
}

void BatchUpdateRulesRequest::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


