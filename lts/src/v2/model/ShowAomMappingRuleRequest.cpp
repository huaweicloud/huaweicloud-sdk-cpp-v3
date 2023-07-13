

#include "huaweicloud/lts/v2/model/ShowAomMappingRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowAomMappingRuleRequest::ShowAomMappingRuleRequest()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

ShowAomMappingRuleRequest::~ShowAomMappingRuleRequest() = default;

void ShowAomMappingRuleRequest::validate()
{
}

web::json::value ShowAomMappingRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }

    return val;
}

bool ShowAomMappingRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    return ok;
}

std::string ShowAomMappingRuleRequest::getRuleId() const
{
    return ruleId_;
}

void ShowAomMappingRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowAomMappingRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowAomMappingRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


