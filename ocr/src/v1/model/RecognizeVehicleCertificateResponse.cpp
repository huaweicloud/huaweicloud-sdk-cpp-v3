

#include "huaweicloud/ocr/v1/model/RecognizeVehicleCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVehicleCertificateResponse::RecognizeVehicleCertificateResponse()
{
    resultIsSet_ = false;
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

}
}
}
}
}


