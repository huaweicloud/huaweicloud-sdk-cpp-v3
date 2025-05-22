

#include "huaweicloud/csms/v1/model/CheckSecretsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CheckSecretsRequest::CheckSecretsRequest()
{
    bodyIsSet_ = false;
}

CheckSecretsRequest::~CheckSecretsRequest() = default;

void CheckSecretsRequest::validate()
{
}

web::json::value CheckSecretsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckSecretsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckSecretsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CheckSecretsRequestBody CheckSecretsRequest::getBody() const
{
    return body_;
}

void CheckSecretsRequest::setBody(const CheckSecretsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckSecretsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckSecretsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


