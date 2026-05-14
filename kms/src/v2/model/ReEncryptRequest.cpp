

#include "huaweicloud/kms/v2/model/ReEncryptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ReEncryptRequest::ReEncryptRequest()
{
    bodyIsSet_ = false;
}

ReEncryptRequest::~ReEncryptRequest() = default;

void ReEncryptRequest::validate()
{
}

web::json::value ReEncryptRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ReEncryptRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReEncryptRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ReEncryptRequestBody ReEncryptRequest::getBody() const
{
    return body_;
}

void ReEncryptRequest::setBody(const ReEncryptRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReEncryptRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReEncryptRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


