

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchTrialEarlyStopRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchTrialEarlyStopRequest::ShowAutoSearchTrialEarlyStopRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    trialId_ = "";
    trialIdIsSet_ = false;
}

ShowAutoSearchTrialEarlyStopRequest::~ShowAutoSearchTrialEarlyStopRequest() = default;

void ShowAutoSearchTrialEarlyStopRequest::validate()
{
}

web::json::value ShowAutoSearchTrialEarlyStopRequest::toJson() const
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
bool ShowAutoSearchTrialEarlyStopRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoSearchTrialEarlyStopRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowAutoSearchTrialEarlyStopRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowAutoSearchTrialEarlyStopRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowAutoSearchTrialEarlyStopRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowAutoSearchTrialEarlyStopRequest::getTrialId() const
{
    return trialId_;
}

void ShowAutoSearchTrialEarlyStopRequest::setTrialId(const std::string& value)
{
    trialId_ = value;
    trialIdIsSet_ = true;
}

bool ShowAutoSearchTrialEarlyStopRequest::trialIdIsSet() const
{
    return trialIdIsSet_;
}

void ShowAutoSearchTrialEarlyStopRequest::unsettrialId()
{
    trialIdIsSet_ = false;
}

}
}
}
}
}


