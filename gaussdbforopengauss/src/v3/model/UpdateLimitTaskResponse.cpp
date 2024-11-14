

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateLimitTaskResponse::UpdateLimitTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    databases_ = "";
    databasesIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    keyWords_ = "";
    keyWordsIsSet_ = false;
    parallelSize_ = 0;
    parallelSizeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    cpuUtilization_ = 0;
    cpuUtilizationIsSet_ = false;
    memoryUtilization_ = 0;
    memoryUtilizationIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateLimitTaskResponse::~UpdateLimitTaskResponse() = default;

void UpdateLimitTaskResponse::validate()
{
}

web::json::value UpdateLimitTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(keyWordsIsSet_) {
        val[utility::conversions::to_string_t("key_words")] = ModelBase::toJson(keyWords_);
    }
    if(parallelSizeIsSet_) {
        val[utility::conversions::to_string_t("parallel_size")] = ModelBase::toJson(parallelSize_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(cpuUtilizationIsSet_) {
        val[utility::conversions::to_string_t("cpu_utilization")] = ModelBase::toJson(cpuUtilization_);
    }
    if(memoryUtilizationIsSet_) {
        val[utility::conversions::to_string_t("memory_utilization")] = ModelBase::toJson(memoryUtilization_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateLimitTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parallel_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parallel_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParallelSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_utilization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_utilization"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUtilization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_utilization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_utilization"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemoryUtilization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
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
    return ok;
}


std::string UpdateLimitTaskResponse::getTaskId() const
{
    return taskId_;
}

void UpdateLimitTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateLimitTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateLimitTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getDatabases() const
{
    return databases_;
}

void UpdateLimitTaskResponse::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool UpdateLimitTaskResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void UpdateLimitTaskResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getTaskName() const
{
    return taskName_;
}

void UpdateLimitTaskResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool UpdateLimitTaskResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void UpdateLimitTaskResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getKeyWords() const
{
    return keyWords_;
}

void UpdateLimitTaskResponse::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool UpdateLimitTaskResponse::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void UpdateLimitTaskResponse::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

int32_t UpdateLimitTaskResponse::getParallelSize() const
{
    return parallelSize_;
}

void UpdateLimitTaskResponse::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool UpdateLimitTaskResponse::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void UpdateLimitTaskResponse::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getStartTime() const
{
    return startTime_;
}

void UpdateLimitTaskResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UpdateLimitTaskResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UpdateLimitTaskResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getEndTime() const
{
    return endTime_;
}

void UpdateLimitTaskResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateLimitTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateLimitTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t UpdateLimitTaskResponse::getCpuUtilization() const
{
    return cpuUtilization_;
}

void UpdateLimitTaskResponse::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool UpdateLimitTaskResponse::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void UpdateLimitTaskResponse::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t UpdateLimitTaskResponse::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void UpdateLimitTaskResponse::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool UpdateLimitTaskResponse::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void UpdateLimitTaskResponse::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getRuleName() const
{
    return ruleName_;
}

void UpdateLimitTaskResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateLimitTaskResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateLimitTaskResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string UpdateLimitTaskResponse::getJobId() const
{
    return jobId_;
}

void UpdateLimitTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateLimitTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateLimitTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


