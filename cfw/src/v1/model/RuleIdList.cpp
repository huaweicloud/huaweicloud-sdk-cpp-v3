

#include "huaweicloud/cfw/v1/model/RuleIdList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleIdList::RuleIdList()
{
    rulesIsSet_ = false;
}

RuleIdList::~RuleIdList() = default;

void RuleIdList::validate()
{
}

web::json::value RuleIdList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}

bool RuleIdList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::vector<RuleId>& RuleIdList::getRules()
{
    return rules_;
}

void RuleIdList::setRules(const std::vector<RuleId>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool RuleIdList::rulesIsSet() const
{
    return rulesIsSet_;
}

void RuleIdList::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


