

#include "huaweicloud/aad/v1/model/SetCertForDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




SetCertForDomainRequest::SetCertForDomainRequest()
{
    bodyIsSet_ = false;
}

SetCertForDomainRequest::~SetCertForDomainRequest() = default;

void SetCertForDomainRequest::validate()
{
}

web::json::value SetCertForDomainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetCertForDomainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CertificateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CertificateBody SetCertForDomainRequest::getBody() const
{
    return body_;
}

void SetCertForDomainRequest::setBody(const CertificateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetCertForDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetCertForDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


