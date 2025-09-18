

#include "huaweicloud/codeartscheck/v2/model/TaskRulesetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskRulesetInfo::TaskRulesetInfo()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

TaskRulesetInfo::~TaskRulesetInfo() = default;

void TaskRulesetInfo::validate()
{
}

web::json::value TaskRulesetInfo::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool TaskRulesetInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string TaskRulesetInfo::getTemplateId() const
{
    return templateId_;
}

void TaskRulesetInfo::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TaskRulesetInfo::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TaskRulesetInfo::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string TaskRulesetInfo::getLanguage() const
{
    return language_;
}

void TaskRulesetInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool TaskRulesetInfo::languageIsSet() const
{
    return languageIsSet_;
}

void TaskRulesetInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string TaskRulesetInfo::getTemplateName() const
{
    return templateName_;
}

void TaskRulesetInfo::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool TaskRulesetInfo::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void TaskRulesetInfo::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string TaskRulesetInfo::getType() const
{
    return type_;
}

void TaskRulesetInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TaskRulesetInfo::typeIsSet() const
{
    return typeIsSet_;
}

void TaskRulesetInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string TaskRulesetInfo::getStatus() const
{
    return status_;
}

void TaskRulesetInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskRulesetInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TaskRulesetInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


