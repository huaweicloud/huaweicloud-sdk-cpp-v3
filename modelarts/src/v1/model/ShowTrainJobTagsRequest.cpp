

#include "huaweicloud/modelarts/v1/model/ShowTrainJobTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainJobTagsRequest::ShowTrainJobTagsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowTrainJobTagsRequest::~ShowTrainJobTagsRequest() = default;

void ShowTrainJobTagsRequest::validate()
{
}

web::json::value ShowTrainJobTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowTrainJobTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTrainJobTagsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowTrainJobTagsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowTrainJobTagsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowTrainJobTagsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


