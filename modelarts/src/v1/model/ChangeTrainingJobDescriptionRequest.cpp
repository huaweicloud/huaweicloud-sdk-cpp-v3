

#include "huaweicloud/modelarts/v1/model/ChangeTrainingJobDescriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeTrainingJobDescriptionRequest::ChangeTrainingJobDescriptionRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeTrainingJobDescriptionRequest::~ChangeTrainingJobDescriptionRequest() = default;

void ChangeTrainingJobDescriptionRequest::validate()
{
}

web::json::value ChangeTrainingJobDescriptionRequest::toJson() const
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
bool ChangeTrainingJobDescriptionRequest::fromJson(const web::json::value& val)
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
            JobDescription refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeTrainingJobDescriptionRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ChangeTrainingJobDescriptionRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ChangeTrainingJobDescriptionRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ChangeTrainingJobDescriptionRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

JobDescription ChangeTrainingJobDescriptionRequest::getBody() const
{
    return body_;
}

void ChangeTrainingJobDescriptionRequest::setBody(const JobDescription& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeTrainingJobDescriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeTrainingJobDescriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


