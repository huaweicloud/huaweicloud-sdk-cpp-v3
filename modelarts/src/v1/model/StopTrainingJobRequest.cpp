

#include "huaweicloud/modelarts/v1/model/StopTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopTrainingJobRequest::StopTrainingJobRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopTrainingJobRequest::~StopTrainingJobRequest() = default;

void StopTrainingJobRequest::validate()
{
}

web::json::value StopTrainingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StopTrainingJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            JobActionType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopTrainingJobRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void StopTrainingJobRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool StopTrainingJobRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void StopTrainingJobRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

JobActionType StopTrainingJobRequest::getBody() const
{
    return body_;
}

void StopTrainingJobRequest::setBody(const JobActionType& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopTrainingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopTrainingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


