

#include "huaweicloud/ocr/v1/model/RecognizeVehicleCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVehicleCertificateResponse::RecognizeVehicleCertificateResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeVehicleCertificateResponse::~RecognizeVehicleCertificateResponse() = default;

void RecognizeVehicleCertificateResponse::validate()
{
}

web::json::value RecognizeVehicleCertificateResponse::toJson() const
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
bool RecognizeVehicleCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VehicleCertificateResult refVal;
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


VehicleCertificateResult RecognizeVehicleCertificateResponse::getResult() const
{
    return result_;
}

void RecognizeVehicleCertificateResponse::setResult(const VehicleCertificateResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVehicleCertificateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVehicleCertificateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeVehicleCertificateResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeVehicleCertificateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeVehicleCertificateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeVehicleCertificateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


