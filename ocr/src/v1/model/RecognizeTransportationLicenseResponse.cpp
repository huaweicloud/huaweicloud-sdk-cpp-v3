

#include "huaweicloud/ocr/v1/model/RecognizeTransportationLicenseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTransportationLicenseResponse::RecognizeTransportationLicenseResponse()
{
    resultIsSet_ = false;
}

RecognizeTransportationLicenseResponse::~RecognizeTransportationLicenseResponse() = default;

void RecognizeTransportationLicenseResponse::validate()
{
}

web::json::value RecognizeTransportationLicenseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeTransportationLicenseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            TransportationLicenseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


TransportationLicenseResult RecognizeTransportationLicenseResponse::getResult() const
{
    return result_;
}

void RecognizeTransportationLicenseResponse::setResult(const TransportationLicenseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeTransportationLicenseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeTransportationLicenseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


