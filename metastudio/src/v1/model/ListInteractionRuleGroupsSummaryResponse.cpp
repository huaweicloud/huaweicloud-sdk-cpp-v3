

#include "huaweicloud/metastudio/v1/model/ListInteractionRuleGroupsSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInteractionRuleGroupsSummaryResponse::ListInteractionRuleGroupsSummaryResponse()
{
    count_ = 0;
    countIsSet_ = false;
    interactionRuleGroupsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInteractionRuleGroupsSummaryResponse::~ListInteractionRuleGroupsSummaryResponse() = default;

void ListInteractionRuleGroupsSummaryResponse::validate()
{
}

web::json::value ListInteractionRuleGroupsSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(interactionRuleGroupsIsSet_) {
        val[utility::conversions::to_string_t("interaction_rule_groups")] = ModelBase::toJson(interactionRuleGroups_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListInteractionRuleGroupsSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interaction_rule_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_rule_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<InteractionRuleGroupSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionRuleGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListInteractionRuleGroupsSummaryResponse::getCount() const
{
    return count_;
}

void ListInteractionRuleGroupsSummaryResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInteractionRuleGroupsSummaryResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<InteractionRuleGroupSummary>& ListInteractionRuleGroupsSummaryResponse::getInteractionRuleGroups()
{
    return interactionRuleGroups_;
}

void ListInteractionRuleGroupsSummaryResponse::setInteractionRuleGroups(const std::vector<InteractionRuleGroupSummary>& value)
{
    interactionRuleGroups_ = value;
    interactionRuleGroupsIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryResponse::interactionRuleGroupsIsSet() const
{
    return interactionRuleGroupsIsSet_;
}

void ListInteractionRuleGroupsSummaryResponse::unsetinteractionRuleGroups()
{
    interactionRuleGroupsIsSet_ = false;
}

std::string ListInteractionRuleGroupsSummaryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInteractionRuleGroupsSummaryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInteractionRuleGroupsSummaryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInteractionRuleGroupsSummaryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


