

#include "huaweicloud/gaussdb/v3/model/TaskDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaskDetailInfo::TaskDetailInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    endedTime_ = "";
    endedTimeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

TaskDetailInfo::~TaskDetailInfo() = default;

void TaskDetailInfo::validate()
{
}

web::json::value TaskDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(endedTimeIsSet_) {
        val[utility::conversions::to_string_t("ended_time")] = ModelBase::toJson(endedTime_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool TaskDetailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ended_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ended_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


std::string TaskDetailInfo::getInstanceId() const
{
    return instanceId_;
}

void TaskDetailInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TaskDetailInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TaskDetailInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string TaskDetailInfo::getInstanceName() const
{
    return instanceName_;
}

void TaskDetailInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool TaskDetailInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void TaskDetailInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string TaskDetailInfo::getInstanceStatus() const
{
    return instanceStatus_;
}

void TaskDetailInfo::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool TaskDetailInfo::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void TaskDetailInfo::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string TaskDetailInfo::getJobId() const
{
    return jobId_;
}

void TaskDetailInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TaskDetailInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TaskDetailInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TaskDetailInfo::getOrderId() const
{
    return orderId_;
}

void TaskDetailInfo::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool TaskDetailInfo::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void TaskDetailInfo::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string TaskDetailInfo::getJobName() const
{
    return jobName_;
}

void TaskDetailInfo::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool TaskDetailInfo::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void TaskDetailInfo::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string TaskDetailInfo::getStatus() const
{
    return status_;
}

void TaskDetailInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskDetailInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TaskDetailInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TaskDetailInfo::getProcess() const
{
    return process_;
}

void TaskDetailInfo::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool TaskDetailInfo::processIsSet() const
{
    return processIsSet_;
}

void TaskDetailInfo::unsetprocess()
{
    processIsSet_ = false;
}

std::string TaskDetailInfo::getCreatedTime() const
{
    return createdTime_;
}

void TaskDetailInfo::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool TaskDetailInfo::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void TaskDetailInfo::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string TaskDetailInfo::getEndedTime() const
{
    return endedTime_;
}

void TaskDetailInfo::setEndedTime(const std::string& value)
{
    endedTime_ = value;
    endedTimeIsSet_ = true;
}

bool TaskDetailInfo::endedTimeIsSet() const
{
    return endedTimeIsSet_;
}

void TaskDetailInfo::unsetendedTime()
{
    endedTimeIsSet_ = false;
}

std::string TaskDetailInfo::getFailReason() const
{
    return failReason_;
}

void TaskDetailInfo::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool TaskDetailInfo::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void TaskDetailInfo::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


