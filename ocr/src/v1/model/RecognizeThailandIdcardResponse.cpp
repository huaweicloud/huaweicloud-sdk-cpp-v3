

#include "huaweicloud/ocr/v1/model/RecognizeThailandIdcardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandIdcardResponse::RecognizeThailandIdcardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeThailandIdcardResponse::~RecognizeThailandIdcardResponse() = default;

void RecognizeThailandIdcardResponse::validate()
{
}

web::json::value RecognizeThailandIdcardResponse::toJson() const
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
bool RecognizeThailandIdcardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ThailandIdcardResult refVal;
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


ThailandIdcardResult RecognizeThailandIdcardResponse::getResult() const
{
    return result_;
}

void RecognizeThailandIdcardResponse::setResult(const ThailandIdcardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeThailandIdcardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeThailandIdcardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeThailandIdcardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeThailandIdcardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeThailandIdcardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeThailandIdcardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


