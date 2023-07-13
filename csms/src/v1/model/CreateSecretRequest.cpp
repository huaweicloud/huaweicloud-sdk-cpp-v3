

#include "huaweicloud/csms/v1/model/CreateSecretRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretRequest::CreateSecretRequest()
{
    bodyIsSet_ = false;
}

CreateSecretRequest::~CreateSecretRequest() = default;

void CreateSecretRequest::validate()
{
}

web::json::value CreateSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSecretRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSecretRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateSecretRequestBody CreateSecretRequest::getBody() const
{
    return body_;
}

void CreateSecretRequest::setBody(const CreateSecretRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecretRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecretRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


