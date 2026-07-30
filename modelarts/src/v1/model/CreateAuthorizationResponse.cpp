

#include "huaweicloud/modelarts/v1/model/CreateAuthorizationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAuthorizationResponse::CreateAuthorizationResponse()
{
    bodyIsSet_ = false;
}

CreateAuthorizationResponse::~CreateAuthorizationResponse() = default;

void CreateAuthorizationResponse::validate()
{
}

web::json::value CreateAuthorizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAuthorizationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object CreateAuthorizationResponse::getBody() const
{
    return body_;
}

void CreateAuthorizationResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuthorizationResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuthorizationResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


