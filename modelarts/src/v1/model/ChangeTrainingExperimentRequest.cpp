

#include "huaweicloud/modelarts/v1/model/ChangeTrainingExperimentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeTrainingExperimentRequest::ChangeTrainingExperimentRequest()
{
    experimentId_ = "";
    experimentIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeTrainingExperimentRequest::~ChangeTrainingExperimentRequest() = default;

void ChangeTrainingExperimentRequest::validate()
{
}

web::json::value ChangeTrainingExperimentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(experimentIdIsSet_) {
        val[utility::conversions::to_string_t("experiment_id")] = ModelBase::toJson(experimentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeTrainingExperimentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeTrainingExperimentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeTrainingExperimentRequest::getExperimentId() const
{
    return experimentId_;
}

void ChangeTrainingExperimentRequest::setExperimentId(const std::string& value)
{
    experimentId_ = value;
    experimentIdIsSet_ = true;
}

bool ChangeTrainingExperimentRequest::experimentIdIsSet() const
{
    return experimentIdIsSet_;
}

void ChangeTrainingExperimentRequest::unsetexperimentId()
{
    experimentIdIsSet_ = false;
}

ChangeTrainingExperimentRequestBody ChangeTrainingExperimentRequest::getBody() const
{
    return body_;
}

void ChangeTrainingExperimentRequest::setBody(const ChangeTrainingExperimentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeTrainingExperimentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeTrainingExperimentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


