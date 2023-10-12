

#include "huaweicloud/gaussdbforopengauss/v3/model/TaskDetailResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




TaskDetailResult::TaskDetailResult()
{
    instanceInfoIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

TaskDetailResult::~TaskDetailResult() = default;

void TaskDetailResult::validate()
{
}

web::json::value TaskDetailResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceInfoIsSet_) {
        val[utility::conversions::to_string_t("instance_info")] = ModelBase::toJson(instanceInfo_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool TaskDetailResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_info"));
        if(!fieldValue.is_null())
        {
            InstanceInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


InstanceInfoResult TaskDetailResult::getInstanceInfo() const
{
    return instanceInfo_;
}

void TaskDetailResult::setInstanceInfo(const InstanceInfoResult& value)
{
    instanceInfo_ = value;
    instanceInfoIsSet_ = true;
}

bool TaskDetailResult::instanceInfoIsSet() const
{
    return instanceInfoIsSet_;
}

void TaskDetailResult::unsetinstanceInfo()
{
    instanceInfoIsSet_ = false;
}

std::string TaskDetailResult::getJobId() const
{
    return jobId_;
}

void TaskDetailResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TaskDetailResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TaskDetailResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TaskDetailResult::getName() const
{
    return name_;
}

void TaskDetailResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskDetailResult::nameIsSet() const
{
    return nameIsSet_;
}

void TaskDetailResult::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskDetailResult::getStatus() const
{
    return status_;
}

void TaskDetailResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskDetailResult::statusIsSet() const
{
    return statusIsSet_;
}

void TaskDetailResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TaskDetailResult::getProcess() const
{
    return process_;
}

void TaskDetailResult::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool TaskDetailResult::processIsSet() const
{
    return processIsSet_;
}

void TaskDetailResult::unsetprocess()
{
    processIsSet_ = false;
}

std::string TaskDetailResult::getFailReason() const
{
    return failReason_;
}

void TaskDetailResult::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool TaskDetailResult::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void TaskDetailResult::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


