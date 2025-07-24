

#include "huaweicloud/cloudtest/v1/model/TaskCaseResponseTimeDetailVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskCaseResponseTimeDetailVo::TaskCaseResponseTimeDetailVo()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    caseName_ = "";
    caseNameIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    errorReason_ = "";
    errorReasonIsSet_ = false;
    responseTime_ = 0L;
    responseTimeIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    subTaskId_ = "";
    subTaskIdIsSet_ = false;
    tagId_ = "";
    tagIdIsSet_ = false;
    tagName_ = "";
    tagNameIsSet_ = false;
    taskCaseId_ = "";
    taskCaseIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskTypeId_ = "";
    taskTypeIdIsSet_ = false;
    testSuiteType_ = 0;
    testSuiteTypeIsSet_ = false;
}

TaskCaseResponseTimeDetailVo::~TaskCaseResponseTimeDetailVo() = default;

void TaskCaseResponseTimeDetailVo::validate()
{
}

web::json::value TaskCaseResponseTimeDetailVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(caseNameIsSet_) {
        val[utility::conversions::to_string_t("case_name")] = ModelBase::toJson(caseName_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorReasonIsSet_) {
        val[utility::conversions::to_string_t("error_reason")] = ModelBase::toJson(errorReason_);
    }
    if(responseTimeIsSet_) {
        val[utility::conversions::to_string_t("response_time")] = ModelBase::toJson(responseTime_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(subTaskIdIsSet_) {
        val[utility::conversions::to_string_t("sub_task_id")] = ModelBase::toJson(subTaskId_);
    }
    if(tagIdIsSet_) {
        val[utility::conversions::to_string_t("tag_id")] = ModelBase::toJson(tagId_);
    }
    if(tagNameIsSet_) {
        val[utility::conversions::to_string_t("tag_name")] = ModelBase::toJson(tagName_);
    }
    if(taskCaseIdIsSet_) {
        val[utility::conversions::to_string_t("task_case_id")] = ModelBase::toJson(taskCaseId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskTypeIdIsSet_) {
        val[utility::conversions::to_string_t("task_type_id")] = ModelBase::toJson(taskTypeId_);
    }
    if(testSuiteTypeIsSet_) {
        val[utility::conversions::to_string_t("test_suite_type")] = ModelBase::toJson(testSuiteType_);
    }

    return val;
}
bool TaskCaseResponseTimeDetailVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskCaseId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_suite_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_suite_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestSuiteType(refVal);
        }
    }
    return ok;
}


std::string TaskCaseResponseTimeDetailVo::getCaseId() const
{
    return caseId_;
}

void TaskCaseResponseTimeDetailVo::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetcaseId()
{
    caseIdIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getCaseName() const
{
    return caseName_;
}

void TaskCaseResponseTimeDetailVo::setCaseName(const std::string& value)
{
    caseName_ = value;
    caseNameIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::caseNameIsSet() const
{
    return caseNameIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetcaseName()
{
    caseNameIsSet_ = false;
}

int64_t TaskCaseResponseTimeDetailVo::getEndTime() const
{
    return endTime_;
}

void TaskCaseResponseTimeDetailVo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getErrorReason() const
{
    return errorReason_;
}

void TaskCaseResponseTimeDetailVo::setErrorReason(const std::string& value)
{
    errorReason_ = value;
    errorReasonIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::errorReasonIsSet() const
{
    return errorReasonIsSet_;
}

void TaskCaseResponseTimeDetailVo::unseterrorReason()
{
    errorReasonIsSet_ = false;
}

int64_t TaskCaseResponseTimeDetailVo::getResponseTime() const
{
    return responseTime_;
}

void TaskCaseResponseTimeDetailVo::setResponseTime(int64_t value)
{
    responseTime_ = value;
    responseTimeIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::responseTimeIsSet() const
{
    return responseTimeIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetresponseTime()
{
    responseTimeIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getServiceId() const
{
    return serviceId_;
}

void TaskCaseResponseTimeDetailVo::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getServiceName() const
{
    return serviceName_;
}

void TaskCaseResponseTimeDetailVo::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

int64_t TaskCaseResponseTimeDetailVo::getStartTime() const
{
    return startTime_;
}

void TaskCaseResponseTimeDetailVo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getState() const
{
    return state_;
}

void TaskCaseResponseTimeDetailVo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::stateIsSet() const
{
    return stateIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getSubTaskId() const
{
    return subTaskId_;
}

void TaskCaseResponseTimeDetailVo::setSubTaskId(const std::string& value)
{
    subTaskId_ = value;
    subTaskIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::subTaskIdIsSet() const
{
    return subTaskIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsetsubTaskId()
{
    subTaskIdIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getTagId() const
{
    return tagId_;
}

void TaskCaseResponseTimeDetailVo::setTagId(const std::string& value)
{
    tagId_ = value;
    tagIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::tagIdIsSet() const
{
    return tagIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettagId()
{
    tagIdIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getTagName() const
{
    return tagName_;
}

void TaskCaseResponseTimeDetailVo::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettagName()
{
    tagNameIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getTaskCaseId() const
{
    return taskCaseId_;
}

void TaskCaseResponseTimeDetailVo::setTaskCaseId(const std::string& value)
{
    taskCaseId_ = value;
    taskCaseIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::taskCaseIdIsSet() const
{
    return taskCaseIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettaskCaseId()
{
    taskCaseIdIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getTaskId() const
{
    return taskId_;
}

void TaskCaseResponseTimeDetailVo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getTaskName() const
{
    return taskName_;
}

void TaskCaseResponseTimeDetailVo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string TaskCaseResponseTimeDetailVo::getTaskTypeId() const
{
    return taskTypeId_;
}

void TaskCaseResponseTimeDetailVo::setTaskTypeId(const std::string& value)
{
    taskTypeId_ = value;
    taskTypeIdIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::taskTypeIdIsSet() const
{
    return taskTypeIdIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettaskTypeId()
{
    taskTypeIdIsSet_ = false;
}

int32_t TaskCaseResponseTimeDetailVo::getTestSuiteType() const
{
    return testSuiteType_;
}

void TaskCaseResponseTimeDetailVo::setTestSuiteType(int32_t value)
{
    testSuiteType_ = value;
    testSuiteTypeIsSet_ = true;
}

bool TaskCaseResponseTimeDetailVo::testSuiteTypeIsSet() const
{
    return testSuiteTypeIsSet_;
}

void TaskCaseResponseTimeDetailVo::unsettestSuiteType()
{
    testSuiteTypeIsSet_ = false;
}

}
}
}
}
}


