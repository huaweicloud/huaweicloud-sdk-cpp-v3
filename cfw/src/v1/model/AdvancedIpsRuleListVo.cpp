

#include "huaweicloud/cfw/v1/model/AdvancedIpsRuleListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AdvancedIpsRuleListVo::AdvancedIpsRuleListVo()
{
    advancedIpsRulesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

AdvancedIpsRuleListVo::~AdvancedIpsRuleListVo() = default;

void AdvancedIpsRuleListVo::validate()
{
}

web::json::value AdvancedIpsRuleListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(advancedIpsRulesIsSet_) {
        val[utility::conversions::to_string_t("advanced_ips_rules")] = ModelBase::toJson(advancedIpsRules_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool AdvancedIpsRuleListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("advanced_ips_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_ips_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<AdvancedIpsRuleVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedIpsRules(refVal);
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


std::vector<AdvancedIpsRuleVo>& AdvancedIpsRuleListVo::getAdvancedIpsRules()
{
    return advancedIpsRules_;
}

void AdvancedIpsRuleListVo::setAdvancedIpsRules(const std::vector<AdvancedIpsRuleVo>& value)
{
    advancedIpsRules_ = value;
    advancedIpsRulesIsSet_ = true;
}

bool AdvancedIpsRuleListVo::advancedIpsRulesIsSet() const
{
    return advancedIpsRulesIsSet_;
}

void AdvancedIpsRuleListVo::unsetadvancedIpsRules()
{
    advancedIpsRulesIsSet_ = false;
}

int32_t AdvancedIpsRuleListVo::getTotal() const
{
    return total_;
}

void AdvancedIpsRuleListVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AdvancedIpsRuleListVo::totalIsSet() const
{
    return totalIsSet_;
}

void AdvancedIpsRuleListVo::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


