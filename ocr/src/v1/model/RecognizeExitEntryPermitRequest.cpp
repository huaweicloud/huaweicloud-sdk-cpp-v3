

#include "huaweicloud/ocr/v1/model/RecognizeExitEntryPermitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeExitEntryPermitRequest::RecognizeExitEntryPermitRequest()
{
    bodyIsSet_ = false;
}

RecognizeExitEntryPermitRequest::~RecognizeExitEntryPermitRequest() = default;

void RecognizeExitEntryPermitRequest::validate()
{
}

web::json::value RecognizeExitEntryPermitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeExitEntryPermitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExitEntryPermitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ExitEntryPermitRequestBody RecognizeExitEntryPermitRequest::getBody() const
{
    return body_;
}

void RecognizeExitEntryPermitRequest::setBody(const ExitEntryPermitRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeExitEntryPermitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeExitEntryPermitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


