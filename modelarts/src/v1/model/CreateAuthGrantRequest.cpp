

#include "huaweicloud/modelarts/v1/model/CreateAuthGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAuthGrantRequest::CreateAuthGrantRequest()
{
    bodyIsSet_ = false;
}

CreateAuthGrantRequest::~CreateAuthGrantRequest() = default;

void CreateAuthGrantRequest::validate()
{
}

web::json::value CreateAuthGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAuthGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AuthGrantRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AuthGrantRequest CreateAuthGrantRequest::getBody() const
{
    return body_;
}

void CreateAuthGrantRequest::setBody(const AuthGrantRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAuthGrantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAuthGrantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


