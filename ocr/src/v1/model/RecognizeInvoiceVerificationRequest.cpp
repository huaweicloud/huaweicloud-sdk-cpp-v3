

#include "huaweicloud/ocr/v1/model/RecognizeInvoiceVerificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeInvoiceVerificationRequest::RecognizeInvoiceVerificationRequest()
{
    bodyIsSet_ = false;
}

RecognizeInvoiceVerificationRequest::~RecognizeInvoiceVerificationRequest() = default;

void RecognizeInvoiceVerificationRequest::validate()
{
}

web::json::value RecognizeInvoiceVerificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeInvoiceVerificationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            InvoiceVerificationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


InvoiceVerificationRequestBody RecognizeInvoiceVerificationRequest::getBody() const
{
    return body_;
}

void RecognizeInvoiceVerificationRequest::setBody(const InvoiceVerificationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeInvoiceVerificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeInvoiceVerificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


