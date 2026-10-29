

#include "huaweicloud/codeartscheck/v2/model/JobBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




JobBasicInfo::JobBasicInfo()
{
    executor_ = "";
    executorIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    jobResultIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    processIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

JobBasicInfo::~JobBasicInfo() = default;

void JobBasicInfo::validate()
{
}

web::json::value JobBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finishTime")] = ModelBase::toJson(finishTime_);
    }
    if(jobResultIsSet_) {
        val[utility::conversions::to_string_t("jobResult")] = ModelBase::toJson(jobResult_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("jobType")] = ModelBase::toJson(jobType_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("taskId")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool JobBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finishTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finishTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobResult"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobResult"));
        if(!fieldValue.is_null())
        {
            JobResultInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            ProcessInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("taskId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string JobBasicInfo::getExecutor() const
{
    return executor_;
}

void JobBasicInfo::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool JobBasicInfo::executorIsSet() const
{
    return executorIsSet_;
}

void JobBasicInfo::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string JobBasicInfo::getFinishTime() const
{
    return finishTime_;
}

void JobBasicInfo::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool JobBasicInfo::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void JobBasicInfo::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

JobResultInfo JobBasicInfo::getJobResult() const
{
    return jobResult_;
}

void JobBasicInfo::setJobResult(const JobResultInfo& value)
{
    jobResult_ = value;
    jobResultIsSet_ = true;
}

bool JobBasicInfo::jobResultIsSet() const
{
    return jobResultIsSet_;
}

void JobBasicInfo::unsetjobResult()
{
    jobResultIsSet_ = false;
}

std::string JobBasicInfo::getJobType() const
{
    return jobType_;
}

void JobBasicInfo::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobBasicInfo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobBasicInfo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

ProcessInfo JobBasicInfo::getProcess() const
{
    return process_;
}

void JobBasicInfo::setProcess(const ProcessInfo& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool JobBasicInfo::processIsSet() const
{
    return processIsSet_;
}

void JobBasicInfo::unsetprocess()
{
    processIsSet_ = false;
}

std::string JobBasicInfo::getStartTime() const
{
    return startTime_;
}

void JobBasicInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool JobBasicInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void JobBasicInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string JobBasicInfo::getStatus() const
{
    return status_;
}

void JobBasicInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobBasicInfo::statusIsSet() const
{
    return statusIsSet_;
}

void JobBasicInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobBasicInfo::getTaskId() const
{
    return taskId_;
}

void JobBasicInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool JobBasicInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void JobBasicInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


