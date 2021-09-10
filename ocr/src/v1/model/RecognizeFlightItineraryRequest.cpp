

#include "huaweicloud/ocr/v1/model/RecognizeFlightItineraryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFlightItineraryRequest::RecognizeFlightItineraryRequest()
{
    bodyIsSet_ = false;
}

RecognizeFlightItineraryRequest::~RecognizeFlightItineraryRequest() = default;

void RecognizeFlightItineraryRequest::validate()
{
}

web::json::value RecognizeFlightItineraryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeFlightItineraryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FlightItineraryRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


FlightItineraryRequestBody RecognizeFlightItineraryRequest::getBody() const
{
    return body_;
}

void RecognizeFlightItineraryRequest::setBody(const FlightItineraryRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeFlightItineraryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeFlightItineraryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


