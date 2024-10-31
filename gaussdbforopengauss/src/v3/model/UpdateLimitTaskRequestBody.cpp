

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateLimitTaskRequestBody::UpdateLimitTaskRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    keyWords_ = "";
    keyWordsIsSet_ = false;
    parallelSize_ = 0;
    parallelSizeIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    cpuUtilization_ = 0;
    cpuUtilizationIsSet_ = false;
    memoryUtilization_ = 0;
    memoryUtilizationIsSet_ = false;
    databases_ = "";
    databasesIsSet_ = false;
}

UpdateLimitTaskRequestBody::~UpdateLimitTaskRequestBody() = default;

void UpdateLimitTaskRequestBody::validate()
{
}

web::json::value UpdateLimitTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(keyWordsIsSet_) {
        val[utility::conversions::to_string_t("key_words")] = ModelBase::toJson(keyWords_);
    }
    if(parallelSizeIsSet_) {
        val[utility::conversions::to_string_t("parallel_size")] = ModelBase::toJson(parallelSize_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(cpuUtilizationIsSet_) {
        val[utility::conversions::to_string_t("cpu_utilization")] = ModelBase::toJson(cpuUtilization_);
    }
    if(memoryUtilizationIsSet_) {
        val[utility::conversions::to_string_t("memory_utilization")] = ModelBase::toJson(memoryUtilization_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool UpdateLimitTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string UpdateLimitTaskRequestBody::getStartTime() const
{
    return startTime_;
}

void UpdateLimitTaskRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UpdateLimitTaskRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string UpdateLimitTaskRequestBody::getEndTime() const
{
    return endTime_;
}

void UpdateLimitTaskRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateLimitTaskRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string UpdateLimitTaskRequestBody::getKeyWords() const
{
    return keyWords_;
}

void UpdateLimitTaskRequestBody::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void UpdateLimitTaskRequestBody::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

int32_t UpdateLimitTaskRequestBody::getParallelSize() const
{
    return parallelSize_;
}

void UpdateLimitTaskRequestBody::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void UpdateLimitTaskRequestBody::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

std::string UpdateLimitTaskRequestBody::getTaskName() const
{
    return taskName_;
}

void UpdateLimitTaskRequestBody::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void UpdateLimitTaskRequestBody::unsettaskName()
{
    taskNameIsSet_ = false;
}

int32_t UpdateLimitTaskRequestBody::getCpuUtilization() const
{
    return cpuUtilization_;
}

void UpdateLimitTaskRequestBody::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void UpdateLimitTaskRequestBody::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t UpdateLimitTaskRequestBody::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void UpdateLimitTaskRequestBody::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void UpdateLimitTaskRequestBody::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string UpdateLimitTaskRequestBody::getDatabases() const
{
    return databases_;
}

void UpdateLimitTaskRequestBody::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool UpdateLimitTaskRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void UpdateLimitTaskRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


