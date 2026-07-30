

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobLogsPreviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobLogsPreviewRequest::ShowTrainingJobLogsPreviewRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowTrainingJobLogsPreviewRequest::~ShowTrainingJobLogsPreviewRequest() = default;

void ShowTrainingJobLogsPreviewRequest::validate()
{
}

web::json::value ShowTrainingJobLogsPreviewRequest::toJson() const
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
bool ShowTrainingJobLogsPreviewRequest::fromJson(const web::json::value& val)
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


std::string ShowTrainingJobLogsPreviewRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowTrainingJobLogsPreviewRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowTrainingJobLogsPreviewRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowTrainingJobLogsPreviewRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowTrainingJobLogsPreviewRequest::getTaskId() const
{
    return taskId_;
}

void ShowTrainingJobLogsPreviewRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTrainingJobLogsPreviewRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTrainingJobLogsPreviewRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


