

#include "huaweicloud/codeartscheck/v2/model/UpdateTaskRulesetItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateTaskRulesetItem::UpdateTaskRulesetItem()
{
    language_ = "";
    languageIsSet_ = false;
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
    ifUse_ = "";
    ifUseIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateTaskRulesetItem::~UpdateTaskRulesetItem() = default;

void UpdateTaskRulesetItem::validate()
{
}

web::json::value UpdateTaskRulesetItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("rule_set_id")] = ModelBase::toJson(ruleSetId_);
    }
    if(ifUseIsSet_) {
        val[utility::conversions::to_string_t("if_use")] = ModelBase::toJson(ifUse_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateTaskRulesetItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("if_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("if_use"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIfUse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateTaskRulesetItem::getLanguage() const
{
    return language_;
}

void UpdateTaskRulesetItem::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateTaskRulesetItem::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateTaskRulesetItem::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateTaskRulesetItem::getRuleSetId() const
{
    return ruleSetId_;
}

void UpdateTaskRulesetItem::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool UpdateTaskRulesetItem::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void UpdateTaskRulesetItem::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

std::string UpdateTaskRulesetItem::getIfUse() const
{
    return ifUse_;
}

void UpdateTaskRulesetItem::setIfUse(const std::string& value)
{
    ifUse_ = value;
    ifUseIsSet_ = true;
}

bool UpdateTaskRulesetItem::ifUseIsSet() const
{
    return ifUseIsSet_;
}

void UpdateTaskRulesetItem::unsetifUse()
{
    ifUseIsSet_ = false;
}

std::string UpdateTaskRulesetItem::getStatus() const
{
    return status_;
}

void UpdateTaskRulesetItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTaskRulesetItem::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTaskRulesetItem::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


