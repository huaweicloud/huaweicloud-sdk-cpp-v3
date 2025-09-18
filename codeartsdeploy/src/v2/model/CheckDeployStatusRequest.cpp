

#include "huaweicloud/codeartsdeploy/v2/model/CheckDeployStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckDeployStatusRequest::CheckDeployStatusRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
    stepState_ = false;
    stepStateIsSet_ = false;
}

CheckDeployStatusRequest::~CheckDeployStatusRequest() = default;

void CheckDeployStatusRequest::validate()
{
}

web::json::value CheckDeployStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(stepStateIsSet_) {
        val[utility::conversions::to_string_t("step_state")] = ModelBase::toJson(stepState_);
    }

    return val;
}
bool CheckDeployStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_state"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepState(refVal);
        }
    }
    return ok;
}


std::string CheckDeployStatusRequest::getTaskId() const
{
    return taskId_;
}

void CheckDeployStatusRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CheckDeployStatusRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CheckDeployStatusRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CheckDeployStatusRequest::getRecordId() const
{
    return recordId_;
}

void CheckDeployStatusRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool CheckDeployStatusRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void CheckDeployStatusRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

bool CheckDeployStatusRequest::isStepState() const
{
    return stepState_;
}

void CheckDeployStatusRequest::setStepState(bool value)
{
    stepState_ = value;
    stepStateIsSet_ = true;
}

bool CheckDeployStatusRequest::stepStateIsSet() const
{
    return stepStateIsSet_;
}

void CheckDeployStatusRequest::unsetstepState()
{
    stepStateIsSet_ = false;
}

}
}
}
}
}


