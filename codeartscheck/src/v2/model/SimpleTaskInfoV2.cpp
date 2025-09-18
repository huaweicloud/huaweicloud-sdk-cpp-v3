

#include "huaweicloud/codeartscheck/v2/model/SimpleTaskInfoV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




SimpleTaskInfoV2::SimpleTaskInfoV2()
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
    createdAt_ = "";
    createdAtIsSet_ = false;
    lastCheckTime_ = "";
    lastCheckTimeIsSet_ = false;
}

SimpleTaskInfoV2::~SimpleTaskInfoV2() = default;

void SimpleTaskInfoV2::validate()
{
}

web::json::value SimpleTaskInfoV2::toJson() const
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(lastCheckTimeIsSet_) {
        val[utility::conversions::to_string_t("last_check_time")] = ModelBase::toJson(lastCheckTime_);
    }

    return val;
}
bool SimpleTaskInfoV2::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    return ok;
}


std::string SimpleTaskInfoV2::getTaskId() const
{
    return taskId_;
}

void SimpleTaskInfoV2::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool SimpleTaskInfoV2::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void SimpleTaskInfoV2::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string SimpleTaskInfoV2::getTaskName() const
{
    return taskName_;
}

void SimpleTaskInfoV2::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool SimpleTaskInfoV2::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void SimpleTaskInfoV2::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string SimpleTaskInfoV2::getCreatorId() const
{
    return creatorId_;
}

void SimpleTaskInfoV2::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool SimpleTaskInfoV2::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void SimpleTaskInfoV2::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string SimpleTaskInfoV2::getGitUrl() const
{
    return gitUrl_;
}

void SimpleTaskInfoV2::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool SimpleTaskInfoV2::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void SimpleTaskInfoV2::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string SimpleTaskInfoV2::getGitBranch() const
{
    return gitBranch_;
}

void SimpleTaskInfoV2::setGitBranch(const std::string& value)
{
    gitBranch_ = value;
    gitBranchIsSet_ = true;
}

bool SimpleTaskInfoV2::gitBranchIsSet() const
{
    return gitBranchIsSet_;
}

void SimpleTaskInfoV2::unsetgitBranch()
{
    gitBranchIsSet_ = false;
}

std::string SimpleTaskInfoV2::getCreatedAt() const
{
    return createdAt_;
}

void SimpleTaskInfoV2::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SimpleTaskInfoV2::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SimpleTaskInfoV2::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SimpleTaskInfoV2::getLastCheckTime() const
{
    return lastCheckTime_;
}

void SimpleTaskInfoV2::setLastCheckTime(const std::string& value)
{
    lastCheckTime_ = value;
    lastCheckTimeIsSet_ = true;
}

bool SimpleTaskInfoV2::lastCheckTimeIsSet() const
{
    return lastCheckTimeIsSet_;
}

void SimpleTaskInfoV2::unsetlastCheckTime()
{
    lastCheckTimeIsSet_ = false;
}

}
}
}
}
}


