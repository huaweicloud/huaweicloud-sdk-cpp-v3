

#include "huaweicloud/cloudtest/v1/model/TestcaseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestcaseResult::TestcaseResult()
{
    executeResultId_ = "";
    executeResultIdIsSet_ = false;
    executeStatus_ = "";
    executeStatusIsSet_ = false;
    failureCause_ = "";
    failureCauseIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    executorId_ = "";
    executorIdIsSet_ = false;
    executorName_ = "";
    executorNameIsSet_ = false;
}

TestcaseResult::~TestcaseResult() = default;

void TestcaseResult::validate()
{
}

web::json::value TestcaseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executeResultIdIsSet_) {
        val[utility::conversions::to_string_t("execute_result_id")] = ModelBase::toJson(executeResultId_);
    }
    if(executeStatusIsSet_) {
        val[utility::conversions::to_string_t("execute_status")] = ModelBase::toJson(executeStatus_);
    }
    if(failureCauseIsSet_) {
        val[utility::conversions::to_string_t("failure_cause")] = ModelBase::toJson(failureCause_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(executorIdIsSet_) {
        val[utility::conversions::to_string_t("executor_id")] = ModelBase::toJson(executorId_);
    }
    if(executorNameIsSet_) {
        val[utility::conversions::to_string_t("executor_name")] = ModelBase::toJson(executorName_);
    }

    return val;
}
bool TestcaseResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execute_result_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_result_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteResultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_cause"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_cause"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCause(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("executor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorName(refVal);
        }
    }
    return ok;
}


std::string TestcaseResult::getExecuteResultId() const
{
    return executeResultId_;
}

void TestcaseResult::setExecuteResultId(const std::string& value)
{
    executeResultId_ = value;
    executeResultIdIsSet_ = true;
}

bool TestcaseResult::executeResultIdIsSet() const
{
    return executeResultIdIsSet_;
}

void TestcaseResult::unsetexecuteResultId()
{
    executeResultIdIsSet_ = false;
}

std::string TestcaseResult::getExecuteStatus() const
{
    return executeStatus_;
}

void TestcaseResult::setExecuteStatus(const std::string& value)
{
    executeStatus_ = value;
    executeStatusIsSet_ = true;
}

bool TestcaseResult::executeStatusIsSet() const
{
    return executeStatusIsSet_;
}

void TestcaseResult::unsetexecuteStatus()
{
    executeStatusIsSet_ = false;
}

std::string TestcaseResult::getFailureCause() const
{
    return failureCause_;
}

void TestcaseResult::setFailureCause(const std::string& value)
{
    failureCause_ = value;
    failureCauseIsSet_ = true;
}

bool TestcaseResult::failureCauseIsSet() const
{
    return failureCauseIsSet_;
}

void TestcaseResult::unsetfailureCause()
{
    failureCauseIsSet_ = false;
}

std::string TestcaseResult::getTaskId() const
{
    return taskId_;
}

void TestcaseResult::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TestcaseResult::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TestcaseResult::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TestcaseResult::getPlanId() const
{
    return planId_;
}

void TestcaseResult::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TestcaseResult::planIdIsSet() const
{
    return planIdIsSet_;
}

void TestcaseResult::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string TestcaseResult::getStartTime() const
{
    return startTime_;
}

void TestcaseResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TestcaseResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TestcaseResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TestcaseResult::getEndTime() const
{
    return endTime_;
}

void TestcaseResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TestcaseResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TestcaseResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TestcaseResult::getExecutorId() const
{
    return executorId_;
}

void TestcaseResult::setExecutorId(const std::string& value)
{
    executorId_ = value;
    executorIdIsSet_ = true;
}

bool TestcaseResult::executorIdIsSet() const
{
    return executorIdIsSet_;
}

void TestcaseResult::unsetexecutorId()
{
    executorIdIsSet_ = false;
}

std::string TestcaseResult::getExecutorName() const
{
    return executorName_;
}

void TestcaseResult::setExecutorName(const std::string& value)
{
    executorName_ = value;
    executorNameIsSet_ = true;
}

bool TestcaseResult::executorNameIsSet() const
{
    return executorNameIsSet_;
}

void TestcaseResult::unsetexecutorName()
{
    executorNameIsSet_ = false;
}

}
}
}
}
}


