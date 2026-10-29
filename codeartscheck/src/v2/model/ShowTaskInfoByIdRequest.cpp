

#include "huaweicloud/codeartscheck/v2/model/ShowTaskInfoByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskInfoByIdRequest::ShowTaskInfoByIdRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    mergeId_ = "";
    mergeIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
}

ShowTaskInfoByIdRequest::~ShowTaskInfoByIdRequest() = default;

void ShowTaskInfoByIdRequest::validate()
{
}

web::json::value ShowTaskInfoByIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(mergeIdIsSet_) {
        val[utility::conversions::to_string_t("merge_id")] = ModelBase::toJson(mergeId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }

    return val;
}
bool ShowTaskInfoByIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    return ok;
}


std::string ShowTaskInfoByIdRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskInfoByIdRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskInfoByIdRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskInfoByIdRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTaskInfoByIdRequest::getMergeId() const
{
    return mergeId_;
}

void ShowTaskInfoByIdRequest::setMergeId(const std::string& value)
{
    mergeId_ = value;
    mergeIdIsSet_ = true;
}

bool ShowTaskInfoByIdRequest::mergeIdIsSet() const
{
    return mergeIdIsSet_;
}

void ShowTaskInfoByIdRequest::unsetmergeId()
{
    mergeIdIsSet_ = false;
}

std::string ShowTaskInfoByIdRequest::getJobId() const
{
    return jobId_;
}

void ShowTaskInfoByIdRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTaskInfoByIdRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTaskInfoByIdRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTaskInfoByIdRequest::getOperator() const
{
    return operator_;
}

void ShowTaskInfoByIdRequest::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ShowTaskInfoByIdRequest::operatorIsSet() const
{
    return operatorIsSet_;
}

void ShowTaskInfoByIdRequest::unsetoperator()
{
    operatorIsSet_ = false;
}

}
}
}
}
}


