

#include "huaweicloud/dbss/v1/model/ListAuditRuleRisksNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleRisksNewResponse::ListAuditRuleRisksNewResponse()
{
    rulesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    customizeTotal_ = 0;
    customizeTotalIsSet_ = false;
}

ListAuditRuleRisksNewResponse::~ListAuditRuleRisksNewResponse() = default;

void ListAuditRuleRisksNewResponse::validate()
{
}

web::json::value ListAuditRuleRisksNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(customizeTotalIsSet_) {
        val[utility::conversions::to_string_t("customize_total")] = ModelBase::toJson(customizeTotal_);
    }

    return val;
}
bool ListAuditRuleRisksNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleRiskResponse_rules> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("customize_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customize_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomizeTotal(refVal);
        }
    }
    return ok;
}


std::vector<RuleRiskResponse_rules>& ListAuditRuleRisksNewResponse::getRules()
{
    return rules_;
}

void ListAuditRuleRisksNewResponse::setRules(const std::vector<RuleRiskResponse_rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListAuditRuleRisksNewResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListAuditRuleRisksNewResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListAuditRuleRisksNewResponse::getTotal() const
{
    return total_;
}

void ListAuditRuleRisksNewResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditRuleRisksNewResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditRuleRisksNewResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListAuditRuleRisksNewResponse::getCustomizeTotal() const
{
    return customizeTotal_;
}

void ListAuditRuleRisksNewResponse::setCustomizeTotal(int32_t value)
{
    customizeTotal_ = value;
    customizeTotalIsSet_ = true;
}

bool ListAuditRuleRisksNewResponse::customizeTotalIsSet() const
{
    return customizeTotalIsSet_;
}

void ListAuditRuleRisksNewResponse::unsetcustomizeTotal()
{
    customizeTotalIsSet_ = false;
}

}
}
}
}
}


