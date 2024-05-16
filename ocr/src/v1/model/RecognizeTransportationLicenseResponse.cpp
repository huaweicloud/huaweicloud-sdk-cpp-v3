

#include "huaweicloud/ocr/v1/model/RecognizeTransportationLicenseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTransportationLicenseResponse::RecognizeTransportationLicenseResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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

std::string RecognizeTransportationLicenseResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeTransportationLicenseResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeTransportationLicenseResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeTransportationLicenseResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


