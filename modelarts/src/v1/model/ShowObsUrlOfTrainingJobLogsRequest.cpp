

#include "huaweicloud/modelarts/v1/model/ShowObsUrlOfTrainingJobLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowObsUrlOfTrainingJobLogsRequest::ShowObsUrlOfTrainingJobLogsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowObsUrlOfTrainingJobLogsRequest::~ShowObsUrlOfTrainingJobLogsRequest() = default;

void ShowObsUrlOfTrainingJobLogsRequest::validate()
{
}

web::json::value ShowObsUrlOfTrainingJobLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowObsUrlOfTrainingJobLogsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowObsUrlOfTrainingJobLogsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowObsUrlOfTrainingJobLogsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowObsUrlOfTrainingJobLogsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowObsUrlOfTrainingJobLogsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowObsUrlOfTrainingJobLogsRequest::getTaskId() const
{
    return taskId_;
}

void ShowObsUrlOfTrainingJobLogsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowObsUrlOfTrainingJobLogsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowObsUrlOfTrainingJobLogsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowObsUrlOfTrainingJobLogsRequest::getContentType() const
{
    return contentType_;
}

void ShowObsUrlOfTrainingJobLogsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowObsUrlOfTrainingJobLogsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowObsUrlOfTrainingJobLogsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


