

#include "huaweicloud/ocr/v1/model/RecognizeFlightItineraryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFlightItineraryResponse::RecognizeFlightItineraryResponse()
{
    resultIsSet_ = false;
}

RecognizeFlightItineraryResponse::~RecognizeFlightItineraryResponse() = default;

void RecognizeFlightItineraryResponse::validate()
{
}

web::json::value RecognizeFlightItineraryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeFlightItineraryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FlightItineraryResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

FlightItineraryResult RecognizeFlightItineraryResponse::getResult() const
{
    return result_;
}

void RecognizeFlightItineraryResponse::setResult(const FlightItineraryResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeFlightItineraryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeFlightItineraryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


