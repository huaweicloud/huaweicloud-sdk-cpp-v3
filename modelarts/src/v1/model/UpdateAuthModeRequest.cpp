

#include "huaweicloud/modelarts/v1/model/UpdateAuthModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateAuthModeRequest::UpdateAuthModeRequest()
{
    bodyIsSet_ = false;
}

UpdateAuthModeRequest::~UpdateAuthModeRequest() = default;

void UpdateAuthModeRequest::validate()
{
}

web::json::value UpdateAuthModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuthModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAuthModeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateAuthModeRequestBody UpdateAuthModeRequest::getBody() const
{
    return body_;
}

void UpdateAuthModeRequest::setBody(const UpdateAuthModeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuthModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuthModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


