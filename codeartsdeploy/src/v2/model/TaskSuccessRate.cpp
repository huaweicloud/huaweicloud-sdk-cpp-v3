

#include "huaweicloud/codeartsdeploy/v2/model/TaskSuccessRate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




TaskSuccessRate::TaskSuccessRate()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    successRate_ = "";
    successRateIsSet_ = false;
    recordCount_ = 0;
    recordCountIsSet_ = false;
    successRecordCount_ = 0;
    successRecordCountIsSet_ = false;
}

TaskSuccessRate::~TaskSuccessRate() = default;

void TaskSuccessRate::validate()
{
}

web::json::value TaskSuccessRate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(successRateIsSet_) {
        val[utility::conversions::to_string_t("success_rate")] = ModelBase::toJson(successRate_);
    }
    if(recordCountIsSet_) {
        val[utility::conversions::to_string_t("record_count")] = ModelBase::toJson(recordCount_);
    }
    if(successRecordCountIsSet_) {
        val[utility::conversions::to_string_t("success_record_count")] = ModelBase::toJson(successRecordCount_);
    }

    return val;
}
bool TaskSuccessRate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_record_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_record_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRecordCount(refVal);
        }
    }
    return ok;
}


std::string TaskSuccessRate::getTaskId() const
{
    return taskId_;
}

void TaskSuccessRate::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TaskSuccessRate::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TaskSuccessRate::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TaskSuccessRate::getTaskName() const
{
    return taskName_;
}

void TaskSuccessRate::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool TaskSuccessRate::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void TaskSuccessRate::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string TaskSuccessRate::getSuccessRate() const
{
    return successRate_;
}

void TaskSuccessRate::setSuccessRate(const std::string& value)
{
    successRate_ = value;
    successRateIsSet_ = true;
}

bool TaskSuccessRate::successRateIsSet() const
{
    return successRateIsSet_;
}

void TaskSuccessRate::unsetsuccessRate()
{
    successRateIsSet_ = false;
}

int32_t TaskSuccessRate::getRecordCount() const
{
    return recordCount_;
}

void TaskSuccessRate::setRecordCount(int32_t value)
{
    recordCount_ = value;
    recordCountIsSet_ = true;
}

bool TaskSuccessRate::recordCountIsSet() const
{
    return recordCountIsSet_;
}

void TaskSuccessRate::unsetrecordCount()
{
    recordCountIsSet_ = false;
}

int32_t TaskSuccessRate::getSuccessRecordCount() const
{
    return successRecordCount_;
}

void TaskSuccessRate::setSuccessRecordCount(int32_t value)
{
    successRecordCount_ = value;
    successRecordCountIsSet_ = true;
}

bool TaskSuccessRate::successRecordCountIsSet() const
{
    return successRecordCountIsSet_;
}

void TaskSuccessRate::unsetsuccessRecordCount()
{
    successRecordCountIsSet_ = false;
}

}
}
}
}
}


