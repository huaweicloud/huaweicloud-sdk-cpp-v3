

#include "huaweicloud/ocr/v1/model/RecognizeColombiaIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeColombiaIdCardResponse::RecognizeColombiaIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeColombiaIdCardResponse::~RecognizeColombiaIdCardResponse() = default;

void RecognizeColombiaIdCardResponse::validate()
{
}

web::json::value RecognizeColombiaIdCardResponse::toJson() const
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
bool RecognizeColombiaIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ColombiaIdCardResult refVal;
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


ColombiaIdCardResult RecognizeColombiaIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeColombiaIdCardResponse::setResult(const ColombiaIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeColombiaIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeColombiaIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeColombiaIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeColombiaIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeColombiaIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeColombiaIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


