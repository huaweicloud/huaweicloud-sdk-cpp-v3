

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchPerTrialRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchPerTrialRequest::ShowAutoSearchPerTrialRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    trialId_ = "";
    trialIdIsSet_ = false;
}

ShowAutoSearchPerTrialRequest::~ShowAutoSearchPerTrialRequest() = default;

void ShowAutoSearchPerTrialRequest::validate()
{
}

web::json::value ShowAutoSearchPerTrialRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(trialIdIsSet_) {
        val[utility::conversions::to_string_t("trial_id")] = ModelBase::toJson(trialId_);
    }

    return val;
}
bool ShowAutoSearchPerTrialRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("trial_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trial_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrialId(refVal);
        }
    }
    return ok;
}


std::string ShowAutoSearchPerTrialRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowAutoSearchPerTrialRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowAutoSearchPerTrialRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowAutoSearchPerTrialRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowAutoSearchPerTrialRequest::getTrialId() const
{
    return trialId_;
}

void ShowAutoSearchPerTrialRequest::setTrialId(const std::string& value)
{
    trialId_ = value;
    trialIdIsSet_ = true;
}

bool ShowAutoSearchPerTrialRequest::trialIdIsSet() const
{
    return trialIdIsSet_;
}

void ShowAutoSearchPerTrialRequest::unsettrialId()
{
    trialIdIsSet_ = false;
}

}
}
}
}
}


