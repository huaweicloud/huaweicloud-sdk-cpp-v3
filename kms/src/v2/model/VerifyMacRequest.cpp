

#include "huaweicloud/kms/v2/model/VerifyMacRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




VerifyMacRequest::VerifyMacRequest()
{
    bodyIsSet_ = false;
}

VerifyMacRequest::~VerifyMacRequest() = default;

void VerifyMacRequest::validate()
{
}

web::json::value VerifyMacRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool VerifyMacRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VerifyMacRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


VerifyMacRequestBody VerifyMacRequest::getBody() const
{
    return body_;
}

void VerifyMacRequest::setBody(const VerifyMacRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool VerifyMacRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void VerifyMacRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


