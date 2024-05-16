

#include "huaweicloud/ocr/v1/model/RecognizePassportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizePassportResponse::RecognizePassportResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizePassportResponse::~RecognizePassportResponse() = default;

void RecognizePassportResponse::validate()
{
}

web::json::value RecognizePassportResponse::toJson() const
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
bool RecognizePassportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PassportResult refVal;
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


PassportResult RecognizePassportResponse::getResult() const
{
    return result_;
}

void RecognizePassportResponse::setResult(const PassportResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizePassportResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizePassportResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizePassportResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizePassportResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizePassportResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizePassportResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


