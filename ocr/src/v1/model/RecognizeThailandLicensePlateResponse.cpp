

#include "huaweicloud/ocr/v1/model/RecognizeThailandLicensePlateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandLicensePlateResponse::RecognizeThailandLicensePlateResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeThailandLicensePlateResponse::~RecognizeThailandLicensePlateResponse() = default;

void RecognizeThailandLicensePlateResponse::validate()
{
}

web::json::value RecognizeThailandLicensePlateResponse::toJson() const
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
bool RecognizeThailandLicensePlateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ThailandLicensePlateItem> refVal;
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


std::vector<ThailandLicensePlateItem>& RecognizeThailandLicensePlateResponse::getResult()
{
    return result_;
}

void RecognizeThailandLicensePlateResponse::setResult(const std::vector<ThailandLicensePlateItem>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeThailandLicensePlateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeThailandLicensePlateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeThailandLicensePlateResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeThailandLicensePlateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeThailandLicensePlateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeThailandLicensePlateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


