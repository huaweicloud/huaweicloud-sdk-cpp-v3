

#include "huaweicloud/lts/v2/model/ListKeywordsAlarmRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListKeywordsAlarmRulesResponse::ListKeywordsAlarmRulesResponse()
{
    keywordsAlarmRulesIsSet_ = false;
}

ListKeywordsAlarmRulesResponse::~ListKeywordsAlarmRulesResponse() = default;

void ListKeywordsAlarmRulesResponse::validate()
{
}

web::json::value ListKeywordsAlarmRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordsAlarmRulesIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rules")] = ModelBase::toJson(keywordsAlarmRules_);
    }

    return val;
}

bool ListKeywordsAlarmRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<KeywordsAlarmRuleRespList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmRules(refVal);
        }
    }
    return ok;
}


std::vector<KeywordsAlarmRuleRespList>& ListKeywordsAlarmRulesResponse::getKeywordsAlarmRules()
{
    return keywordsAlarmRules_;
}

void ListKeywordsAlarmRulesResponse::setKeywordsAlarmRules(const std::vector<KeywordsAlarmRuleRespList>& value)
{
    keywordsAlarmRules_ = value;
    keywordsAlarmRulesIsSet_ = true;
}

bool ListKeywordsAlarmRulesResponse::keywordsAlarmRulesIsSet() const
{
    return keywordsAlarmRulesIsSet_;
}

void ListKeywordsAlarmRulesResponse::unsetkeywordsAlarmRules()
{
    keywordsAlarmRulesIsSet_ = false;
}

}
}
}
}
}


