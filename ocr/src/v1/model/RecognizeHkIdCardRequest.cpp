

#include "huaweicloud/ocr/v1/model/RecognizeHkIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHkIdCardRequest::RecognizeHkIdCardRequest()
{
    bodyIsSet_ = false;
}

RecognizeHkIdCardRequest::~RecognizeHkIdCardRequest() = default;

void RecognizeHkIdCardRequest::validate()
{
}

web::json::value RecognizeHkIdCardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeHkIdCardRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HkIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


HkIdCardRequestBody RecognizeHkIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeHkIdCardRequest::setBody(const HkIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeHkIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeHkIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


