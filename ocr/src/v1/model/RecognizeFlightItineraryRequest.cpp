

#include "huaweicloud/ocr/v1/model/RecognizeFlightItineraryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFlightItineraryRequest::RecognizeFlightItineraryRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeFlightItineraryRequest::~RecognizeFlightItineraryRequest() = default;

void RecognizeFlightItineraryRequest::validate()
{
}

web::json::value RecognizeFlightItineraryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeFlightItineraryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
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

std::string RecognizeFlightItineraryRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeFlightItineraryRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeFlightItineraryRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeFlightItineraryRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
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


