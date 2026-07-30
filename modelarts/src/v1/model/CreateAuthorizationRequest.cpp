

#include "huaweicloud/modelarts/v1/model/CreateAuthorizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAuthorizationRequest::CreateAuthorizationRequest()
{
    bodyIsSet_ = false;
}

CreateAuthorizationRequest::~CreateAuthorizationRequest() = default;

void CreateAuthorizationRequest::validate()
{
}

web::json::value CreateAuthorizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAuthorizationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AuthorizationRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AuthorizationRequest CreateAuthorizationRequest::getBody() const
{
    return body_;
}

void CreateAuthorizationRequest::setBody(const AuthorizationRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuthorizationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuthorizationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


