

#include "huaweicloud/ocr/v1/model/RecognizeThailandLicensePlateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandLicensePlateRequest::RecognizeThailandLicensePlateRequest()
{
    bodyIsSet_ = false;
}

RecognizeThailandLicensePlateRequest::~RecognizeThailandLicensePlateRequest() = default;

void RecognizeThailandLicensePlateRequest::validate()
{
}

web::json::value RecognizeThailandLicensePlateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeThailandLicensePlateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ThailandLicensePlateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ThailandLicensePlateRequestBody RecognizeThailandLicensePlateRequest::getBody() const
{
    return body_;
}

void RecognizeThailandLicensePlateRequest::setBody(const ThailandLicensePlateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeThailandLicensePlateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeThailandLicensePlateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


