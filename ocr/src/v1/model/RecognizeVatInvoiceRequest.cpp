

#include "huaweicloud/ocr/v1/model/RecognizeVatInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVatInvoiceRequest::RecognizeVatInvoiceRequest()
{
    bodyIsSet_ = false;
}

RecognizeVatInvoiceRequest::~RecognizeVatInvoiceRequest() = default;

void RecognizeVatInvoiceRequest::validate()
{
}

web::json::value RecognizeVatInvoiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeVatInvoiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VatInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


VatInvoiceRequestBody RecognizeVatInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeVatInvoiceRequest::setBody(const VatInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVatInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVatInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


