

#include "huaweicloud/codeartscheck/v2/model/ShowTaskCmetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskCmetricsResponse::ShowTaskCmetricsResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    gitBranch_ = "";
    gitBranchIsSet_ = false;
    lastCheckTime_ = "";
    lastCheckTimeIsSet_ = false;
    lastExecTime_ = "";
    lastExecTimeIsSet_ = false;
    checkType_ = "";
    checkTypeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    metricInfoIsSet_ = false;
}

ShowTaskCmetricsResponse::~ShowTaskCmetricsResponse() = default;

void ShowTaskCmetricsResponse::validate()
{
}

web::json::value ShowTaskCmetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(gitBranchIsSet_) {
        val[utility::conversions::to_string_t("git_branch")] = ModelBase::toJson(gitBranch_);
    }
    if(lastCheckTimeIsSet_) {
        val[utility::conversions::to_string_t("last_check_time")] = ModelBase::toJson(lastCheckTime_);
    }
    if(lastExecTimeIsSet_) {
        val[utility::conversions::to_string_t("last_exec_time")] = ModelBase::toJson(lastExecTime_);
    }
    if(checkTypeIsSet_) {
        val[utility::conversions::to_string_t("check_type")] = ModelBase::toJson(checkType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(metricInfoIsSet_) {
        val[utility::conversions::to_string_t("metric_info")] = ModelBase::toJson(metricInfo_);
    }

    return val;
}
bool ShowTaskCmetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_check_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_check_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCheckTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_exec_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_info"));
        if(!fieldValue.is_null())
        {
            MetricInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricInfo(refVal);
        }
    }
    return ok;
}


std::string ShowTaskCmetricsResponse::getTaskId() const
{
    return taskId_;
}

void ShowTaskCmetricsResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskCmetricsResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskCmetricsResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getTaskName() const
{
    return taskName_;
}

void ShowTaskCmetricsResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ShowTaskCmetricsResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ShowTaskCmetricsResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowTaskCmetricsResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowTaskCmetricsResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowTaskCmetricsResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getGitUrl() const
{
    return gitUrl_;
}

void ShowTaskCmetricsResponse::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool ShowTaskCmetricsResponse::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void ShowTaskCmetricsResponse::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getGitBranch() const
{
    return gitBranch_;
}

void ShowTaskCmetricsResponse::setGitBranch(const std::string& value)
{
    gitBranch_ = value;
    gitBranchIsSet_ = true;
}

bool ShowTaskCmetricsResponse::gitBranchIsSet() const
{
    return gitBranchIsSet_;
}

void ShowTaskCmetricsResponse::unsetgitBranch()
{
    gitBranchIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getLastCheckTime() const
{
    return lastCheckTime_;
}

void ShowTaskCmetricsResponse::setLastCheckTime(const std::string& value)
{
    lastCheckTime_ = value;
    lastCheckTimeIsSet_ = true;
}

bool ShowTaskCmetricsResponse::lastCheckTimeIsSet() const
{
    return lastCheckTimeIsSet_;
}

void ShowTaskCmetricsResponse::unsetlastCheckTime()
{
    lastCheckTimeIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getLastExecTime() const
{
    return lastExecTime_;
}

void ShowTaskCmetricsResponse::setLastExecTime(const std::string& value)
{
    lastExecTime_ = value;
    lastExecTimeIsSet_ = true;
}

bool ShowTaskCmetricsResponse::lastExecTimeIsSet() const
{
    return lastExecTimeIsSet_;
}

void ShowTaskCmetricsResponse::unsetlastExecTime()
{
    lastExecTimeIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getCheckType() const
{
    return checkType_;
}

void ShowTaskCmetricsResponse::setCheckType(const std::string& value)
{
    checkType_ = value;
    checkTypeIsSet_ = true;
}

bool ShowTaskCmetricsResponse::checkTypeIsSet() const
{
    return checkTypeIsSet_;
}

void ShowTaskCmetricsResponse::unsetcheckType()
{
    checkTypeIsSet_ = false;
}

std::string ShowTaskCmetricsResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowTaskCmetricsResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowTaskCmetricsResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowTaskCmetricsResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

MetricInfo ShowTaskCmetricsResponse::getMetricInfo() const
{
    return metricInfo_;
}

void ShowTaskCmetricsResponse::setMetricInfo(const MetricInfo& value)
{
    metricInfo_ = value;
    metricInfoIsSet_ = true;
}

bool ShowTaskCmetricsResponse::metricInfoIsSet() const
{
    return metricInfoIsSet_;
}

void ShowTaskCmetricsResponse::unsetmetricInfo()
{
    metricInfoIsSet_ = false;
}

}
}
}
}
}


