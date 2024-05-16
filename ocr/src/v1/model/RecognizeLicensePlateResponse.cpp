

#include "huaweicloud/ocr/v1/model/RecognizeLicensePlateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeLicensePlateResponse::RecognizeLicensePlateResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeLicensePlateResponse::~RecognizeLicensePlateResponse() = default;

void RecognizeLicensePlateResponse::validate()
{
}

web::json::value RecognizeLicensePlateResponse::toJson() const
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
bool RecognizeLicensePlateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<LicensePlateResult> refVal;
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


std::vector<LicensePlateResult>& RecognizeLicensePlateResponse::getResult()
{
    return result_;
}

void RecognizeLicensePlateResponse::setResult(const std::vector<LicensePlateResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeLicensePlateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeLicensePlateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeLicensePlateResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeLicensePlateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeLicensePlateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeLicensePlateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


