

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchParamsAnalysisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchParamsAnalysisRequest::ShowAutoSearchParamsAnalysisRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowAutoSearchParamsAnalysisRequest::~ShowAutoSearchParamsAnalysisRequest() = default;

void ShowAutoSearchParamsAnalysisRequest::validate()
{
}

web::json::value ShowAutoSearchParamsAnalysisRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowAutoSearchParamsAnalysisRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoSearchParamsAnalysisRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowAutoSearchParamsAnalysisRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowAutoSearchParamsAnalysisRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowAutoSearchParamsAnalysisRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


