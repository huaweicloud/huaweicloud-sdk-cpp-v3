

#include "huaweicloud/iotda/v5/model/ListRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListRulesResponse::ListRulesResponse()
{
    marker_ = "";
    markerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
    rulesIsSet_ = false;
}

ListRulesResponse::~ListRulesResponse() = default;

void ListRulesResponse::validate()
{
}

web::json::value ListRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool ListRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string ListRulesResponse::getMarker() const
{
    return marker_;
}

void ListRulesResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRulesResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListRulesResponse::unsetmarker()
{
    markerIsSet_ = false;
}

int64_t ListRulesResponse::getCount() const
{
    return count_;
}

void ListRulesResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListRulesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListRulesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<RuleResponse>& ListRulesResponse::getRules()
{
    return rules_;
}

void ListRulesResponse::setRules(const std::vector<RuleResponse>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListRulesResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListRulesResponse::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


