

#include "huaweicloud/ocr/v1/model/RecognizeLicensePlateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeLicensePlateRequest::RecognizeLicensePlateRequest()
{
    bodyIsSet_ = false;
}

RecognizeLicensePlateRequest::~RecognizeLicensePlateRequest() = default;

void RecognizeLicensePlateRequest::validate()
{
}

web::json::value RecognizeLicensePlateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeLicensePlateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LicensePlateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LicensePlateRequestBody RecognizeLicensePlateRequest::getBody() const
{
    return body_;
}

void RecognizeLicensePlateRequest::setBody(const LicensePlateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeLicensePlateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeLicensePlateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


