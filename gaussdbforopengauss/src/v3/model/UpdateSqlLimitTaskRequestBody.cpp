

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateSqlLimitTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateSqlLimitTaskRequestBody::UpdateSqlLimitTaskRequestBody()
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
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

UpdateSqlLimitTaskRequestBody::~UpdateSqlLimitTaskRequestBody() = default;

void UpdateSqlLimitTaskRequestBody::validate()
{
}

web::json::value UpdateSqlLimitTaskRequestBody::toJson() const
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
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool UpdateSqlLimitTaskRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string UpdateSqlLimitTaskRequestBody::getStartTime() const
{
    return startTime_;
}

void UpdateSqlLimitTaskRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequestBody::getEndTime() const
{
    return endTime_;
}

void UpdateSqlLimitTaskRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequestBody::getKeyWords() const
{
    return keyWords_;
}

void UpdateSqlLimitTaskRequestBody::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

int32_t UpdateSqlLimitTaskRequestBody::getParallelSize() const
{
    return parallelSize_;
}

void UpdateSqlLimitTaskRequestBody::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequestBody::getTaskName() const
{
    return taskName_;
}

void UpdateSqlLimitTaskRequestBody::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsettaskName()
{
    taskNameIsSet_ = false;
}

int32_t UpdateSqlLimitTaskRequestBody::getCpuUtilization() const
{
    return cpuUtilization_;
}

void UpdateSqlLimitTaskRequestBody::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t UpdateSqlLimitTaskRequestBody::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void UpdateSqlLimitTaskRequestBody::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequestBody::getDatabases() const
{
    return databases_;
}

void UpdateSqlLimitTaskRequestBody::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string UpdateSqlLimitTaskRequestBody::getNodeId() const
{
    return nodeId_;
}

void UpdateSqlLimitTaskRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool UpdateSqlLimitTaskRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void UpdateSqlLimitTaskRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


