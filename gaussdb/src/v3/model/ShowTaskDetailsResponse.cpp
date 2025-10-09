

#include "huaweicloud/gaussdb/v3/model/ShowTaskDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaskDetailsResponse::ShowTaskDetailsResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subTaskListIsSet_ = false;
}

ShowTaskDetailsResponse::~ShowTaskDetailsResponse() = default;

void ShowTaskDetailsResponse::validate()
{
}

web::json::value ShowTaskDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subTaskListIsSet_) {
        val[utility::conversions::to_string_t("sub_task_list")] = ModelBase::toJson(subTaskList_);
    }

    return val;
}
bool ShowTaskDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sub_task_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SubTaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskList(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDetailsResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowTaskDetailsResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTaskDetailsResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTaskDetailsResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTaskDetailsResponse::getInstanceName() const
{
    return instanceName_;
}

void ShowTaskDetailsResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowTaskDetailsResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowTaskDetailsResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowTaskDetailsResponse::getJobId() const
{
    return jobId_;
}

void ShowTaskDetailsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTaskDetailsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTaskDetailsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTaskDetailsResponse::getJobName() const
{
    return jobName_;
}

void ShowTaskDetailsResponse::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowTaskDetailsResponse::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowTaskDetailsResponse::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ShowTaskDetailsResponse::getStatus() const
{
    return status_;
}

void ShowTaskDetailsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskDetailsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskDetailsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<SubTaskInfo>& ShowTaskDetailsResponse::getSubTaskList()
{
    return subTaskList_;
}

void ShowTaskDetailsResponse::setSubTaskList(const std::vector<SubTaskInfo>& value)
{
    subTaskList_ = value;
    subTaskListIsSet_ = true;
}

bool ShowTaskDetailsResponse::subTaskListIsSet() const
{
    return subTaskListIsSet_;
}

void ShowTaskDetailsResponse::unsetsubTaskList()
{
    subTaskListIsSet_ = false;
}

}
}
}
}
}


