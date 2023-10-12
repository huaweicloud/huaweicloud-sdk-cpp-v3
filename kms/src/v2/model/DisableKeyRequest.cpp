

#include "huaweicloud/kms/v2/model/DisableKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DisableKeyRequest::DisableKeyRequest()
{
    bodyIsSet_ = false;
}

DisableKeyRequest::~DisableKeyRequest() = default;

void DisableKeyRequest::validate()
{
}

web::json::value DisableKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisableKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


OperateKeyRequestBody DisableKeyRequest::getBody() const
{
    return body_;
}

void DisableKeyRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


