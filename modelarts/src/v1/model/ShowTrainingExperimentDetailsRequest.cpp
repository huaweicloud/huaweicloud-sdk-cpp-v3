

#include "huaweicloud/modelarts/v1/model/ShowTrainingExperimentDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingExperimentDetailsRequest::ShowTrainingExperimentDetailsRequest()
{
    experimentId_ = "";
    experimentIdIsSet_ = false;
}

ShowTrainingExperimentDetailsRequest::~ShowTrainingExperimentDetailsRequest() = default;

void ShowTrainingExperimentDetailsRequest::validate()
{
}

web::json::value ShowTrainingExperimentDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(experimentIdIsSet_) {
        val[utility::conversions::to_string_t("experiment_id")] = ModelBase::toJson(experimentId_);
    }

    return val;
}
bool ShowTrainingExperimentDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("experiment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("experiment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExperimentId(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingExperimentDetailsRequest::getExperimentId() const
{
    return experimentId_;
}

void ShowTrainingExperimentDetailsRequest::setExperimentId(const std::string& value)
{
    experimentId_ = value;
    experimentIdIsSet_ = true;
}

bool ShowTrainingExperimentDetailsRequest::experimentIdIsSet() const
{
    return experimentIdIsSet_;
}

void ShowTrainingExperimentDetailsRequest::unsetexperimentId()
{
    experimentIdIsSet_ = false;
}

}
}
}
}
}


