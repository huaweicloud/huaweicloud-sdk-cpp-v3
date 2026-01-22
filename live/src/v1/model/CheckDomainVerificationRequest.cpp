

#include "huaweicloud/live/v1/model/CheckDomainVerificationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CheckDomainVerificationRequest::CheckDomainVerificationRequest()
{
    bodyIsSet_ = false;
}

CheckDomainVerificationRequest::~CheckDomainVerificationRequest() = default;

void CheckDomainVerificationRequest::validate()
{
}

web::json::value CheckDomainVerificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckDomainVerificationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckDomainVerificationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CheckDomainVerificationInfo CheckDomainVerificationRequest::getBody() const
{
    return body_;
}

void CheckDomainVerificationRequest::setBody(const CheckDomainVerificationInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckDomainVerificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckDomainVerificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


