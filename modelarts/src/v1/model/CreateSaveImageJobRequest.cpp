

#include "huaweicloud/modelarts/v1/model/CreateSaveImageJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateSaveImageJobRequest::CreateSaveImageJobRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSaveImageJobRequest::~CreateSaveImageJobRequest() = default;

void CreateSaveImageJobRequest::validate()
{
}

web::json::value CreateSaveImageJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSaveImageJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImageSaveJob refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSaveImageJobRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void CreateSaveImageJobRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool CreateSaveImageJobRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void CreateSaveImageJobRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string CreateSaveImageJobRequest::getTaskId() const
{
    return taskId_;
}

void CreateSaveImageJobRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateSaveImageJobRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateSaveImageJobRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

ImageSaveJob CreateSaveImageJobRequest::getBody() const
{
    return body_;
}

void CreateSaveImageJobRequest::setBody(const ImageSaveJob& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSaveImageJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSaveImageJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


