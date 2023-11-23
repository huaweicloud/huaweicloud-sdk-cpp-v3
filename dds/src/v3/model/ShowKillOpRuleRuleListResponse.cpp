

#include "huaweicloud/dds/v3/model/ShowKillOpRuleRuleListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowKillOpRuleRuleListResponse::ShowKillOpRuleRuleListResponse()
{
    rulesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowKillOpRuleRuleListResponse::~ShowKillOpRuleRuleListResponse() = default;

void ShowKillOpRuleRuleListResponse::validate()
{
}

web::json::value ShowKillOpRuleRuleListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowKillOpRuleRuleListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<KillOpRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<KillOpRule>& ShowKillOpRuleRuleListResponse::getRules()
{
    return rules_;
}

void ShowKillOpRuleRuleListResponse::setRules(const std::vector<KillOpRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ShowKillOpRuleRuleListResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ShowKillOpRuleRuleListResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ShowKillOpRuleRuleListResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowKillOpRuleRuleListResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowKillOpRuleRuleListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowKillOpRuleRuleListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


