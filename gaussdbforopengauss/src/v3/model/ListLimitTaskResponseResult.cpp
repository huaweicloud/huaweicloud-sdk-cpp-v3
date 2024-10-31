

#include "huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskResponseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListLimitTaskResponseResult::ListLimitTaskResponseResult()
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
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    cpuUtilization_ = 0;
    cpuUtilizationIsSet_ = false;
    memoryUtilization_ = 0;
    memoryUtilizationIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    modifier_ = "";
    modifierIsSet_ = false;
    nodeInfosIsSet_ = false;
}

ListLimitTaskResponseResult::~ListLimitTaskResponseResult() = default;

void ListLimitTaskResponseResult::validate()
{
}

web::json::value ListLimitTaskResponseResult::toJson() const
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

    return val;
}
bool ListLimitTaskResponseResult::fromJson(const web::json::value& val)
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
            std::vector<ShowLimitTaskNodeOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeInfos(refVal);
        }
    }
    return ok;
}


std::string ListLimitTaskResponseResult::getTaskId() const
{
    return taskId_;
}

void ListLimitTaskResponseResult::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListLimitTaskResponseResult::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListLimitTaskResponseResult::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getTaskScope() const
{
    return taskScope_;
}

void ListLimitTaskResponseResult::setTaskScope(const std::string& value)
{
    taskScope_ = value;
    taskScopeIsSet_ = true;
}

bool ListLimitTaskResponseResult::taskScopeIsSet() const
{
    return taskScopeIsSet_;
}

void ListLimitTaskResponseResult::unsettaskScope()
{
    taskScopeIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getLimitType() const
{
    return limitType_;
}

void ListLimitTaskResponseResult::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool ListLimitTaskResponseResult::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void ListLimitTaskResponseResult::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getLimitTypeValue() const
{
    return limitTypeValue_;
}

void ListLimitTaskResponseResult::setLimitTypeValue(const std::string& value)
{
    limitTypeValue_ = value;
    limitTypeValueIsSet_ = true;
}

bool ListLimitTaskResponseResult::limitTypeValueIsSet() const
{
    return limitTypeValueIsSet_;
}

void ListLimitTaskResponseResult::unsetlimitTypeValue()
{
    limitTypeValueIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getTaskName() const
{
    return taskName_;
}

void ListLimitTaskResponseResult::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ListLimitTaskResponseResult::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ListLimitTaskResponseResult::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getDatabases() const
{
    return databases_;
}

void ListLimitTaskResponseResult::setDatabases(const std::string& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListLimitTaskResponseResult::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListLimitTaskResponseResult::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getSqlModel() const
{
    return sqlModel_;
}

void ListLimitTaskResponseResult::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool ListLimitTaskResponseResult::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void ListLimitTaskResponseResult::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getKeyWords() const
{
    return keyWords_;
}

void ListLimitTaskResponseResult::setKeyWords(const std::string& value)
{
    keyWords_ = value;
    keyWordsIsSet_ = true;
}

bool ListLimitTaskResponseResult::keyWordsIsSet() const
{
    return keyWordsIsSet_;
}

void ListLimitTaskResponseResult::unsetkeyWords()
{
    keyWordsIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getStatus() const
{
    return status_;
}

void ListLimitTaskResponseResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListLimitTaskResponseResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListLimitTaskResponseResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getInstanceId() const
{
    return instanceId_;
}

void ListLimitTaskResponseResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLimitTaskResponseResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLimitTaskResponseResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getRuleName() const
{
    return ruleName_;
}

void ListLimitTaskResponseResult::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ListLimitTaskResponseResult::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ListLimitTaskResponseResult::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t ListLimitTaskResponseResult::getParallelSize() const
{
    return parallelSize_;
}

void ListLimitTaskResponseResult::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool ListLimitTaskResponseResult::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void ListLimitTaskResponseResult::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getStartTime() const
{
    return startTime_;
}

void ListLimitTaskResponseResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListLimitTaskResponseResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListLimitTaskResponseResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getEndTime() const
{
    return endTime_;
}

void ListLimitTaskResponseResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListLimitTaskResponseResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListLimitTaskResponseResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListLimitTaskResponseResult::getCpuUtilization() const
{
    return cpuUtilization_;
}

void ListLimitTaskResponseResult::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool ListLimitTaskResponseResult::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void ListLimitTaskResponseResult::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

int32_t ListLimitTaskResponseResult::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void ListLimitTaskResponseResult::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool ListLimitTaskResponseResult::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void ListLimitTaskResponseResult::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getCreated() const
{
    return created_;
}

void ListLimitTaskResponseResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ListLimitTaskResponseResult::createdIsSet() const
{
    return createdIsSet_;
}

void ListLimitTaskResponseResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getUpdated() const
{
    return updated_;
}

void ListLimitTaskResponseResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ListLimitTaskResponseResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ListLimitTaskResponseResult::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getCreator() const
{
    return creator_;
}

void ListLimitTaskResponseResult::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ListLimitTaskResponseResult::creatorIsSet() const
{
    return creatorIsSet_;
}

void ListLimitTaskResponseResult::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ListLimitTaskResponseResult::getModifier() const
{
    return modifier_;
}

void ListLimitTaskResponseResult::setModifier(const std::string& value)
{
    modifier_ = value;
    modifierIsSet_ = true;
}

bool ListLimitTaskResponseResult::modifierIsSet() const
{
    return modifierIsSet_;
}

void ListLimitTaskResponseResult::unsetmodifier()
{
    modifierIsSet_ = false;
}

std::vector<ShowLimitTaskNodeOption>& ListLimitTaskResponseResult::getNodeInfos()
{
    return nodeInfos_;
}

void ListLimitTaskResponseResult::setNodeInfos(const std::vector<ShowLimitTaskNodeOption>& value)
{
    nodeInfos_ = value;
    nodeInfosIsSet_ = true;
}

bool ListLimitTaskResponseResult::nodeInfosIsSet() const
{
    return nodeInfosIsSet_;
}

void ListLimitTaskResponseResult::unsetnodeInfos()
{
    nodeInfosIsSet_ = false;
}

}
}
}
}
}


