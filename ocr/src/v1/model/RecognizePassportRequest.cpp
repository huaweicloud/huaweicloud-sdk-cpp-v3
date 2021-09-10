

#include "huaweicloud/ocr/v1/model/RecognizePassportRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizePassportRequest::RecognizePassportRequest()
{
    bodyIsSet_ = false;
}

RecognizePassportRequest::~RecognizePassportRequest() = default;

void RecognizePassportRequest::validate()
{
}

web::json::value RecognizePassportRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizePassportRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PassportRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PassportRequestBody RecognizePassportRequest::getBody() const
{
    return body_;
}

void RecognizePassportRequest::setBody(const PassportRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizePassportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizePassportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


