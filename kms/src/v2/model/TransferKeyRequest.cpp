

#include "huaweicloud/kms/v2/model/TransferKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




TransferKeyRequest::TransferKeyRequest()
{
    bodyIsSet_ = false;
}

TransferKeyRequest::~TransferKeyRequest() = default;

void TransferKeyRequest::validate()
{
}

web::json::value TransferKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TransferKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TransferKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TransferKeyRequestBody TransferKeyRequest::getBody() const
{
    return body_;
}

void TransferKeyRequest::setBody(const TransferKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransferKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransferKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


