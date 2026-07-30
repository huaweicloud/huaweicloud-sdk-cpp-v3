

#include "huaweicloud/modelarts/v1/model/DeleteTrainingExperimentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteTrainingExperimentRequest::DeleteTrainingExperimentRequest()
{
    experimentId_ = "";
    experimentIdIsSet_ = false;
}

DeleteTrainingExperimentRequest::~DeleteTrainingExperimentRequest() = default;

void DeleteTrainingExperimentRequest::validate()
{
}

web::json::value DeleteTrainingExperimentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(experimentIdIsSet_) {
        val[utility::conversions::to_string_t("experiment_id")] = ModelBase::toJson(experimentId_);
    }

    return val;
}
bool DeleteTrainingExperimentRequest::fromJson(const web::json::value& val)
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


std::string DeleteTrainingExperimentRequest::getExperimentId() const
{
    return experimentId_;
}

void DeleteTrainingExperimentRequest::setExperimentId(const std::string& value)
{
    experimentId_ = value;
    experimentIdIsSet_ = true;
}

bool DeleteTrainingExperimentRequest::experimentIdIsSet() const
{
    return experimentIdIsSet_;
}

void DeleteTrainingExperimentRequest::unsetexperimentId()
{
    experimentIdIsSet_ = false;
}

}
}
}
}
}


