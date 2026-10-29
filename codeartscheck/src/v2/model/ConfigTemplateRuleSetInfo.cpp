

#include "huaweicloud/codeartscheck/v2/model/ConfigTemplateRuleSetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ConfigTemplateRuleSetInfo::ConfigTemplateRuleSetInfo()
{
    language_ = "";
    languageIsSet_ = false;
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
}

ConfigTemplateRuleSetInfo::~ConfigTemplateRuleSetInfo() = default;

void ConfigTemplateRuleSetInfo::validate()
{
}

web::json::value ConfigTemplateRuleSetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleSetId")] = ModelBase::toJson(ruleSetId_);
    }

    return val;
}
bool ConfigTemplateRuleSetInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleSetId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleSetId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSetId(refVal);
        }
    }
    return ok;
}


std::string ConfigTemplateRuleSetInfo::getLanguage() const
{
    return language_;
}

void ConfigTemplateRuleSetInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ConfigTemplateRuleSetInfo::languageIsSet() const
{
    return languageIsSet_;
}

void ConfigTemplateRuleSetInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ConfigTemplateRuleSetInfo::getRuleSetId() const
{
    return ruleSetId_;
}

void ConfigTemplateRuleSetInfo::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool ConfigTemplateRuleSetInfo::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void ConfigTemplateRuleSetInfo::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

}
}
}
}
}


