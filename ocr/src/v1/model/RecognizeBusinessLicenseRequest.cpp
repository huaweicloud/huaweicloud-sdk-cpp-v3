

#include "huaweicloud/ocr/v1/model/RecognizeBusinessLicenseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBusinessLicenseRequest::RecognizeBusinessLicenseRequest()
{
    bodyIsSet_ = false;
}

RecognizeBusinessLicenseRequest::~RecognizeBusinessLicenseRequest() = default;

void RecognizeBusinessLicenseRequest::validate()
{
}

web::json::value RecognizeBusinessLicenseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeBusinessLicenseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BusinessLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BusinessLicenseRequestBody RecognizeBusinessLicenseRequest::getBody() const
{
    return body_;
}

void RecognizeBusinessLicenseRequest::setBody(const BusinessLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeBusinessLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeBusinessLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


