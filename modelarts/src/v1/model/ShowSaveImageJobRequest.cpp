

#include "huaweicloud/modelarts/v1/model/ShowSaveImageJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowSaveImageJobRequest::ShowSaveImageJobRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowSaveImageJobRequest::~ShowSaveImageJobRequest() = default;

void ShowSaveImageJobRequest::validate()
{
}

web::json::value ShowSaveImageJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowSaveImageJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingJobId(refVal);
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
    return ok;
}


std::string ShowSaveImageJobRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowSaveImageJobRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowSaveImageJobRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowSaveImageJobRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowSaveImageJobRequest::getTaskId() const
{
    return taskId_;
}

void ShowSaveImageJobRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowSaveImageJobRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowSaveImageJobRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


