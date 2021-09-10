

#include "huaweicloud/ocr/v1/model/RecognizeVehicleLicenseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVehicleLicenseRequest::RecognizeVehicleLicenseRequest()
{
    bodyIsSet_ = false;
}

RecognizeVehicleLicenseRequest::~RecognizeVehicleLicenseRequest() = default;

void RecognizeVehicleLicenseRequest::validate()
{
}

web::json::value RecognizeVehicleLicenseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeVehicleLicenseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VehicleLicenseRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


VehicleLicenseRequestBody RecognizeVehicleLicenseRequest::getBody() const
{
    return body_;
}

void RecognizeVehicleLicenseRequest::setBody(const VehicleLicenseRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVehicleLicenseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVehicleLicenseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


