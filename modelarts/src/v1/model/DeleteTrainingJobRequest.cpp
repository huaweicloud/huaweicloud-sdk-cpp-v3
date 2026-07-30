

#include "huaweicloud/modelarts/v1/model/DeleteTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTrainingJobRequest::DeleteTrainingJobRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

DeleteTrainingJobRequest::~DeleteTrainingJobRequest() = default;

void DeleteTrainingJobRequest::validate()
{
}

web::json::value DeleteTrainingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool DeleteTrainingJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteTrainingJobRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void DeleteTrainingJobRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool DeleteTrainingJobRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void DeleteTrainingJobRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


