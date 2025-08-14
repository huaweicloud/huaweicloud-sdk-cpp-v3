

#include "huaweicloud/iotda/v5/model/ListRoutingRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRoutingRulesResponse::ListRoutingRulesResponse()
{
    rulesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListRoutingRulesResponse::~ListRoutingRulesResponse() = default;

void ListRoutingRulesResponse::validate()
{
}

web::json::value ListRoutingRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListRoutingRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<RoutingRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
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


std::vector<RoutingRule>& ListRoutingRulesResponse::getRules()
{
    return rules_;
}

void ListRoutingRulesResponse::setRules(const std::vector<RoutingRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListRoutingRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListRoutingRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListRoutingRulesResponse::getCount() const
{
    return count_;
}

void ListRoutingRulesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRoutingRulesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRoutingRulesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListRoutingRulesResponse::getMarker() const
{
    return marker_;
}

void ListRoutingRulesResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRoutingRulesResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListRoutingRulesResponse::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


