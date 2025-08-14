

#include "huaweicloud/iotda/v5/model/ListRuleActionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRuleActionsResponse::ListRuleActionsResponse()
{
    actionsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListRuleActionsResponse::~ListRuleActionsResponse() = default;

void ListRuleActionsResponse::validate()
{
}

web::json::value ListRuleActionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListRuleActionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<RoutingRuleAction> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::vector<RoutingRuleAction>& ListRuleActionsResponse::getActions()
{
    return actions_;
}

void ListRuleActionsResponse::setActions(const std::vector<RoutingRuleAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ListRuleActionsResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void ListRuleActionsResponse::unsetactions()
{
    actionsIsSet_ = false;
}

int32_t ListRuleActionsResponse::getCount() const
{
    return count_;
}

void ListRuleActionsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRuleActionsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRuleActionsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListRuleActionsResponse::getMarker() const
{
    return marker_;
}

void ListRuleActionsResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRuleActionsResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListRuleActionsResponse::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


