

#include "huaweicloud/ocr/v1/model/RecognizeInsurancePolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeInsurancePolicyRequest::RecognizeInsurancePolicyRequest()
{
    bodyIsSet_ = false;
}

RecognizeInsurancePolicyRequest::~RecognizeInsurancePolicyRequest() = default;

void RecognizeInsurancePolicyRequest::validate()
{
}

web::json::value RecognizeInsurancePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeInsurancePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


InsurancePolicyRequestBody RecognizeInsurancePolicyRequest::getBody() const
{
    return body_;
}

void RecognizeInsurancePolicyRequest::setBody(const InsurancePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeInsurancePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeInsurancePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


