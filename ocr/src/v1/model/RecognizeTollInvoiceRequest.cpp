

#include "huaweicloud/ocr/v1/model/RecognizeTollInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTollInvoiceRequest::RecognizeTollInvoiceRequest()
{
    bodyIsSet_ = false;
}

RecognizeTollInvoiceRequest::~RecognizeTollInvoiceRequest() = default;

void RecognizeTollInvoiceRequest::validate()
{
}

web::json::value RecognizeTollInvoiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeTollInvoiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TollInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TollInvoiceRequestBody RecognizeTollInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeTollInvoiceRequest::setBody(const TollInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeTollInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeTollInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


