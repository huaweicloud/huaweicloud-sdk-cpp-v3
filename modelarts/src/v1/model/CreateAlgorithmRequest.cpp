

#include "huaweicloud/modelarts/v1/model/CreateAlgorithmRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAlgorithmRequest::CreateAlgorithmRequest()
{
    bodyIsSet_ = false;
}

CreateAlgorithmRequest::~CreateAlgorithmRequest() = default;

void CreateAlgorithmRequest::validate()
{
}

web::json::value CreateAlgorithmRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAlgorithmRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Algorithm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Algorithm CreateAlgorithmRequest::getBody() const
{
    return body_;
}

void CreateAlgorithmRequest::setBody(const Algorithm& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAlgorithmRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAlgorithmRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


