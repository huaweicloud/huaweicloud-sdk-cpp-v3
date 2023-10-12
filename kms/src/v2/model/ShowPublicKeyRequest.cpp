

#include "huaweicloud/kms/v2/model/ShowPublicKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowPublicKeyRequest::ShowPublicKeyRequest()
{
    bodyIsSet_ = false;
}

ShowPublicKeyRequest::~ShowPublicKeyRequest() = default;

void ShowPublicKeyRequest::validate()
{
}

web::json::value ShowPublicKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPublicKeyRequest::fromJson(const web::json::value& val)
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


OperateKeyRequestBody ShowPublicKeyRequest::getBody() const
{
    return body_;
}

void ShowPublicKeyRequest::setBody(const OperateKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPublicKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPublicKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


