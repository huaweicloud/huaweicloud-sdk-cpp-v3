

#include "huaweicloud/codeartscheck/v2/model/CheckRulesetParametersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckRulesetParametersRequest::CheckRulesetParametersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

CheckRulesetParametersRequest::~CheckRulesetParametersRequest() = default;

void CheckRulesetParametersRequest::validate()
{
}

web::json::value CheckRulesetParametersRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool CheckRulesetParametersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string CheckRulesetParametersRequest::getProjectId() const
{
    return projectId_;
}

void CheckRulesetParametersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckRulesetParametersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckRulesetParametersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckRulesetParametersRequest::getTaskId() const
{
    return taskId_;
}

void CheckRulesetParametersRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CheckRulesetParametersRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CheckRulesetParametersRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CheckRulesetParametersRequest::getRulesetId() const
{
    return rulesetId_;
}

void CheckRulesetParametersRequest::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool CheckRulesetParametersRequest::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void CheckRulesetParametersRequest::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

std::string CheckRulesetParametersRequest::getLanguage() const
{
    return language_;
}

void CheckRulesetParametersRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CheckRulesetParametersRequest::languageIsSet() const
{
    return languageIsSet_;
}

void CheckRulesetParametersRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

int32_t CheckRulesetParametersRequest::getOffset() const
{
    return offset_;
}

void CheckRulesetParametersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool CheckRulesetParametersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void CheckRulesetParametersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t CheckRulesetParametersRequest::getLimit() const
{
    return limit_;
}

void CheckRulesetParametersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CheckRulesetParametersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void CheckRulesetParametersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


