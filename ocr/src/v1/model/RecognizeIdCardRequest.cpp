

#include "huaweicloud/ocr/v1/model/RecognizeIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeIdCardRequest::RecognizeIdCardRequest()
{
    bodyIsSet_ = false;
}

RecognizeIdCardRequest::~RecognizeIdCardRequest() = default;

void RecognizeIdCardRequest::validate()
{
}

web::json::value RecognizeIdCardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeIdCardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IdCardRequestBody RecognizeIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeIdCardRequest::setBody(const IdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


