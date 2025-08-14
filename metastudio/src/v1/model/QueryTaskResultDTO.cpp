

#include "huaweicloud/metastudio/v1/model/QueryTaskResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




QueryTaskResultDTO::QueryTaskResultDTO()
{
    resource_ = "";
    resourceIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    successCount_ = 0;
    successCountIsSet_ = false;
    failureCount_ = 0;
    failureCountIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

QueryTaskResultDTO::~QueryTaskResultDTO() = default;

void QueryTaskResultDTO::validate()
{
}

web::json::value QueryTaskResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(failureCountIsSet_) {
        val[utility::conversions::to_string_t("failure_count")] = ModelBase::toJson(failureCount_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool QueryTaskResultDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string QueryTaskResultDTO::getResource() const
{
    return resource_;
}

void QueryTaskResultDTO::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool QueryTaskResultDTO::resourceIsSet() const
{
    return resourceIsSet_;
}

void QueryTaskResultDTO::unsetresource()
{
    resourceIsSet_ = false;
}

std::string QueryTaskResultDTO::getTaskName() const
{
    return taskName_;
}

void QueryTaskResultDTO::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool QueryTaskResultDTO::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void QueryTaskResultDTO::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string QueryTaskResultDTO::getBeginTime() const
{
    return beginTime_;
}

void QueryTaskResultDTO::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool QueryTaskResultDTO::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void QueryTaskResultDTO::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string QueryTaskResultDTO::getEndTime() const
{
    return endTime_;
}

void QueryTaskResultDTO::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryTaskResultDTO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryTaskResultDTO::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string QueryTaskResultDTO::getTaskType() const
{
    return taskType_;
}

void QueryTaskResultDTO::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool QueryTaskResultDTO::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void QueryTaskResultDTO::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string QueryTaskResultDTO::getOperator() const
{
    return operator_;
}

void QueryTaskResultDTO::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool QueryTaskResultDTO::operatorIsSet() const
{
    return operatorIsSet_;
}

void QueryTaskResultDTO::unsetoperator()
{
    operatorIsSet_ = false;
}

int32_t QueryTaskResultDTO::getTotalCount() const
{
    return totalCount_;
}

void QueryTaskResultDTO::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool QueryTaskResultDTO::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void QueryTaskResultDTO::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t QueryTaskResultDTO::getSuccessCount() const
{
    return successCount_;
}

void QueryTaskResultDTO::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool QueryTaskResultDTO::successCountIsSet() const
{
    return successCountIsSet_;
}

void QueryTaskResultDTO::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int32_t QueryTaskResultDTO::getFailureCount() const
{
    return failureCount_;
}

void QueryTaskResultDTO::setFailureCount(int32_t value)
{
    failureCount_ = value;
    failureCountIsSet_ = true;
}

bool QueryTaskResultDTO::failureCountIsSet() const
{
    return failureCountIsSet_;
}

void QueryTaskResultDTO::unsetfailureCount()
{
    failureCountIsSet_ = false;
}

std::string QueryTaskResultDTO::getTaskStatus() const
{
    return taskStatus_;
}

void QueryTaskResultDTO::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool QueryTaskResultDTO::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void QueryTaskResultDTO::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::string QueryTaskResultDTO::getTaskId() const
{
    return taskId_;
}

void QueryTaskResultDTO::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool QueryTaskResultDTO::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void QueryTaskResultDTO::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string QueryTaskResultDTO::getUserId() const
{
    return userId_;
}

void QueryTaskResultDTO::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool QueryTaskResultDTO::userIdIsSet() const
{
    return userIdIsSet_;
}

void QueryTaskResultDTO::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


