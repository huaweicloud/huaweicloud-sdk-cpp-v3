

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchParamAnalysisResultPathRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchParamAnalysisResultPathRequest::ShowAutoSearchParamAnalysisResultPathRequest()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowAutoSearchParamAnalysisResultPathRequest::~ShowAutoSearchParamAnalysisResultPathRequest() = default;

void ShowAutoSearchParamAnalysisResultPathRequest::validate()
{
}

web::json::value ShowAutoSearchParamAnalysisResultPathRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowAutoSearchParamAnalysisResultPathRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameter_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterName(refVal);
        }
    }
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


std::string ShowAutoSearchParamAnalysisResultPathRequest::getParameterName() const
{
    return parameterName_;
}

void ShowAutoSearchParamAnalysisResultPathRequest::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ShowAutoSearchParamAnalysisResultPathRequest::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ShowAutoSearchParamAnalysisResultPathRequest::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ShowAutoSearchParamAnalysisResultPathRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowAutoSearchParamAnalysisResultPathRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowAutoSearchParamAnalysisResultPathRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowAutoSearchParamAnalysisResultPathRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


