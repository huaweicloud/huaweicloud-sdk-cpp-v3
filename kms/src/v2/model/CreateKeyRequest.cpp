

#include "huaweicloud/kms/v2/model/CreateKeyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyRequest::CreateKeyRequest()
{
    bodyIsSet_ = false;
}

CreateKeyRequest::~CreateKeyRequest() = default;

void CreateKeyRequest::validate()
{
}

web::json::value CreateKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateKeyRequestBody CreateKeyRequest::getBody() const
{
    return body_;
}

void CreateKeyRequest::setBody(const CreateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


