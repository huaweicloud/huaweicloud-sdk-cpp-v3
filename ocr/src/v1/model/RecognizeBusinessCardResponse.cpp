

#include "huaweicloud/ocr/v1/model/RecognizeBusinessCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBusinessCardResponse::RecognizeBusinessCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeBusinessCardResponse::~RecognizeBusinessCardResponse() = default;

void RecognizeBusinessCardResponse::validate()
{
}

web::json::value RecognizeBusinessCardResponse::toJson() const
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
bool RecognizeBusinessCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BusinessCardResult refVal;
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


BusinessCardResult RecognizeBusinessCardResponse::getResult() const
{
    return result_;
}

void RecognizeBusinessCardResponse::setResult(const BusinessCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBusinessCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBusinessCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeBusinessCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeBusinessCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeBusinessCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeBusinessCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


