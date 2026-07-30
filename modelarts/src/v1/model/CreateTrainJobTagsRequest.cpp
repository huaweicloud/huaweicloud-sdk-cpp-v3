

#include "huaweicloud/modelarts/v1/model/CreateTrainJobTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainJobTagsRequest::CreateTrainJobTagsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTrainJobTagsRequest::~CreateTrainJobTagsRequest() = default;

void CreateTrainJobTagsRequest::validate()
{
}

web::json::value CreateTrainJobTagsRequest::toJson() const
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
bool CreateTrainJobTagsRequest::fromJson(const web::json::value& val)
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
            CreateTmsTagsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTrainJobTagsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void CreateTrainJobTagsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool CreateTrainJobTagsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void CreateTrainJobTagsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

CreateTmsTagsRequest CreateTrainJobTagsRequest::getBody() const
{
    return body_;
}

void CreateTrainJobTagsRequest::setBody(const CreateTmsTagsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainJobTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainJobTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


