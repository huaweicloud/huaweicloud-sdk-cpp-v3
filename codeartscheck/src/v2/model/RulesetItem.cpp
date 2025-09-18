

#include "huaweicloud/codeartscheck/v2/model/RulesetItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RulesetItem::RulesetItem()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    templateCreateTime_ = "";
    templateCreateTimeIsSet_ = false;
    isUsed_ = "";
    isUsedIsSet_ = false;
    ruleIds_ = "";
    ruleIdsIsSet_ = false;
    isDefault_ = "";
    isDefaultIsSet_ = false;
    isDevcloudProjectDefault_ = "";
    isDevcloudProjectDefaultIsSet_ = false;
    isDefaultTemplate_ = "";
    isDefaultTemplateIsSet_ = false;
}

RulesetItem::~RulesetItem() = default;

void RulesetItem::validate()
{
}

web::json::value RulesetItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(templateCreateTimeIsSet_) {
        val[utility::conversions::to_string_t("template_create_time")] = ModelBase::toJson(templateCreateTime_);
    }
    if(isUsedIsSet_) {
        val[utility::conversions::to_string_t("is_used")] = ModelBase::toJson(isUsed_);
    }
    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("rule_ids")] = ModelBase::toJson(ruleIds_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(isDevcloudProjectDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_devcloud_project_default")] = ModelBase::toJson(isDevcloudProjectDefault_);
    }
    if(isDefaultTemplateIsSet_) {
        val[utility::conversions::to_string_t("is_default_template")] = ModelBase::toJson(isDefaultTemplate_);
    }

    return val;
}
bool RulesetItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUsed(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_devcloud_project_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_devcloud_project_default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDevcloudProjectDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default_template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefaultTemplate(refVal);
        }
    }
    return ok;
}


std::string RulesetItem::getTemplateId() const
{
    return templateId_;
}

void RulesetItem::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool RulesetItem::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void RulesetItem::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string RulesetItem::getLanguage() const
{
    return language_;
}

void RulesetItem::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RulesetItem::languageIsSet() const
{
    return languageIsSet_;
}

void RulesetItem::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string RulesetItem::getTemplateName() const
{
    return templateName_;
}

void RulesetItem::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool RulesetItem::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void RulesetItem::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string RulesetItem::getCreatorId() const
{
    return creatorId_;
}

void RulesetItem::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool RulesetItem::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void RulesetItem::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string RulesetItem::getCreatorName() const
{
    return creatorName_;
}

void RulesetItem::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool RulesetItem::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void RulesetItem::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string RulesetItem::getTemplateCreateTime() const
{
    return templateCreateTime_;
}

void RulesetItem::setTemplateCreateTime(const std::string& value)
{
    templateCreateTime_ = value;
    templateCreateTimeIsSet_ = true;
}

bool RulesetItem::templateCreateTimeIsSet() const
{
    return templateCreateTimeIsSet_;
}

void RulesetItem::unsettemplateCreateTime()
{
    templateCreateTimeIsSet_ = false;
}

std::string RulesetItem::getIsUsed() const
{
    return isUsed_;
}

void RulesetItem::setIsUsed(const std::string& value)
{
    isUsed_ = value;
    isUsedIsSet_ = true;
}

bool RulesetItem::isUsedIsSet() const
{
    return isUsedIsSet_;
}

void RulesetItem::unsetisUsed()
{
    isUsedIsSet_ = false;
}

std::string RulesetItem::getRuleIds() const
{
    return ruleIds_;
}

void RulesetItem::setRuleIds(const std::string& value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool RulesetItem::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void RulesetItem::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

std::string RulesetItem::getIsDefault() const
{
    return isDefault_;
}

void RulesetItem::setIsDefault(const std::string& value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool RulesetItem::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void RulesetItem::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string RulesetItem::getIsDevcloudProjectDefault() const
{
    return isDevcloudProjectDefault_;
}

void RulesetItem::setIsDevcloudProjectDefault(const std::string& value)
{
    isDevcloudProjectDefault_ = value;
    isDevcloudProjectDefaultIsSet_ = true;
}

bool RulesetItem::isDevcloudProjectDefaultIsSet() const
{
    return isDevcloudProjectDefaultIsSet_;
}

void RulesetItem::unsetisDevcloudProjectDefault()
{
    isDevcloudProjectDefaultIsSet_ = false;
}

std::string RulesetItem::getIsDefaultTemplate() const
{
    return isDefaultTemplate_;
}

void RulesetItem::setIsDefaultTemplate(const std::string& value)
{
    isDefaultTemplate_ = value;
    isDefaultTemplateIsSet_ = true;
}

bool RulesetItem::isDefaultTemplateIsSet() const
{
    return isDefaultTemplateIsSet_;
}

void RulesetItem::unsetisDefaultTemplate()
{
    isDefaultTemplateIsSet_ = false;
}

}
}
}
}
}


