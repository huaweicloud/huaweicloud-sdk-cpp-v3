

#include "huaweicloud/codeartscheck/v2/model/RuleConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RuleConfig::RuleConfig()
{
    id_ = 0;
    idIsSet_ = false;
    ruleId_ = 0;
    ruleIdIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    optionValue_ = "";
    optionValueIsSet_ = false;
    optionKey_ = "";
    optionKeyIsSet_ = false;
    optionName_ = "";
    optionNameIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

RuleConfig::~RuleConfig() = default;

void RuleConfig::validate()
{
}

web::json::value RuleConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(optionValueIsSet_) {
        val[utility::conversions::to_string_t("option_value")] = ModelBase::toJson(optionValue_);
    }
    if(optionKeyIsSet_) {
        val[utility::conversions::to_string_t("option_key")] = ModelBase::toJson(optionKey_);
    }
    if(optionNameIsSet_) {
        val[utility::conversions::to_string_t("option_name")] = ModelBase::toJson(optionName_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool RuleConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("option_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("option_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("option_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


int32_t RuleConfig::getId() const
{
    return id_;
}

void RuleConfig::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleConfig::idIsSet() const
{
    return idIsSet_;
}

void RuleConfig::unsetid()
{
    idIsSet_ = false;
}

int32_t RuleConfig::getRuleId() const
{
    return ruleId_;
}

void RuleConfig::setRuleId(int32_t value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleConfig::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleConfig::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string RuleConfig::getDefaultValue() const
{
    return defaultValue_;
}

void RuleConfig::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool RuleConfig::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void RuleConfig::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string RuleConfig::getOptionValue() const
{
    return optionValue_;
}

void RuleConfig::setOptionValue(const std::string& value)
{
    optionValue_ = value;
    optionValueIsSet_ = true;
}

bool RuleConfig::optionValueIsSet() const
{
    return optionValueIsSet_;
}

void RuleConfig::unsetoptionValue()
{
    optionValueIsSet_ = false;
}

std::string RuleConfig::getOptionKey() const
{
    return optionKey_;
}

void RuleConfig::setOptionKey(const std::string& value)
{
    optionKey_ = value;
    optionKeyIsSet_ = true;
}

bool RuleConfig::optionKeyIsSet() const
{
    return optionKeyIsSet_;
}

void RuleConfig::unsetoptionKey()
{
    optionKeyIsSet_ = false;
}

std::string RuleConfig::getOptionName() const
{
    return optionName_;
}

void RuleConfig::setOptionName(const std::string& value)
{
    optionName_ = value;
    optionNameIsSet_ = true;
}

bool RuleConfig::optionNameIsSet() const
{
    return optionNameIsSet_;
}

void RuleConfig::unsetoptionName()
{
    optionNameIsSet_ = false;
}

std::string RuleConfig::getTemplateId() const
{
    return templateId_;
}

void RuleConfig::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool RuleConfig::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void RuleConfig::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string RuleConfig::getDescription() const
{
    return description_;
}

void RuleConfig::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RuleConfig::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RuleConfig::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


