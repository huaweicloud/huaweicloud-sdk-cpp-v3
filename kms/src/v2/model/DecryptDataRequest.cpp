

#include "huaweicloud/kms/v2/model/DecryptDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDataRequest::DecryptDataRequest()
{
    bodyIsSet_ = false;
}

DecryptDataRequest::~DecryptDataRequest() = default;

void DecryptDataRequest::validate()
{
}

web::json::value DecryptDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DecryptDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DecryptDataRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DecryptDataRequestBody DecryptDataRequest::getBody() const
{
    return body_;
}

void DecryptDataRequest::setBody(const DecryptDataRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DecryptDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DecryptDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


