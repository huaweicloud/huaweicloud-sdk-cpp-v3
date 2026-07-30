

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobDetailsRequest::ShowTrainingJobDetailsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowTrainingJobDetailsRequest::~ShowTrainingJobDetailsRequest() = default;

void ShowTrainingJobDetailsRequest::validate()
{
}

web::json::value ShowTrainingJobDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowTrainingJobDetailsRequest::fromJson(const web::json::value& val)
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


std::string ShowTrainingJobDetailsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowTrainingJobDetailsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowTrainingJobDetailsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowTrainingJobDetailsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


