

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateLimitTaskRequestBody::CreateLimitTaskRequestBody()
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
    sqlModel_ = "";
    sqlModelIsSet_ = false;
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

CreateLimitTaskRequestBody::~CreateLimitTaskRequestBody() = default;

void CreateLimitTaskRequestBody::validate()
{
}

web::json::value CreateLimitTaskRequestBody::toJson() const
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
    if(sqlModelIsSet_) {
        val[utility::conversions::to_string_t("sql_model")] = ModelBase::toJson(sqlModel_);
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
bool CreateLimitTaskRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlModel(refVal);
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


std::string CreateLimitTaskRequestBody::getTaskScope() const
{
    return taskScope_;
}

void CreateLimitTaskRequestBody::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool CreateLimitTaskRequestBody::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void CreateLimitTaskRequestBody::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getStartTime() const
{
    return startTime_;
}

void CreateLimitTaskRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateLimitTaskRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateLimitTaskRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getEndTime() const
{
    return endTime_;
}

void CreateLimitTaskRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateLimitTaskRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateLimitTaskRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getLimitType() const
{
    return limitType_;
}

void CreateLimitTaskRequestBody::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool CreateLimitTaskRequestBody::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void CreateLimitTaskRequestBody::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void CreateLimitTaskRequestBody::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool CreateLimitTaskRequestBody::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void CreateLimitTaskRequestBody::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getKeyWords() const
{
    return keyWords_;
}

void CreateLimitTaskRequestBody::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool CreateLimitTaskRequestBody::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void CreateLimitTaskRequestBody::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getTaskName() const
{
    return taskName_;
}

void CreateLimitTaskRequestBody::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CreateLimitTaskRequestBody::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CreateLimitTaskRequestBody::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getSqlModel() const
{
    return sqlModel_;
}

void CreateLimitTaskRequestBody::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool CreateLimitTaskRequestBody::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void CreateLimitTaskRequestBody::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

int32_t CreateLimitTaskRequestBody::getParallelSize() const
{
    return parallelSize_;
}

void CreateLimitTaskRequestBody::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool CreateLimitTaskRequestBody::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void CreateLimitTaskRequestBody::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

int32_t CreateLimitTaskRequestBody::getCpuUtilization() const
{
    return cpuUtilization_;
}

void CreateLimitTaskRequestBody::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool CreateLimitTaskRequestBody::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void CreateLimitTaskRequestBody::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t CreateLimitTaskRequestBody::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void CreateLimitTaskRequestBody::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool CreateLimitTaskRequestBody::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void CreateLimitTaskRequestBody::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string CreateLimitTaskRequestBody::getDatabases() const
{
    return databases_;
}

void CreateLimitTaskRequestBody::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool CreateLimitTaskRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void CreateLimitTaskRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::vector<CreateLimitTaskNodeOption>& CreateLimitTaskRequestBody::getNodeInfos()
{
    return nodeInfos_;
}

void CreateLimitTaskRequestBody::setNodeInfos(const std::vector<CreateLimitTaskNodeOption>& value)
{
    nodeInfos_ = value;
    nodeInfosIsSet_ = true;
}

bool CreateLimitTaskRequestBody::nodeInfosIsSet() const
{
    return nodeInfosIsSet_;
}

void CreateLimitTaskRequestBody::unsetnodeInfos()
{
    nodeInfosIsSet_ = false;
}

}
}
}
}
}


