

#include "huaweicloud/aad/v1/model/CreateCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




CreateCertificateRequest::CreateCertificateRequest()
{
    bodyIsSet_ = false;
}

CreateCertificateRequest::~CreateCertificateRequest() = default;

void CreateCertificateRequest::validate()
{
}

web::json::value CreateCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCertificateRequest::fromJson(const web::json::value& val)
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


CertificateBody CreateCertificateRequest::getBody() const
{
    return body_;
}

void CreateCertificateRequest::setBody(const CertificateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


