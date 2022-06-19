

#include "huaweicloud/ocr/v1/model/RecognizeIdDocumentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeIdDocumentRequest::RecognizeIdDocumentRequest()
{
    bodyIsSet_ = false;
}

RecognizeIdDocumentRequest::~RecognizeIdDocumentRequest() = default;

void RecognizeIdDocumentRequest::validate()
{
}

web::json::value RecognizeIdDocumentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeIdDocumentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IdDocumentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IdDocumentRequestBody RecognizeIdDocumentRequest::getBody() const
{
    return body_;
}

void RecognizeIdDocumentRequest::setBody(const IdDocumentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeIdDocumentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeIdDocumentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


