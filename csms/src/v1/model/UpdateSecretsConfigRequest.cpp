

#include "huaweicloud/csms/v1/model/UpdateSecretsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretsConfigRequest::UpdateSecretsConfigRequest()
{
    bodyIsSet_ = false;
}

UpdateSecretsConfigRequest::~UpdateSecretsConfigRequest() = default;

void UpdateSecretsConfigRequest::validate()
{
}

web::json::value UpdateSecretsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSecretsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSecretsConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateSecretsConfigRequestBody UpdateSecretsConfigRequest::getBody() const
{
    return body_;
}

void UpdateSecretsConfigRequest::setBody(const UpdateSecretsConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSecretsConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSecretsConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


