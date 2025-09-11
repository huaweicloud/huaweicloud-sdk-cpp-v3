

#include "huaweicloud/dbss/v1/model/ListAuditRuleRisksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleRisksResponse::ListAuditRuleRisksResponse()
{
    rulesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    customizeTotal_ = 0;
    customizeTotalIsSet_ = false;
}

ListAuditRuleRisksResponse::~ListAuditRuleRisksResponse() = default;

void ListAuditRuleRisksResponse::validate()
{
}

web::json::value ListAuditRuleRisksResponse::toJson() const
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
bool ListAuditRuleRisksResponse::fromJson(const web::json::value& val)
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


std::vector<RuleRiskResponse_rules>& ListAuditRuleRisksResponse::getRules()
{
    return rules_;
}

void ListAuditRuleRisksResponse::setRules(const std::vector<RuleRiskResponse_rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListAuditRuleRisksResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListAuditRuleRisksResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListAuditRuleRisksResponse::getTotal() const
{
    return total_;
}

void ListAuditRuleRisksResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditRuleRisksResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditRuleRisksResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListAuditRuleRisksResponse::getCustomizeTotal() const
{
    return customizeTotal_;
}

void ListAuditRuleRisksResponse::setCustomizeTotal(int32_t value)
{
    customizeTotal_ = value;
    customizeTotalIsSet_ = true;
}

bool ListAuditRuleRisksResponse::customizeTotalIsSet() const
{
    return customizeTotalIsSet_;
}

void ListAuditRuleRisksResponse::unsetcustomizeTotal()
{
    customizeTotalIsSet_ = false;
}

}
}
}
}
}


