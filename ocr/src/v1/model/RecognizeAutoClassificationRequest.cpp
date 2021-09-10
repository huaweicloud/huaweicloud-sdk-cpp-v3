

#include "huaweicloud/ocr/v1/model/RecognizeAutoClassificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAutoClassificationRequest::RecognizeAutoClassificationRequest()
{
    bodyIsSet_ = false;
}

RecognizeAutoClassificationRequest::~RecognizeAutoClassificationRequest() = default;

void RecognizeAutoClassificationRequest::validate()
{
}

web::json::value RecognizeAutoClassificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeAutoClassificationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AutoClassificationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AutoClassificationRequestBody RecognizeAutoClassificationRequest::getBody() const
{
    return body_;
}

void RecognizeAutoClassificationRequest::setBody(const AutoClassificationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeAutoClassificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeAutoClassificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


