

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateSqlLimitTaskRequestBody::CreateSqlLimitTaskRequestBody()
{
    taskScope_ = "";
    taskScopeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    limitType_ = "";
    limitTypeIsSet_ = false;
    limitTypeValue_ = "";
    limitTypeValueIsSet_ = false;
    keyWords_ = "";
    keyWordsIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    parallelSize_ = 0;
    parallelSizeIsSet_ = false;
    cpuUtilization_ = 0;
    cpuUtilizationIsSet_ = false;
    memoryUtilization_ = 0;
    memoryUtilizationIsSet_ = false;
    databases_ = "";
    databasesIsSet_ = false;
    nodeInfosIsSet_ = false;
}

CreateSqlLimitTaskRequestBody::~CreateSqlLimitTaskRequestBody() = default;

void CreateSqlLimitTaskRequestBody::validate()
{
}

web::json::value CreateSqlLimitTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskScopeIsSet_) {
        val[utility::conversions::to_string_t("task_scope")] = ModelBase::toJson(taskScope_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitTypeIsSet_) {
        val[utility::conversions::to_string_t("limit_type")] = ModelBase::toJson(limitType_);
    }
    if(limitTypeValueIsSet_) {
        val[utility::conversions::to_string_t("limit_type_value")] = ModelBase::toJson(limitTypeValue_);
    }
    if(keyWordsIsSet_) {
        val[utility::conversions::to_string_t("key_words")] = ModelBase::toJson(keyWords_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(parallelSizeIsSet_) {
        val[utility::conversions::to_string_t("parallel_size")] = ModelBase::toJson(parallelSize_);
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
    if(nodeInfosIsSet_) {
        val[utility::conversions::to_string_t("node_infos")] = ModelBase::toJson(nodeInfos_);
    }

    return val;
}
bool CreateSqlLimitTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskScope(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWords(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parallel_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parallel_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParallelSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateLimitTaskNodeOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeInfos(refVal);
        }
    }
    return ok;
}


std::string CreateSqlLimitTaskRequestBody::getTaskScope() const
{
    return taskScope_;
}

void CreateSqlLimitTaskRequestBody::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateSqlLimitTaskRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getEndTime() const
{
    return endTime_;
}

void CreateSqlLimitTaskRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getLimitType() const
{
    return limitType_;
}

void CreateSqlLimitTaskRequestBody::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void CreateSqlLimitTaskRequestBody::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getKeyWords() const
{
    return keyWords_;
}

void CreateSqlLimitTaskRequestBody::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getTaskName() const
{
    return taskName_;
}

void CreateSqlLimitTaskRequestBody::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsettaskName()
{
    taskNameIsSet_ = false;
}

int32_t CreateSqlLimitTaskRequestBody::getParallelSize() const
{
    return parallelSize_;
}

void CreateSqlLimitTaskRequestBody::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

int32_t CreateSqlLimitTaskRequestBody::getCpuUtilization() const
{
    return cpuUtilization_;
}

void CreateSqlLimitTaskRequestBody::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t CreateSqlLimitTaskRequestBody::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void CreateSqlLimitTaskRequestBody::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string CreateSqlLimitTaskRequestBody::getDatabases() const
{
    return databases_;
}

void CreateSqlLimitTaskRequestBody::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::vector<CreateLimitTaskNodeOption>& CreateSqlLimitTaskRequestBody::getNodeInfos()
{
    return nodeInfos_;
}

void CreateSqlLimitTaskRequestBody::setNodeInfos(const std::vector<CreateLimitTaskNodeOption>& value)
{
    nodeInfos_ = value;
    nodeInfosIsSet_ = true;
}

bool CreateSqlLimitTaskRequestBody::nodeInfosIsSet() const
{
    return nodeInfosIsSet_;
}

void CreateSqlLimitTaskRequestBody::unsetnodeInfos()
{
    nodeInfosIsSet_ = false;
}

}
}
}
}
}


