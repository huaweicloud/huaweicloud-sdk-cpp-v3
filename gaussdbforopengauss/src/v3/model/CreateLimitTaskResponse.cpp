

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateLimitTaskResponse::CreateLimitTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskScope_ = "";
    taskScopeIsSet_ = false;
    limitType_ = "";
    limitTypeIsSet_ = false;
    limitTypeValue_ = "";
    limitTypeValueIsSet_ = false;
    databases_ = "";
    databasesIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    sqlModel_ = "";
    sqlModelIsSet_ = false;
    keyWords_ = "";
    keyWordsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    parallelSize_ = 0;
    parallelSizeIsSet_ = false;
    cpuUtilization_ = 0;
    cpuUtilizationIsSet_ = false;
    memoryUtilization_ = 0;
    memoryUtilizationIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    modifier_ = "";
    modifierIsSet_ = false;
    nodeInfosIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateLimitTaskResponse::~CreateLimitTaskResponse() = default;

void CreateLimitTaskResponse::validate()
{
}

web::json::value CreateLimitTaskResponse::toJson() const
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
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(sqlModelIsSet_) {
        val[utility::conversions::to_string_t("sql_model")] = ModelBase::toJson(sqlModel_);
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
    if(cpuUtilizationIsSet_) {
        val[utility::conversions::to_string_t("cpu_utilization")] = ModelBase::toJson(cpuUtilization_);
    }
    if(memoryUtilizationIsSet_) {
        val[utility::conversions::to_string_t("memory_utilization")] = ModelBase::toJson(memoryUtilization_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(modifierIsSet_) {
        val[utility::conversions::to_string_t("modifier")] = ModelBase::toJson(modifier_);
    }
    if(nodeInfosIsSet_) {
        val[utility::conversions::to_string_t("node_infos")] = ModelBase::toJson(nodeInfos_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateLimitTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlModel(refVal);
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
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateLimitTaskNodeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeInfos(refVal);
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


std::string CreateLimitTaskResponse::getTaskId() const
{
    return taskId_;
}

void CreateLimitTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateLimitTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateLimitTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CreateLimitTaskResponse::getTaskScope() const
{
    return taskScope_;
}

void CreateLimitTaskResponse::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool CreateLimitTaskResponse::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void CreateLimitTaskResponse::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string CreateLimitTaskResponse::getLimitType() const
{
    return limitType_;
}

void CreateLimitTaskResponse::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool CreateLimitTaskResponse::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void CreateLimitTaskResponse::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string CreateLimitTaskResponse::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void CreateLimitTaskResponse::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool CreateLimitTaskResponse::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void CreateLimitTaskResponse::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string CreateLimitTaskResponse::getDatabases() const
{
    return databases_;
}

void CreateLimitTaskResponse::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool CreateLimitTaskResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void CreateLimitTaskResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string CreateLimitTaskResponse::getTaskName() const
{
    return taskName_;
}

void CreateLimitTaskResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CreateLimitTaskResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CreateLimitTaskResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string CreateLimitTaskResponse::getSqlModel() const
{
    return sqlModel_;
}

void CreateLimitTaskResponse::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool CreateLimitTaskResponse::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void CreateLimitTaskResponse::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

std::string CreateLimitTaskResponse::getKeyWords() const
{
    return keyWords_;
}

void CreateLimitTaskResponse::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool CreateLimitTaskResponse::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void CreateLimitTaskResponse::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

std::string CreateLimitTaskResponse::getStatus() const
{
    return status_;
}

void CreateLimitTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateLimitTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateLimitTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateLimitTaskResponse::getInstanceId() const
{
    return instanceId_;
}

void CreateLimitTaskResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateLimitTaskResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateLimitTaskResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateLimitTaskResponse::getRuleName() const
{
    return ruleName_;
}

void CreateLimitTaskResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool CreateLimitTaskResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void CreateLimitTaskResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t CreateLimitTaskResponse::getParallelSize() const
{
    return parallelSize_;
}

void CreateLimitTaskResponse::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool CreateLimitTaskResponse::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void CreateLimitTaskResponse::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

int32_t CreateLimitTaskResponse::getCpuUtilization() const
{
    return cpuUtilization_;
}

void CreateLimitTaskResponse::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool CreateLimitTaskResponse::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void CreateLimitTaskResponse::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t CreateLimitTaskResponse::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void CreateLimitTaskResponse::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool CreateLimitTaskResponse::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void CreateLimitTaskResponse::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string CreateLimitTaskResponse::getStartTime() const
{
    return startTime_;
}

void CreateLimitTaskResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateLimitTaskResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateLimitTaskResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CreateLimitTaskResponse::getEndTime() const
{
    return endTime_;
}

void CreateLimitTaskResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateLimitTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateLimitTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CreateLimitTaskResponse::getCreated() const
{
    return created_;
}

void CreateLimitTaskResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool CreateLimitTaskResponse::createdIsSet() const
{
    return createdIsSet_;
}

void CreateLimitTaskResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string CreateLimitTaskResponse::getUpdated() const
{
    return updated_;
}

void CreateLimitTaskResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool CreateLimitTaskResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void CreateLimitTaskResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string CreateLimitTaskResponse::getCreator() const
{
    return creator_;
}

void CreateLimitTaskResponse::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool CreateLimitTaskResponse::creatorIsSet() const
{
    return creatorIsSet_;
}

void CreateLimitTaskResponse::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string CreateLimitTaskResponse::getModifier() const
{
    return modifier_;
}

void CreateLimitTaskResponse::setModifier(const std::string& value)
{
    modifier_ = value;
    modifierIsSet_ = true;
}

bool CreateLimitTaskResponse::modifierIsSet() const
{
    return modifierIsSet_;
}

void CreateLimitTaskResponse::unsetmodifier()
{
    modifierIsSet_ = false;
}

std::vector<CreateLimitTaskNodeResult>& CreateLimitTaskResponse::getNodeInfos()
{
    return nodeInfos_;
}

void CreateLimitTaskResponse::setNodeInfos(const std::vector<CreateLimitTaskNodeResult>& value)
{
    nodeInfos_ = value;
    nodeInfosIsSet_ = true;
}

bool CreateLimitTaskResponse::nodeInfosIsSet() const
{
    return nodeInfosIsSet_;
}

void CreateLimitTaskResponse::unsetnodeInfos()
{
    nodeInfosIsSet_ = false;
}

std::string CreateLimitTaskResponse::getJobId() const
{
    return jobId_;
}

void CreateLimitTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateLimitTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateLimitTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


