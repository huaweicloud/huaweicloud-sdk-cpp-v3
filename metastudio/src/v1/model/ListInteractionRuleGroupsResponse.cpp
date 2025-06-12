

#include "huaweicloud/metastudio/v1/model/ListInteractionRuleGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListInteractionRuleGroupsResponse::ListInteractionRuleGroupsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    interactionRuleGroupsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInteractionRuleGroupsResponse::~ListInteractionRuleGroupsResponse() = default;

void ListInteractionRuleGroupsResponse::validate()
{
}

web::json::value ListInteractionRuleGroupsResponse::toJson() const
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
bool ListInteractionRuleGroupsResponse::fromJson(const web::json::value& val)
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
            std::vector<InteractionRuleGroupDetail> refVal;
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


int32_t ListInteractionRuleGroupsResponse::getCount() const
{
    return count_;
}

void ListInteractionRuleGroupsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInteractionRuleGroupsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInteractionRuleGroupsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<InteractionRuleGroupDetail>& ListInteractionRuleGroupsResponse::getInteractionRuleGroups()
{
    return interactionRuleGroups_;
}

void ListInteractionRuleGroupsResponse::setInteractionRuleGroups(const std::vector<InteractionRuleGroupDetail>& value)
{
    interactionRuleGroups_ = value;
    interactionRuleGroupsIsSet_ = true;
}

bool ListInteractionRuleGroupsResponse::interactionRuleGroupsIsSet() const
{
    return interactionRuleGroupsIsSet_;
}

void ListInteractionRuleGroupsResponse::unsetinteractionRuleGroups()
{
    interactionRuleGroupsIsSet_ = false;
}

std::string ListInteractionRuleGroupsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInteractionRuleGroupsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInteractionRuleGroupsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInteractionRuleGroupsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


