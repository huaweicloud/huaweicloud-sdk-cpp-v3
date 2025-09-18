

#include "huaweicloud/rds/v3/model/ShowTaskDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTaskDetailResponse::ShowTaskDetailResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subTaskListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTaskDetailResponse::~ShowTaskDetailResponse() = default;

void ShowTaskDetailResponse::validate()
{
}

web::json::value ShowTaskDetailResponse::toJson() const
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subTaskListIsSet_) {
        val[utility::conversions::to_string_t("sub_task_list")] = ModelBase::toJson(subTaskList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTaskDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDetailResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowTaskDetailResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTaskDetailResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTaskDetailResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTaskDetailResponse::getInstanceName() const
{
    return instanceName_;
}

void ShowTaskDetailResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowTaskDetailResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowTaskDetailResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowTaskDetailResponse::getJobId() const
{
    return jobId_;
}

void ShowTaskDetailResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTaskDetailResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTaskDetailResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTaskDetailResponse::getJobName() const
{
    return jobName_;
}

void ShowTaskDetailResponse::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowTaskDetailResponse::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowTaskDetailResponse::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ShowTaskDetailResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowTaskDetailResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowTaskDetailResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowTaskDetailResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowTaskDetailResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowTaskDetailResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowTaskDetailResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowTaskDetailResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ShowTaskDetailResponse::getProcess() const
{
    return process_;
}

void ShowTaskDetailResponse::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool ShowTaskDetailResponse::processIsSet() const
{
    return processIsSet_;
}

void ShowTaskDetailResponse::unsetprocess()
{
    processIsSet_ = false;
}

std::string ShowTaskDetailResponse::getStatus() const
{
    return status_;
}

void ShowTaskDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<SubTaskInfo>& ShowTaskDetailResponse::getSubTaskList()
{
    return subTaskList_;
}

void ShowTaskDetailResponse::setSubTaskList(const std::vector<SubTaskInfo>& value)
{
    subTaskList_ = value;
    subTaskListIsSet_ = true;
}

bool ShowTaskDetailResponse::subTaskListIsSet() const
{
    return subTaskListIsSet_;
}

void ShowTaskDetailResponse::unsetsubTaskList()
{
    subTaskListIsSet_ = false;
}

std::string ShowTaskDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTaskDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTaskDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTaskDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


