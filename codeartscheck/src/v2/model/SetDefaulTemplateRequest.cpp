

#include "huaweicloud/codeartscheck/v2/model/SetDefaulTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




SetDefaulTemplateRequest::SetDefaulTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

SetDefaulTemplateRequest::~SetDefaulTemplateRequest() = default;

void SetDefaulTemplateRequest::validate()
{
}

web::json::value SetDefaulTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(rulesetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleset_id")] = ModelBase::toJson(rulesetId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool SetDefaulTemplateRequest::fromJson(const web::json::value& val)
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


std::string SetDefaulTemplateRequest::getProjectId() const
{
    return projectId_;
}

void SetDefaulTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SetDefaulTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SetDefaulTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SetDefaulTemplateRequest::getRulesetId() const
{
    return rulesetId_;
}

void SetDefaulTemplateRequest::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool SetDefaulTemplateRequest::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void SetDefaulTemplateRequest::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

std::string SetDefaulTemplateRequest::getLanguage() const
{
    return language_;
}

void SetDefaulTemplateRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool SetDefaulTemplateRequest::languageIsSet() const
{
    return languageIsSet_;
}

void SetDefaulTemplateRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


