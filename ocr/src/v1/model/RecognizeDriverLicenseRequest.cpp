

#include "huaweicloud/ocr/v1/model/RecognizeDriverLicenseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeDriverLicenseRequest::RecognizeDriverLicenseRequest()
{
    bodyIsSet_ = false;
}

RecognizeDriverLicenseRequest::~RecognizeDriverLicenseRequest() = default;

void RecognizeDriverLicenseRequest::validate()
{
}

web::json::value RecognizeDriverLicenseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeDriverLicenseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DriverLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DriverLicenseRequestBody RecognizeDriverLicenseRequest::getBody() const
{
    return body_;
}

void RecognizeDriverLicenseRequest::setBody(const DriverLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeDriverLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeDriverLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


