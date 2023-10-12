

#include "huaweicloud/cfw/v1/model/ListRuleHitCountDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleHitCountDto::ListRuleHitCountDto()
{
    ruleIdsIsSet_ = false;
}

ListRuleHitCountDto::~ListRuleHitCountDto() = default;

void ListRuleHitCountDto::validate()
{
}

web::json::value ListRuleHitCountDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("rule_ids")] = ModelBase::toJson(ruleIds_);
    }

    return val;
}
bool ListRuleHitCountDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListRuleHitCountDto::getRuleIds()
{
    return ruleIds_;
}

void ListRuleHitCountDto::setRuleIds(const std::vector<std::string>& value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool ListRuleHitCountDto::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void ListRuleHitCountDto::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

}
}
}
}
}


