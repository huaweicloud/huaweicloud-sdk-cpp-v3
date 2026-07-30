

#include "huaweicloud/modelarts/v1/model/CreateModelArtsAgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateModelArtsAgencyRequest::CreateModelArtsAgencyRequest()
{
    bodyIsSet_ = false;
}

CreateModelArtsAgencyRequest::~CreateModelArtsAgencyRequest() = default;

void CreateModelArtsAgencyRequest::validate()
{
}

web::json::value CreateModelArtsAgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateModelArtsAgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModelArtsAgencyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModelArtsAgencyRequest CreateModelArtsAgencyRequest::getBody() const
{
    return body_;
}

void CreateModelArtsAgencyRequest::setBody(const ModelArtsAgencyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateModelArtsAgencyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateModelArtsAgencyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


