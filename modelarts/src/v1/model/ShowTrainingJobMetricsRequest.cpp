

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobMetricsRequest::ShowTrainingJobMetricsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowTrainingJobMetricsRequest::~ShowTrainingJobMetricsRequest() = default;

void ShowTrainingJobMetricsRequest::validate()
{
}

web::json::value ShowTrainingJobMetricsRequest::toJson() const
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
bool ShowTrainingJobMetricsRequest::fromJson(const web::json::value& val)
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


std::string ShowTrainingJobMetricsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowTrainingJobMetricsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowTrainingJobMetricsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowTrainingJobMetricsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowTrainingJobMetricsRequest::getTaskId() const
{
    return taskId_;
}

void ShowTrainingJobMetricsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTrainingJobMetricsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTrainingJobMetricsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


