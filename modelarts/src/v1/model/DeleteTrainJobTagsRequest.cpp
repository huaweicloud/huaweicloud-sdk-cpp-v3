

#include "huaweicloud/modelarts/v1/model/DeleteTrainJobTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTrainJobTagsRequest::DeleteTrainJobTagsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTrainJobTagsRequest::~DeleteTrainJobTagsRequest() = default;

void DeleteTrainJobTagsRequest::validate()
{
}

web::json::value DeleteTrainJobTagsRequest::toJson() const
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
bool DeleteTrainJobTagsRequest::fromJson(const web::json::value& val)
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
            DeleteTmsTagsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTrainJobTagsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void DeleteTrainJobTagsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool DeleteTrainJobTagsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void DeleteTrainJobTagsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

DeleteTmsTagsRequest DeleteTrainJobTagsRequest::getBody() const
{
    return body_;
}

void DeleteTrainJobTagsRequest::setBody(const DeleteTmsTagsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTrainJobTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTrainJobTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


