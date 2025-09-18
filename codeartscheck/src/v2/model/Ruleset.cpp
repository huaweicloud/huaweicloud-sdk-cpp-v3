

#include "huaweicloud/codeartscheck/v2/model/Ruleset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




Ruleset::Ruleset()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    isDefault_ = "";
    isDefaultIsSet_ = false;
    ruleIds_ = "";
    ruleIdsIsSet_ = false;
    uncheckIds_ = "";
    uncheckIdsIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    customAttributesIsSet_ = false;
}

Ruleset::~Ruleset() = default;

void Ruleset::validate()
{
}

web::json::value Ruleset::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("rule_ids")] = ModelBase::toJson(ruleIds_);
    }
    if(uncheckIdsIsSet_) {
        val[utility::conversions::to_string_t("uncheck_ids")] = ModelBase::toJson(uncheckIds_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(customAttributesIsSet_) {
        val[utility::conversions::to_string_t("custom_attributes")] = ModelBase::toJson(customAttributes_);
    }

    return val;
}
bool Ruleset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uncheck_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uncheck_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUncheckIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("custom_attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_attributes"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomAttributes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomAttributes(refVal);
        }
    }
    return ok;
}


std::string Ruleset::getProjectId() const
{
    return projectId_;
}

void Ruleset::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Ruleset::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Ruleset::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Ruleset::getTemplateName() const
{
    return templateName_;
}

void Ruleset::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool Ruleset::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void Ruleset::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string Ruleset::getLanguage() const
{
    return language_;
}

void Ruleset::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool Ruleset::languageIsSet() const
{
    return languageIsSet_;
}

void Ruleset::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string Ruleset::getIsDefault() const
{
    return isDefault_;
}

void Ruleset::setIsDefault(const std::string& value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool Ruleset::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void Ruleset::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string Ruleset::getRuleIds() const
{
    return ruleIds_;
}

void Ruleset::setRuleIds(const std::string& value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool Ruleset::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void Ruleset::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

std::string Ruleset::getUncheckIds() const
{
    return uncheckIds_;
}

void Ruleset::setUncheckIds(const std::string& value)
{
    uncheckIds_ = value;
    uncheckIdsIsSet_ = true;
}

bool Ruleset::uncheckIdsIsSet() const
{
    return uncheckIdsIsSet_;
}

void Ruleset::unsetuncheckIds()
{
    uncheckIdsIsSet_ = false;
}

std::string Ruleset::getTemplateId() const
{
    return templateId_;
}

void Ruleset::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool Ruleset::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void Ruleset::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::vector<CustomAttributes>& Ruleset::getCustomAttributes()
{
    return customAttributes_;
}

void Ruleset::setCustomAttributes(const std::vector<CustomAttributes>& value)
{
    customAttributes_ = value;
    customAttributesIsSet_ = true;
}

bool Ruleset::customAttributesIsSet() const
{
    return customAttributesIsSet_;
}

void Ruleset::unsetcustomAttributes()
{
    customAttributesIsSet_ = false;
}

}
}
}
}
}


