

#include "huaweicloud/codeartscheck/v2/model/CheckParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckParametersRequest::CheckParametersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

CheckParametersRequest::~CheckParametersRequest() = default;

void CheckParametersRequest::validate()
{
}

web::json::value CheckParametersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(rulesetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleset_id")] = ModelBase::toJson(rulesetId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool CheckParametersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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


std::string CheckParametersRequest::getProjectId() const
{
    return projectId_;
}

void CheckParametersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckParametersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckParametersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckParametersRequest::getTaskId() const
{
    return taskId_;
}

void CheckParametersRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CheckParametersRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CheckParametersRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CheckParametersRequest::getRulesetId() const
{
    return rulesetId_;
}

void CheckParametersRequest::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool CheckParametersRequest::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void CheckParametersRequest::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

std::string CheckParametersRequest::getLanguage() const
{
    return language_;
}

void CheckParametersRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CheckParametersRequest::languageIsSet() const
{
    return languageIsSet_;
}

void CheckParametersRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


