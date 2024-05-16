

#include "huaweicloud/ocr/v1/model/RecognizeBusinessLicenseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBusinessLicenseResponse::RecognizeBusinessLicenseResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeBusinessLicenseResponse::~RecognizeBusinessLicenseResponse() = default;

void RecognizeBusinessLicenseResponse::validate()
{
}

web::json::value RecognizeBusinessLicenseResponse::toJson() const
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
bool RecognizeBusinessLicenseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BusinessLicenseResult refVal;
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


BusinessLicenseResult RecognizeBusinessLicenseResponse::getResult() const
{
    return result_;
}

void RecognizeBusinessLicenseResponse::setResult(const BusinessLicenseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBusinessLicenseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBusinessLicenseResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeBusinessLicenseResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeBusinessLicenseResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeBusinessLicenseResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeBusinessLicenseResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


