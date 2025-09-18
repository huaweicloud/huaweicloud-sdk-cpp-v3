

#include "huaweicloud/codeartscheck/v2/model/RuleSetV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RuleSetV2::RuleSetV2()
{
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

RuleSetV2::~RuleSetV2() = default;

void RuleSetV2::validate()
{
}

web::json::value RuleSetV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleset_id")] = ModelBase::toJson(rulesetId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool RuleSetV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ruleset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRulesetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string RuleSetV2::getRulesetId() const
{
    return rulesetId_;
}

void RuleSetV2::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool RuleSetV2::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void RuleSetV2::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

std::string RuleSetV2::getLanguage() const
{
    return language_;
}

void RuleSetV2::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RuleSetV2::languageIsSet() const
{
    return languageIsSet_;
}

void RuleSetV2::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


