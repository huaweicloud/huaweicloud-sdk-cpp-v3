

#include "huaweicloud/ocr/v1/model/RecognizeIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeIdCardResponse::RecognizeIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeIdCardResponse::~RecognizeIdCardResponse() = default;

void RecognizeIdCardResponse::validate()
{
}

web::json::value RecognizeIdCardResponse::toJson() const
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
bool RecognizeIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            IdCardResult refVal;
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


IdCardResult RecognizeIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeIdCardResponse::setResult(const IdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


