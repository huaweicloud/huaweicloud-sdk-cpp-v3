

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlLimitTaskResponseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlLimitTaskResponseResult::ListSqlLimitTaskResponseResult()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskScope_ = "";
    taskScopeIsSet_ = false;
    limitType_ = "";
    limitTypeIsSet_ = false;
    limitTypeValue_ = "";
    limitTypeValueIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    databases_ = "";
    databasesIsSet_ = false;
    keyWords_ = "";
    keyWordsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    instanceIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
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
}

ListSqlLimitTaskResponseResult::~ListSqlLimitTaskResponseResult() = default;

void ListSqlLimitTaskResponseResult::validate()
{
}

web::json::value ListSqlLimitTaskResponseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskScopeIsSet_) {
        val[utility::conversions::to_string_t("task_scope")] = ModelBase::toJson(taskScope_);
    }
    if(limitTypeIsSet_) {
        val[utility::conversions::to_string_t("limit_type")] = ModelBase::toJson(limitType_);
    }
    if(limitTypeValueIsSet_) {
        val[utility::conversions::to_string_t("limit_type_value")] = ModelBase::toJson(limitTypeValue_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(keyWordsIsSet_) {
        val[utility::conversions::to_string_t("key_words")] = ModelBase::toJson(keyWords_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
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

    return val;
}
bool ListSqlLimitTaskResponseResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_type_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_type_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitTypeValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string ListSqlLimitTaskResponseResult::getTaskId() const
{
    return taskId_;
}

void ListSqlLimitTaskResponseResult::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListSqlLimitTaskResponseResult::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getTaskScope() const
{
    return taskScope_;
}

void ListSqlLimitTaskResponseResult::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void ListSqlLimitTaskResponseResult::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getLimitType() const
{
    return limitType_;
}

void ListSqlLimitTaskResponseResult::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void ListSqlLimitTaskResponseResult::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getTaskName() const
{
    return taskName_;
}

void ListSqlLimitTaskResponseResult::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ListSqlLimitTaskResponseResult::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getDatabases() const
{
    return databases_;
}

void ListSqlLimitTaskResponseResult::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getKeyWords() const
{
    return keyWords_;
}

void ListSqlLimitTaskResponseResult::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getStatus() const
{
    return status_;
}

void ListSqlLimitTaskResponseResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetstatus()
{
    statusIsSet_ = false;
}

Object ListSqlLimitTaskResponseResult::getInstanceId() const
{
    return instanceId_;
}

void ListSqlLimitTaskResponseResult::setInstanceId(const Object& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getRuleName() const
{
    return ruleName_;
}

void ListSqlLimitTaskResponseResult::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t ListSqlLimitTaskResponseResult::getParallelSize() const
{
    return parallelSize_;
}

void ListSqlLimitTaskResponseResult::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getStartTime() const
{
    return startTime_;
}

void ListSqlLimitTaskResponseResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSqlLimitTaskResponseResult::getEndTime() const
{
    return endTime_;
}

void ListSqlLimitTaskResponseResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListSqlLimitTaskResponseResult::getCpuUtilization() const
{
    return cpuUtilization_;
}

void ListSqlLimitTaskResponseResult::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t ListSqlLimitTaskResponseResult::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void ListSqlLimitTaskResponseResult::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool ListSqlLimitTaskResponseResult::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void ListSqlLimitTaskResponseResult::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

}
}
}
}
}


