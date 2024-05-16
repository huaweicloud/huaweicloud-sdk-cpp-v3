

#include "huaweicloud/ocr/v1/model/RecognizeHkIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHkIdCardResponse::RecognizeHkIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeHkIdCardResponse::~RecognizeHkIdCardResponse() = default;

void RecognizeHkIdCardResponse::validate()
{
}

web::json::value RecognizeHkIdCardResponse::toJson() const
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
bool RecognizeHkIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            HkIdCardResult refVal;
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


HkIdCardResult RecognizeHkIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeHkIdCardResponse::setResult(const HkIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeHkIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeHkIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeHkIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeHkIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeHkIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeHkIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


