

#include "huaweicloud/ocr/v1/model/RecognizeVehicleLicenseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVehicleLicenseResponse::RecognizeVehicleLicenseResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeVehicleLicenseResponse::~RecognizeVehicleLicenseResponse() = default;

void RecognizeVehicleLicenseResponse::validate()
{
}

web::json::value RecognizeVehicleLicenseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool RecognizeVehicleLicenseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VehicleLicenseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


VehicleLicenseResult RecognizeVehicleLicenseResponse::getResult() const
{
    return result_;
}

void RecognizeVehicleLicenseResponse::setResult(const VehicleLicenseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVehicleLicenseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVehicleLicenseResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeVehicleLicenseResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeVehicleLicenseResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeVehicleLicenseResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeVehicleLicenseResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


