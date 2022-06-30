

#include "huaweicloud/ocr/v1/model/RecognizeCambodianIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeCambodianIdCardRequest::RecognizeCambodianIdCardRequest()
{
    bodyIsSet_ = false;
}

RecognizeCambodianIdCardRequest::~RecognizeCambodianIdCardRequest() = default;

void RecognizeCambodianIdCardRequest::validate()
{
}

web::json::value RecognizeCambodianIdCardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeCambodianIdCardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CambodianIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CambodianIdCardRequestBody RecognizeCambodianIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeCambodianIdCardRequest::setBody(const CambodianIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeCambodianIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeCambodianIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


