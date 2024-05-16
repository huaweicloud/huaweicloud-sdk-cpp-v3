

#include "huaweicloud/ocr/v1/model/RecognizeChileIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeChileIdCardResponse::RecognizeChileIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeChileIdCardResponse::~RecognizeChileIdCardResponse() = default;

void RecognizeChileIdCardResponse::validate()
{
}

web::json::value RecognizeChileIdCardResponse::toJson() const
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
bool RecognizeChileIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ChileIdCardResult refVal;
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


ChileIdCardResult RecognizeChileIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeChileIdCardResponse::setResult(const ChileIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeChileIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeChileIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeChileIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeChileIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeChileIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeChileIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


