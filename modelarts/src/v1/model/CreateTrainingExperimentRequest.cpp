

#include "huaweicloud/modelarts/v1/model/CreateTrainingExperimentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainingExperimentRequest::CreateTrainingExperimentRequest()
{
    bodyIsSet_ = false;
}

CreateTrainingExperimentRequest::~CreateTrainingExperimentRequest() = default;

void CreateTrainingExperimentRequest::validate()
{
}

web::json::value CreateTrainingExperimentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTrainingExperimentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTrainingExperimentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTrainingExperimentRequestBody CreateTrainingExperimentRequest::getBody() const
{
    return body_;
}

void CreateTrainingExperimentRequest::setBody(const CreateTrainingExperimentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainingExperimentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainingExperimentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


