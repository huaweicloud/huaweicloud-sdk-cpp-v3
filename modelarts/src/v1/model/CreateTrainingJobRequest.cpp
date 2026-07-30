

#include "huaweicloud/modelarts/v1/model/CreateTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainingJobRequest::CreateTrainingJobRequest()
{
    bodyIsSet_ = false;
}

CreateTrainingJobRequest::~CreateTrainingJobRequest() = default;

void CreateTrainingJobRequest::validate()
{
}

web::json::value CreateTrainingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTrainingJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Job refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Job CreateTrainingJobRequest::getBody() const
{
    return body_;
}

void CreateTrainingJobRequest::setBody(const Job& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrainingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrainingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


