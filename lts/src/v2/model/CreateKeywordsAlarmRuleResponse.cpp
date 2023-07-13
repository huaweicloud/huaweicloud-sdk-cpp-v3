

#include "huaweicloud/lts/v2/model/CreateKeywordsAlarmRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateKeywordsAlarmRuleResponse::CreateKeywordsAlarmRuleResponse()
{
    keywordsAlarmRuleId_ = "";
    keywordsAlarmRuleIdIsSet_ = false;
}

CreateKeywordsAlarmRuleResponse::~CreateKeywordsAlarmRuleResponse() = default;

void CreateKeywordsAlarmRuleResponse::validate()
{
}

web::json::value CreateKeywordsAlarmRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordsAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_id")] = ModelBase::toJson(keywordsAlarmRuleId_);
    }

    return val;
}

bool CreateKeywordsAlarmRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmRuleId(refVal);
        }
    }
    return ok;
}

std::string CreateKeywordsAlarmRuleResponse::getKeywordsAlarmRuleId() const
{
    return keywordsAlarmRuleId_;
}

void CreateKeywordsAlarmRuleResponse::setKeywordsAlarmRuleId(const std::string& value)
{
    keywordsAlarmRuleId_ = value;
    keywordsAlarmRuleIdIsSet_ = true;
}

bool CreateKeywordsAlarmRuleResponse::keywordsAlarmRuleIdIsSet() const
{
    return keywordsAlarmRuleIdIsSet_;
}

void CreateKeywordsAlarmRuleResponse::unsetkeywordsAlarmRuleId()
{
    keywordsAlarmRuleIdIsSet_ = false;
}

}
}
}
}
}


